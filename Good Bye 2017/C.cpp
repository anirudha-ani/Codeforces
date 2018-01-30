#include <bits/stdc++.h>

using namespace std ;

double ans[1005];
double ans_x[1005];

int main()
{
    int n , r ;

    scanf("%d %d", &n , &r);
    int x ;

    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d", &x);

        double curr_max_y = 0.0  ;
        double curr_max_x =0.0;
        bool flag = true  ;
        for(int j = 0 ; j < i ; j++)
        {
            if(abs(x - ans_x[j]) <= 2 *r  )
            {

                curr_max_x = ans_x[j];
                curr_max_y = ans[j];
               flag = false ;


                double low = ans[j] ;
                double high = 3000005.0;
                double mid = (high + low) / 2.0 ;
                int counter = 0 ;
                //cout << "Max x = " << curr_max_x << " max y = " << curr_max_y << endl ;
                while(fabs(low - high) > .0000000001 && counter < 100)
                {

                    //cout << "L = " << low << " H = " << high << endl ;
                    //cout << "Dist = " << sqrt( (x - curr_max_x) * (x - curr_max_x) +  (mid - curr_max_y) * (mid - curr_max_y)) << endl ;
                    mid = (high + low) / 2.0 ;
                    if(( (x - curr_max_x) * (x - curr_max_x) +  (mid - curr_max_y) * (mid - curr_max_y)) <= (2.0 * r * 2.0 * r) )
                    {
                        low = mid;
                    }
                    else
                    {
                        high = mid ;
                    }
                    counter++;
                }


                ans[i] = max(ans[i] ,mid);
                ans_x[i] = x * 1.0 ;
            }

        }


        if(flag)
        {
             ans[i] = r * 1.0;
             ans_x[i] = x * 1.0 ;
             continue ;
        }




    }

    for(int i = 0 ; i < n ; i++)
    {
        printf("%.10f", ans[i]);

        if(i != n-1)
        {
            printf(" ");
        }
        else
        {
            printf("\n");
        }
    }
    return 0 ;
}
