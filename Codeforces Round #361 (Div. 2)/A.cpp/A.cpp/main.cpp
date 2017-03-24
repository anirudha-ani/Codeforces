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
#include <utility>

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

/******************* String To Int **************************************/
int stringToInt(string x)
{
    int length = x.length();
    
    int ans = 0;
    
    for(int i = length-1 , j= 0 ; i>=0 ; i--,j++)
    {
        ans += (x[i]-'0') * power(10,j);
        //cout << "Ans = " << ans << endl;
    }
    return ans;
}

/******************** Main Code Starts here *****************************/

int main()
{
    int n ;
    
    string input ;
    
    cin >> n ;
    
    cin >> input ;
    
    bool row[4];
    bool column[3];
    
    for(int i = 0 ; i< 4 ; i++)
    {
        if(i<3)
        {
            column[i] = false;
        }
        row[i] = false;
    }
    
    for(int  j = 0 ; j < n ; j++)
    {
        if(input[j] == '1')
        {
            row[0] = true;
            column[0] = true;
        }
        if(input[j] == '2')
        {
            row[0] = true;
            column[1] = true;
        }
        if(input[j] == '3')
        {
            row[0] = true;
            column[2] = true;
        }
        if(input[j] == '4')
        {
            row[1] = true;
            column[0] = true;
        }
        if(input[j] == '5')
        {
            row[1] = true;
            column[1] = true;
        }
        if(input[j] == '6')
        {
            row[1] = true;
            column[2] = true;
        }
        if(input[j] == '7')
        {
            row[2] = true;
            column[0] = true;
        }
        if(input[j] == '8')
        {
            //row[2] = true;
            column[1] = true;
        }
        if(input[j] == '9')
        {
            row[2] = true;
            column[2] = true;
        }
        if(input[j] == '0')
        {
            row[3] = true;
            column[1] = true;
        }
    }
    
    int row_covered = 0;
    int column_covered = 0;
    
    for(int i = 0 ; i < 3 ; i++)
    {
        if(row[0]==true && row [3] == true)
        {
            row_covered = 4;
        }
        else if(row[0]==true && row [2] == true)
        {
            row_covered = 3;
        }
        if(column[0] == true && column[2]== true)
        {
            column_covered = 3;
        }
    }
    
    if(column_covered == 3 && row_covered >=3)
    {
        printf("YES\n");
        
    }
    else if(row_covered == 4)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}


/********  WOW you have read the whole thing !!! Impressive ... here is my contact info :v anirudhaprasun@gmail.com  ************/
