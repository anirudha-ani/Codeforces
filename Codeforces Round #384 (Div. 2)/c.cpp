#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll n ;

    scanf("%lld", &n);

    double x = 2.0 / n ;
    x -= 1.0 /(1.0 * n) ;
    x -= 1.0 / (1.0*(n+1));
    x  -= 1.0 / (1.0* (n) * (n+1));


    cout << n <<" "<< n+1 <<" " << n * (n+1) << endl ;

    return 0;
}
