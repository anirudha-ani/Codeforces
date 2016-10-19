#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int k , r ;

    scanf("%d %d", &k , &r);

    int ans = 1 ;

    while(1)
    {
        if((k*ans)%10 == 0)
        {
            break;
        }
        if((k*ans)%10 == r)
        {
            break;
        }
        ans++;
    }
    printf("%d\n",ans);
    return 0 ;
}
