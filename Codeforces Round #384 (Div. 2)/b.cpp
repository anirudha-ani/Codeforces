#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll  n , k ;
    ll tracker[55] ;
    tracker[1] = 1;
    for(int i = 2 ; i <= 55 ; i++)
    {
        tracker[i] = tracker[i-1] * 2 ;
    }
    scanf("%lld %lld", &n , &k);


    for(int i = n ; i>=1 ; i--)
    {
        if(k%tracker[i] == 0)
        {
            cout << i << endl ;
            return 0;
        }
    }
    return 0;
}

