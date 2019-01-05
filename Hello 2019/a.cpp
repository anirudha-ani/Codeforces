#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

int main()
{
    string tab;
    string cards[5];

    cin >> tab ;
    for(int i = 0 ; i < 5 ; i++)
    {
        cin >> cards[i];
    }

    bool possible = false ;

    for(int i = 0 ; i < 5 ; i++)
    {
        if(tab[0] == cards[i][0] || tab[1] == cards[i][1])
        {
            possible = true;
        }
    }
    if(possible)
    {
        cout << "YES" << endl ;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0 ;
}
