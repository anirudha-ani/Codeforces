#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int b , d , s ;
    long long ans = 9223372036854775807 ;

    long long int temp_b , temp_d , temp_s , maxi;
    scanf("%lld %lld %lld", &b , &d , &s);

    if(b==d && d==s && s==b)
    {
        ans = 0 ;
    }
    else
    {
        temp_b = b ;
        temp_d = d ;
        temp_s = s ;

        maxi = max(temp_b , max(temp_d , temp_s));
        ans = min(ans , maxi - temp_b + maxi - temp_d + maxi - temp_s);

        temp_b = b ;
        temp_d = d ;
        temp_s = s ;

        if(temp_b >= 1)
        {
            temp_b--;

            maxi = max(temp_b , max(temp_d , temp_s));
            ans = min(ans , maxi - temp_b + maxi - temp_d + maxi - temp_s);
        }


        temp_b = b ;
        temp_d = d ;
        temp_s = s ;

        if(temp_b >= 1 && temp_d >= 1)
        {
            temp_b--;
            temp_d--;

            maxi = max(temp_b , max(temp_d , temp_s));
            ans = min(ans , maxi - temp_b + maxi - temp_d + maxi - temp_s);
        }



        temp_b = b ;
        temp_d = d ;
        temp_s = s ;

        if(temp_d >= 1)
        {
            temp_d--;

            maxi = max(temp_b , max(temp_d , temp_s));
            ans = min(ans , maxi - temp_b + maxi - temp_d + maxi - temp_s);
        }


        temp_b = b ;
        temp_d = d ;
        temp_s = s ;

        if(temp_d >= 1 && temp_s >= 1)
        {
            temp_d--;
            temp_s--;

            maxi = max(temp_b , max(temp_d , temp_s));
            ans = min(ans , maxi - temp_b + maxi - temp_d + maxi - temp_s);
        }


        temp_b = b ;
        temp_d = d ;
        temp_s = s ;

        if(temp_s>=1)
        {
            temp_s--;

            maxi = max(temp_b , max(temp_d , temp_s));
            ans = min(ans , maxi - temp_b + maxi - temp_d + maxi - temp_s);
        }


        temp_b = b ;
        temp_d = d ;
        temp_s = s ;

        if(temp_s >= 1 && temp_b >= 1)
        {
            temp_s--;
            temp_b--;

            maxi = max(temp_b , max(temp_d , temp_s));
            ans = min(ans , maxi - temp_b + maxi - temp_d + maxi - temp_s);
        }



    }
    printf("%lld\n", ans);
    return 0 ;
}
