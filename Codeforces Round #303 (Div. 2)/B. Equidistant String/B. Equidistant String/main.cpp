//
//  main.cpp
//  B. Equidistant String
//
//  Created by Anirudha Paul on 5/21/15.
//  Copyright (c) 2015 Anirudha Paul. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <string>


using namespace std;

int main(int argc, const char * argv[])
{
    string first ;
    string second ;
    
    cin.clear();
    getline(cin,first);
    cin.clear();
    getline(cin,second);
    
    char answer[100000];
    
    long long length = first.length();
    
    int same = 0 ;
    int notSame = 0;
    
    for (int i = 0 ; i < length ; i++)
    {
        if (first[i] == second[i])
        {
            same++;
            answer[i] = first[i];
        }
        else
        {
            notSame++;
            if (notSame%2 == 0)
            {
                answer[i] = first[i];
            }
            else
            {
                answer[i] = second[i];
            }
            
        }
    }
    
    if (notSame % 2 != 0)
    {
        printf("impossible");
    }
    else
    {
        for (int i = 0 ; i < length ; i++)
            printf("%c" , answer[i]);
    }
    printf("\n");
    
    
    return 0;
}
