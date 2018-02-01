#include <bits/stdc++.h>

using namespace std ;
int sum_of_digit(int x )
{
    int sum = 0;
    while(x != 0)
    {
        sum += x % 10 ;
        x /= 10;
    }
    return sum;
}
int main()
{
    int n ;

    scanf("%d", &n);
    //n = 10000;
    int counter = 0 ;
    for(int i = 0 ; i < 100000000 ; i++)
    {
        if(sum_of_digit(i) == 10)
        {
            //cout << i << endl ;
            counter++;
            if(counter == n)
            {
                cout << i << endl ;
                return 0 ;
            }
        }

    }


    return 0 ;
}
