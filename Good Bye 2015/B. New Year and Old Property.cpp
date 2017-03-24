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

/******************** x to the power y **********************************/

long long power(long long x ,long long y)
{
    long long result = 1 ;

    for(long long  i = 0 ; i < y ; i++)
    {
        result*=x;
    }
    return result;
}
/******************** Main Code Starts here *****************************/

int main()
{
    long long int a , b ,total;
    long long int lower_bound = 0 , upper_bound = 0;

    scanf("%lld %lld", &a , &b);
    long long int x = power(2,60);
    long long int y;
     x = x -1;
     y = x>>1;
     int position = 59;
    while(y > b)
    {
        //cout << x <<endl;
        x = y;
        y = x>>1;
        position--;

    }
    x = x-1;
    long long sub = power(2,position+1);
    long long int count = 0;
    long long Ah= (a/2);
    //cout << x << ":::" << Ah << ":::"<<sub<<endl;
    while(x>= (Ah))
    {
        if(x >= a && x <= b)
        {
            count++;
        }
        x = x<<1;
        x -=sub;
        x+=1;
        if(x == y)
        {
            y = x>>1;
            x = x-1;
            position--;
            sub = power(2,position+1);
        }
    }

    //cout<< <<endl;
    printf("%lld\n", count);
    return 0;
}


/********  WOW you have read the whole thing !!! Impressive ... here is my contact info :v anirudhaprasun@gmail.com  ************/

