#include <bits/stdc++.h>

using namespace std ;

string data[2005];

int main()
{
    ios::sync_with_stdio(false);
    int n , m , k ;

    cin >> n >> m >> k ;
    //scanf("%d %d %d", &n , &m , &k);

    for(int i = 0 ; i < n ; i++)
    {
        cin >> data[i] ;
    }
    long long int ans = 0 ;
    if( k == 1)
    {
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                if(data[i][j] == '.')
                {
                    ans++;
                }
            }
            //consicutive = 0 ;
        }
        printf("%lld\n", ans);
        return 0 ;
    }
    int consicutive = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(data[i][j] == '.')
            {
                consicutive++;
            }
            else
            {
                if(consicutive >= k)
                {
                    ans += (consicutive - k + 1);
                }
                consicutive = 0 ;
            }
        }
        if(consicutive != 0)
        {
            if(consicutive >= k)
            {
                ans += (consicutive - k + 1);
            }
        }
        consicutive = 0 ;
    }
    for(int j = 0 ; j < m ; j++)
    {
        for(int i = 0 ; i < n ; i++)
        {
            if(data[i][j] == '.')
            {
                consicutive++;
            }
            else
            {
                if(consicutive >= k)
                {
                    ans += (consicutive - k + 1);
                }
                consicutive = 0 ;
            }
        }
        if(consicutive != 0)
        {
            if(consicutive >= k)
            {
                ans += (consicutive - k + 1);
            }
        }
        consicutive = 0 ;
    }
    printf("%lld\n", ans);
    return 0 ;
}
