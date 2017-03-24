//
//  main.c
//  B. Vanya and Books
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
    long long ans;
    while (scanf("%lld", &input) == 1)
    {
        
        if (input < 10)
            ans = input;
        else if (input < 100)
            ans = 9 + (input - 9) * 2;
        else if (input < 1000)
            ans = 9 + (90 * 2) + (input - 99) * 3;
        else if (input < 10000)
            ans = 9 + (90 * 2) + (900*3) +  (input - 999) * 3;
        else if (input < 100000)
            ans = 9 + (90 * 2) + (900 * 3) + (9000*4)+ (input - 9999) * 5;
        else if (input < 1000000)
            ans = 9 + (90 * 2) + (900 * 3) + (9000 * 4) + (90000*5) + (input - 99999) * 6;
        else if (input < 10000000)
            ans = 9 + (90 * 2) + (900 * 3) + (9000 * 4) + (90000 * 5) + (900000*6) + (input - 999999) * 7;
        else if (input < 100000000)
            ans = 9 + (90 * 2) + (900 * 3) + (9000 * 4) + (90000 * 5) + (900000 * 6) +(9000000*7)+ (input - 9999999) * 8;
        else if (input < 1000000000)
            ans = 9 + (90 * 2) + (900 * 3) + (9000 * 4) + (90000 * 5) + (900000 * 6) + (9000000 * 7) +(90000000*8)+ (input - 99999999) * 9;
        else if (input == 10000000000)
            ans = 9 + (90 * 2) + (900 * 3) + (9000 * 4) + (90000 * 5) + (900000 * 6) + (9000000 * 7) + (90000000 * 8) +(900000000*9)+ 1;
        printf("%lld", ans);
        
    }
    return 0;
}