#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

int main()
{
    ll n , m ;

    scanf("%lld %lld", &n , &m);

    if(m>=n)
    {
        printf("%lld\n",n);
    }

    else
    {
        ll ans = m + 1;


        //cout << ans << endl ;
        ll low = 1 ;
        ll high = 1000000000000000000;
        //cout << high << endl ;
        ll a = 2 ;
        ll d = 1 ;
        n -= m+1;

        if(n<=0)
        {
            printf("%lld\n",m+1);
            return 0;
        }
        int counter = 0 ;
        ll mid = (low + high) / 2;
        while(counter < 100)
        {
             mid = (low + high) / 2 ;
             //cout << "L = " << low << " H = " << high << " mid = " << mid << endl ;
           // cout << n - (mid * (2*a + (mid-1)))/2 + (mid - 1 ) * m << endl ;
           double x = n - ((mid/2.0) * (2*a + (mid-1)));

            if( x> 0.00000001 )
            {
                low = mid+1;
            }
            else
            {
                high = mid ;
            }
            counter++;
        }

        mid = low ;
        double x = n - ((mid/2.0) * (2*a + (mid-1)));
        if(x< 0.00000001 )
        {
            ans += low;
        }
        else
        {
            ans += high ;
        }

        printf("%lld\n" , ans);
    }
    return 0;
}

