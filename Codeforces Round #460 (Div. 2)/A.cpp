#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int  n ;
    double m , a , b ;
    scanf("%d %lf", &n , &m);

    double mins  = 100000000000.5;
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%lf %lf", &a , &b);
        double x = 1.0 * a / (1.0 * b);
        if(x < mins)
        {
            mins = x ;
        }
    }
    double ans = m * mins;
    printf("%.10f\n",ans );
    return 0 ;
}
