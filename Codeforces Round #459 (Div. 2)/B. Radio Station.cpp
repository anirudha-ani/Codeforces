#include <bits/stdc++.h>

using namespace std ;

int main()
{
    ios::sync_with_stdio(false);
    int n , m ;
    cin >> n >> m ;
    //scanf("%d %d", &n , &m);

    map <string , string> name_to_ip;

    string name , ip ;

    for(int i = 0; i < n ; i++)
    {
        cin >> name >> ip ;
        name_to_ip[ip] = name ;
    }
    string command , filtered_ip;

    for(int i = 0 ; i < m ; i++)
    {
        cin >> command >> ip ;

         filtered_ip = ip.substr(0 , ip.size() -1 );
         //cout << filtered_ip << endl ;
         cout << command << " " << ip << " " << "#" << name_to_ip[filtered_ip] << endl ;
    }
    return 0 ;
}
