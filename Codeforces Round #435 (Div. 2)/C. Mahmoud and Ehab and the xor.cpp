#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int n , x ;

    scanf("%d %d", &n , &x);

    if(n == 1)
    {
        printf("YES\n");
        printf("%d\n",x);
    }
    else if(n == 2)
    {
        if(x == 0)
        {
            printf("NO\n");
        }
        else
        {
             printf("YES\n");
            printf("1 %d\n", x^1);
        }
    }
    else
    {
        printf("YES\n");

        int sum = 0;
        int i = 1 ;
        n -= 2;
        while(n)
        {
            //cout << " i = " << i << endl ;
            if((x^i) !=0 )
            {
                printf("%d ", i);
                x ^= i ;
                n--;

            }
            i++;
        }


        int a = 262144;

        int b = x^a;

        printf("%d %d\n", a , b);

    }
    return 0;
}
