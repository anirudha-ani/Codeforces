#include <bits/stdc++.h>

using namespace std ;

int main()
{
    long long int input ;
    scanf("%lld", &input);
    long long int ans = 0 ;
    for(long long int i = 0 ; i < 32000; i++)
    {
        if(input <= i*i)
        {
            if(input <= i*(i-1))
            {
                ans = i + (i-1);
            }
            else
            {
                ans = i+i;
            }
            break;
        }
    }
    printf("%lld\n", ans);
    return 0 ;
}
