#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

int main()
{
    int n , x ;
    map <int , int > found ;
    int current = 0 ,ans = 0 ;

    scanf("%d", &n);

    for(int i = 0 ; i < 2*n ; i++)
    {
        scanf("%d", &x);

        found[x]++;

        if(found[x]%2 == 0)
        {
            current--;
        }
        else
        {
            current++;
        }
        ans = max(ans , current);
    }

    printf("%d\n",ans);
    return 0;
}
