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

#define M 100000000
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
    ll int a , b ,k , ans;

    scanf("%lld %lld %lld",&k, &a , &b );

    if(a<0 && b<=0)
    {
        a = a * -1;
        b = b* -1;
        ll int temp ;
        temp = a;
        a = b;
        b = temp;
        if(a==0)
        {
            ans = b/k+1;
        }
        else
        {
            ans = (b/k) - ((a-1)/k);
        }
    }
    else if(a <= 0 && b > 0)
    {
        ans = ((-1*a))/k + b/k + 1;
    }
    else if(a==0 && b==0)
    {
        ans = 1;
    }
    else
    {
        ans = (b/k) - ((a-1)/k);
    }
    printf("%lld\n",ans);
    return 0;
}

