#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n ;
    string input ;

    cin >> input ;

    int alive_D = 0 , can_kill_R = 0 , alive_R = 0 , can_kill_D = 0;

    for(int i = 0 ; i < n  ; i++)
    {
        if(input[i] == 'D')
        {
            alive_D++;
        }
        else if(input[i] == 'R')
        {
            alive_R++;
        }
    }

    for(int i = 0 ; alive_R > 0 && alive_D > 0  ; i = (i+1)%n)
    {

            if(input[i] == 'D')
            {
                if(can_kill_D == 0)
                {
                    can_kill_R++;
                }
                else
                {
                    input[i] = 'M';
                    can_kill_D--;
                    alive_D--;
                }
            }
            else if(input[i] == 'R')
            {
                if(can_kill_R==0)
                {
                    can_kill_D++;


                }
                else
                {
                    input[i] = 'M';
                    can_kill_R--;
                    alive_R--;
                }
            }

    }



    if(alive_D>alive_R)
    {
        printf("D\n");
    }
    else if(alive_R>alive_D)
    {
        printf("R\n");
    }


    return 0;
}
