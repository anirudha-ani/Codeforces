//
//  main.cpp
//  B.Vanya and Books
//
//  Created by Anirudha Paul on 7/20/15.
//  Copyright (c) 2015 Anirudha Paul. All rights reserved.
//

#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long input;
    long long ans = 0;
    while (scanf("%lld", &input) == 1)
    {
        
        if (input < 10)
            ans = input;
        else if (input < 100)
            ans = 9 + (input - 9) * 2;
        else if (input < 1000)
            ans = 189 + (input - 99) * 3;
        else if (input < 10000)
            ans = 2889 + (input - 999) * 4;
        else if (input < 100000)
            ans = 38889+ (input - 9999) * 5;
        else if (input < 1000000)
            ans = 488889 + (input - 99999) * 6;
        else if (input < 10000000)
            ans = 5888889 + (input - 999999) * 7;
        else if (input < 100000000)
            ans = 68888889+ (input - 9999999) * 8;
        else if (input < 1000000000)
            ans = 788888889 + (input - 99999999) * 9;
        else if (input < 10000000000)
            ans = 8888888889+ (input - 999999999) * 10;
        printf("%lld\n", ans);
        
    }
    return 0;
}