#include <bits/stdc++.h>

using namespace std ;
#define ll long long int
int main()
{
    ll a , b;

    cin >> a >> b ;

    ll counter = 0 ;
    while(a<=b)
    {
        a = a * 3;
        b = b * 2 ;
        counter++;
    }
    cout << counter << endl;
    return 0 ;
}

