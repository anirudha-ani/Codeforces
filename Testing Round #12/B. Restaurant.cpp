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

struct order
{
    int start;
    int finish;
}input[500005];

bool sortByX(order m,order n)
{

    if( m.finish == n.finish)
    {
        return (m.start < n.start);
    }
    else
        return ( m.finish < n.finish);
}
int main()
{
    int n;

    scanf("%d", &n);

    for(int i = 0 ; i < n ; i++)
    {
        int l , r;
        scanf("%d %d", &l, &r);

        input[i].start = l;
        input[i].finish = r;
    }

    sort(input , input + n ,sortByX);

    ll count = 1;
    int index = 0;
    for(int i = 1 ; i<n ;i++)
    {
        if(input[index].finish <input[i].start)
        {
            count++;
            index = i;
        }

    }
    cout << count << endl;
    return 0;
}
