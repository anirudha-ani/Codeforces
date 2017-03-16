#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

bool d_sort(int a , int b)
{
    return a > b ;
}

int main()
{
    int n , m ;
    ll start , finish ;

    vector <ll> chess_start ;
    vector <ll>chess_finish ;
    vector <ll> pro_start ;
    vector <ll> pro_finish ;

    scanf("%d", &n);

    for(int i = 0 ; i < n ; i++)
    {
        scanf("%lld %lld", &start , &finish);
        chess_start.push_back(start);
        chess_finish.push_back(finish);

    }

    scanf("%d", &m);

    for(int i = 0 ; i < m ; i++)
    {
        scanf("%lld %lld", &start , &finish);
        pro_start.push_back(start);
        pro_finish.push_back(finish);

    }

    ll distance1 = 0 ;
    ll distance2 = 0 ;

    sort(chess_start.begin() , chess_start.end() , d_sort);
    sort(pro_finish.begin() , pro_finish.end());

    distance1 = max(distance1 , chess_start[0] - pro_finish[0]);
    //cout << pro_finish[0] << "::" << chess_start[0] << endl ;
    sort(pro_start.begin() , pro_start.end() , d_sort);
    sort(chess_finish.begin() , chess_finish.end());
    //cout << pro_finish[0] << "::" << pro_start[0] << endl ;
    distance2 = max(distance2 , pro_start[0] - chess_finish[0]);

    ll ans = max(distance1 , distance2);

    printf("%lld\n",ans);
    return 0;
}

