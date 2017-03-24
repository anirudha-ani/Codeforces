/***************** Cause QUOTES are more Important than Code !!!!!!!!! *************/
/**
This is Anirudha , this is not Anirudha
Anirudha is alive , Anirudha is not alive
You know him , you don't know him ...
-Anirudha


You can't see the forest for the trees.-Pain (Naruto)

You are working for your justice and I for mine.
We are just ordinary people driven to revenge in the name of justice.
But if revenge is called justice then that justice breeds yet more revenge.
And becomes a chain of hatred.-Pain(Naruto)

Peace has cost you strength & victory defeated you - Batman Dark Knight Rises

**/


#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <stack>
#include <queue>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

/******************   Macros ************************/

#define ll long long
#define M 100000000

/*******************  Calculate Combinatorics (nCr)  *******************/

int combinatorics(int n, int r)
{
	if(r == 1)  // base case 1
		return n;
	else if (n == r)  // base case 2
		return 1;
	else //general case
		return(combinatorics(n-1, r) + combinatorics(n-1, r-1));
}

/*******************   Calculate Prime numbers        *******************/

//#define M 100000000
int marked[M/64 + 2];

#define on(x) (marked[x/64] & (1<<((x%64)/2)))
#define mark(x)  marked[x/64] |= (1<<((x%64)/2))

void sieve(int n)
{
  for (int i = 3; i * i < n; i += 2) {
    if (!on(i)) {
      for (int j = i * i; j <= n; j += i + i) {
        mark(j);
      }
    }
  }
}

bool isPrime(int num)
{
  return num > 1 && (num == 2 || ((num & 1) && !on(num)));
}

/******************** GCD of a & b    ***********************************/

int gcd(int a, int b)
{
  return b == 0 ? a : gcd(b, a % b);
}

/******************** LCM of a & b     **********************************/

int lcm(int a, int b)
{
  return (a / gcd(a, b)) * b;
}

/******************** Main Code Starts here *****************************/

int main()
{
    long long int x ;
    scanf("%lld", &x);

    long long int m , n;
    n=1;
    m=x;

    queue<long long int>n1;
    queue<long long int>m1;

    stack <long long int> m2;
    stack <long long int> n2;

    bool equal_exists = false;

    int ways = 0;

    for ( ; n <= m; n++ )
    {
        m = (6*x + n*n*n - n)/ (3*n*n + 3*n);

        if((6*x) == (3*m*n*n + 3*m*n - n*n*n +n))
        {
            if(n<=m)
            {
                n1.push(n);
                m1.push(m);
                ways++;

                if(n!=m)
                {
                    n2.push(m);
                    m2.push(n);
                    ways++;
                }
            }
        }


    }

    printf("%d\n",ways);

    while(!n1.empty())
    {
        printf("%lld %lld\n",n1.front() , m1.front());

        n1.pop();
        m1.pop();
    }

    while(!n2.empty())
    {
        printf("%lld %lld\n",n2.top() , m2.top());

        n2.pop();
        m2.pop();
    }
    return 0;
}

/********  WOW you have read the whole thing !!! Impressive ... here is my contact info :v anirudhaprasun@gmail.com  ************/
