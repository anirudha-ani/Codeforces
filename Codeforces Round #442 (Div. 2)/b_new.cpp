#include <bits/stdc++.h>

using namespace std ;
int cum_a[5500];
int cum_b[5500];
int main()
{
    string input ;

    cin >> input ;

    int length = input.length();

    for(int i = 0 ; i < length ; i++)
    {
        if(input[i] == 'a')
        {
            cum_a[i+1] = cum_a[i] + 1;
        }
        else
        {
            cum_a[i+1] = cum_a[i];
        }
        if(input[i] == 'b')
        {
            cum_b[i+1] = cum_b[i] + 1;
        }
        else
        {
            cum_b[i+1] = cum_b[i];
        }
    }
    cum_a[length+1] = cum_a[length];
    cum_b[length+1] = cum_b[length];
    int ans = 0 ;
    for(int i = 0 ; i <= length+1 ; i++)
    {
        for(int j = i+1 ; j <= length+1 ; j++)
        {
            ans = max((cum_a[i] - cum_a[0] + cum_b[j] - cum_b[i] + cum_a[length+1] - cum_a[j]) , ans);
        }
    }
    printf("%d\n",ans);
    return 0;
}
