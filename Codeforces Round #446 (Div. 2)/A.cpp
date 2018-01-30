#include <bits/stdc++.h>

using namespace std ;

int main()
{
    long long int n , total_cola = 0 , first_big = 0  , second_big = 0 , remaining , sizes ;

    scanf("%lld", &n);


    for(long long int i = 0 ; i < n ; i++)
    {
        scanf("%lld", &remaining);

        total_cola += remaining ;

    }
    for(long long int i = 0 ; i < n ; i++)
    {
        scanf("%lld", &sizes);

        if(sizes>first_big)
        {
            swap(first_big , second_big);
            first_big = sizes;
        }
        else if(sizes > second_big)
        {
            second_big = sizes ;
        }
    }
    if((first_big + second_big) >= total_cola)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
