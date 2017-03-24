//
//  main.cpp
//  A. Saitama Destroys Hotel
//
//  Created by Anirudha Paul on 12/24/15.
//  Copyright © 2015 Anirudha Paul. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

struct pass
{
    int floor;
    int time ;
}x[1005];

bool sortx(pass x , pass y)
{
    return x.floor > y.floor;
}

int main(int argc, const char * argv[])
{
    int passenger , top_floor;
    
    scanf("%d %d", &passenger , &top_floor);
    
    for (int i = 0 ; i < passenger; i++)
    {
        scanf("%d %d", &x[i].floor, &x[i].time);
    }
    
    sort(x, x+passenger, sortx);
    
    int total_time = 0;
    int current_floor =  top_floor;
    
    for (int i = 0 ; i < passenger; i++)
    {
        total_time += (current_floor-x[i].floor);
        current_floor = x[i].floor;
        //cout << ":::"<< x[i].floor << endl ;
        if(total_time < x[i].time)
        {
            total_time = x[i].time;
        }
    }
    total_time+=current_floor-0;
    printf("%d\n", total_time);
    
    return 0;
}
