#include <bits/stdc++.h>

using namespace std;

#define ll long long


int main()
{
    int n , k ;

    scanf("%d %d", &n , &k);

    int minute = 240;

    minute -= k;
    int count = 0 ;
    for(int i = 1 ; i <= n ; i++)
    {
        if(minute - i * 5 >=0)
        {
            count = i;
            minute -= i*5;
        }
        else
        {
            break;
        }
    }

    printf("%d\n",count);
    return 0 ;
}
