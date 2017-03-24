//
//  main.cpp
//  A. Toy Cars
//
//  Created by Anirudha Paul on 5/19/15.
//  Copyright (c) 2015 Anirudha Paul. All rights reserved.
//

#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, const char * argv[])
{
    int input ;
    
    scanf("%d" , &input);
    bool flag[100];
    
    
        for(int i = 0 ; i < input ; i ++)
        {
            flag [i] = false;
        }
        for (int i = 0 ; i < input ; i++)
        {
            for(int j = 0 ; j < input ; j++)
            {
                int x;
                scanf("%d" , &x);
                
                switch (x) {
                    case 1:
                        flag[i] = true;
                        break;
                    case 2 :
                        flag[j] = true;
                        break;
                        
                    case 3:
                        flag[i] = true;
                        flag[j] = true;
                        break;
                        
                        
                    default:
                        break;
                }
            }
        }
    
    int count = 0;
    for(int i = 0 ; i < input ; i ++)
    {
        if(flag [i] == false)
        {
            count++;
        }
    }
    printf("%d\n" , count);
    for(int i = 0 ; i < input ; i ++)
    {
        if(flag [i] == false)
        {
            printf("%d ",i+1);
        }
    }
    printf("\n");
    return 0;
}
