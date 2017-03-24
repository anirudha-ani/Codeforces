#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false);

    ll n , t;
    string dir ;

    cin >> n ;
    int coordinate = 0 ;
    bool possible = true ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> t >> dir ;
        if(!possible)
        {
            continue;
        }
        if(dir == "East" || dir == "West")
        {
            if(coordinate == 0 || coordinate == 20000)
            {
                possible = false ;
                //break;
            }
        }
        else if(dir == "North")
        {
            if(coordinate == 0)
            {
                possible = false;
                //break;
            }
            else if(coordinate - t < 0 )
            {
                possible = false ;
                //break ;
            }
            else
            {
                coordinate -= t;
            }
        }
        else if(dir == "South")
        {
            if(coordinate == 20000)
            {
                possible = false;
                //break;
            }
            else if(coordinate + t > 20000 )
            {
                possible = false ;
                //break ;
            }
            else
            {
                coordinate += t;
            }
        }
    }
    if(coordinate != 0)
    {
        possible = false;
    }

    if(possible)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0 ;
}
