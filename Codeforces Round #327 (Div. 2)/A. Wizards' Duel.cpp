#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    double l , p , q;

    cin >> l >> p >> q;

    double ans = 1.0*(l/(p+q))*p;

    cout << ans << endl;
    return 0;
}
