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
    string input;

    getline(cin , input);

    if(input[5] == 'w')
    {
        int day = input[0] - '0';
        int start ,count = 0;

        if(day == 5)
        {
            start = 1;
        }
        else  if(day == 6)
        {
            start = 2;
        }
        else if(day == 7)
        {
            start = 3;
        }
        else if(day == 1)
        {
            start = 4;
        }
        else if(day == 2)
        {
            start = 5;
        }
        else if(day == 3)
        {
            start = 6;
        }
        else if(day == 4)
        {
            start = 7;
        }

        while(start <= 366)
        {
            start+=7;
            count ++;
        }
        printf("%d\n", count);


    }
    else if(input[0] >= '0' && input[0]<='9' && input[1] >= '0' && input[1]<='9')
    {
        int month = ((input[0] - '0')*10) + (input[1] - '0');

        if(month <= 29)
        {
            printf("12\n");
        }
        else if(month == 31)
        {
            printf("7\n");
        }
        else
        {
            printf("11\n");
        }
    }
    else
    {
        printf("12\n");
    }
    return 0;
}


/********  WOW you have read the whole thing !!! Impressive ... here is my contact info :v anirudhaprasun@gmail.com  ************/

