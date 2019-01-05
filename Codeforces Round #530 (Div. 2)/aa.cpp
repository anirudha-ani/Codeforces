
#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int w , h , u1, d1 , u2 , d2 ;

    scanf("%d %d", &w , &h);
    scanf("%d %d", &u1 , &d1);
    scanf("%d %d", &u2 , &d2);

    for(int i = h ; i >= 0 ; i--)
    {
        w+= i ;
        if(d1 == i)
        {
            w -= u1;
        }
        else if(d2 == i)
        {
            w -= u2;
        }

        if(w <= 0) w = 0 ;
    }
    printf("%d\n", w );
    return 0 ;
}
