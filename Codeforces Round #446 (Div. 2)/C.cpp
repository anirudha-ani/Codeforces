#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int n , input ;

    scanf("%d", &n);

    vector <int> data[2005];
    int total_gcd  ;
    bool flag = false ;
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d", &input);

        if(i == 0)
        {
            total_gcd = input;
        }
        else
        {
            total_gcd = __gcd(input , total_gcd);
        }
        data[1].push_back(input);

        if(input == 1)
        {
            flag = true ;
        }
    }
    int stage = 2  ;
    if(total_gcd != 1)
    {
        printf("-1\n");
    }
    else if(flag == true)
    {
        printf("%d\n", n-1);
    }
    else
    {
        while(!flag)
        {
            int length = data[stage-1].size();
            for(int i = 0 ; i < length-1 ; i++)
            {
                int now = __gcd(data[stage-1][i] , data[stage-1][i+1]);
                data[stage].push_back(now);

                if(now == 1)
                {
                    flag = true;
                    break ;
                }
            }
            if(!flag)
            {
                stage++;
            }
        }
        //cout << stage << endl ;
        int step_taken = stage -1;

        int ans = step_taken + (n-1);
        printf("%d\n",ans);
    }
}
