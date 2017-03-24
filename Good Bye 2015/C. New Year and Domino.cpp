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
bool map[505][505] = {false};

int cumalitive_row[505][505] = {0};
int cumalitive_column[505][505] = {0};

int main()
{
    int  r , c , length , cc , cr;



    scanf("%d %d", &r , &c);

    string input;

    for(int  i = 0 ; i <  r ; i++)
    {
        cin >> input;
        length = input.length();

        for(int j = 0 ; j < length ;j++)
        {
            if(input[j] == '.')
            {
                map[i+1][j+1] = true;
            }
            else
            {
                map[i+1][j+1] = false;
            }
        }

    }

    for(int  i = 1 ; i <=r ; i++ )
    {
        cr = 0;
        for(int j = 1 ; j <= c ;j++)
        {
            if(map[i][j]== true && map[i][j-1] == true)
            {
                cumalitive_row[i][j] = cr+1;
                cr = cumalitive_row[i][j];
            }
            else
            {
                cumalitive_row[i][j] = cr;
            }
        }
    }

    for(int i = 1 ; i <= c ; i++)
    {
        cc = 0;

        for(int j = 1 ; j <= r ; j++)
        {
            if(map[j][i]== true && map[j-1][i] == true )
            {
                cumalitive_column[j][i] = cc +1 ;
                cc = cumalitive_column[j][i];
            }
            else
            {
                cumalitive_column[j][i] = cc ;
            }
        }
    }

    int query;

    scanf("%d", &query);
    int total , c1 ,c2 , r1 , r2;
    for(int i = 0 ; i < query ; i++)
    {
        total = 0;
        scanf("%d %d %d %d", &r1 , &c1 , &r2 , &c2);

        for(int j = c1 ; j <= c2 ; j++)
        {
            total+= cumalitive_column[r2][j] - cumalitive_column[r1][j];
        }
        for(int j = r1 ; j <= r2 ; j++)
        {
            total+= cumalitive_row[j][c2] - cumalitive_row[j][c1];
        }
        printf("%d\n", total);
    }


    return 0;
}


/********  WOW you have read the whole thing !!! Impressive ... here is my contact info :v anirudhaprasun@gmail.com  ************/

