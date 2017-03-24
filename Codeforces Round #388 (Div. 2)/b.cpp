#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

int main()
{
    int x1 , y1 , x2 , y2 , x3 , y3;

    scanf("%d %d", &x1 , &y1);
    scanf("%d %d", &x2 , &y2);
    scanf("%d %d", &x3 , &y3);


    int data_x[6];
    int data_y[6];


    int counter = 0;
    data_x[0] = x1-x2+x3;
    data_y[0] = y1 - y2 + y3;


    data_x[1] = x1-x3+x2;
    data_y[1] = y1-y3 + y2;

    data_x[2] = x2-x1+x3;
    data_y[2] = y2-y1 + y3;

    data_x[3] = x2-x3+x1;
    data_y[3] = y2-y3 + y1;

    data_x[4] = x3-x2+x1;
    data_y[4] = y3-y2 + y1;

    data_x[5] = x3-x1+x2;
    data_y[5] = y3-y1 + y2;


    vector<int> x ;
    vector<int> y ;

    for(int i = 0 ; i < 6 ; i++)
    {
        bool found = false;
        for(int j= 0 ; j < i ; j++ )
        {
            if(data_x[i] == data_x[j] && data_y[i] == data_y[j])
            {
                found = true;
                break;
            }
        }
        if(!found)
        {
            x.push_back(data_x[i]);
            y.push_back(data_y[i]);
            counter++;
        }
    }
    printf("%d\n",counter);
    for(int i = 0 ; i < counter ; i++)
    {
        printf("%d %d\n", x[i] , y[i]);
    }
    return 0;
}

