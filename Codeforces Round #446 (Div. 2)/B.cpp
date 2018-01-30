#include <bits/stdc++.h>

using namespace std ;

int main()
{
    long long int n , L , total_alive = 0 , can_kill ;
    vector <long long int> data ;

    scanf("%lld", &n);

    for(long long int i = 0 ; i < n ; i++)
    {
        scanf("%lld", &L);
        data.push_back(L);
    }
    can_kill = n;
    for(long long int i = n-1 ; i >= 0 ; i--)
    {
        if(can_kill > i)
        {
            total_alive++;
        }
        can_kill = min(i-data[i], can_kill);
    }

    printf("%lld\n", total_alive);
    return 0 ;
}
