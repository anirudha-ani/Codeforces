#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int count[105] = {0};
    int n , k;
    int color = 0;
    scanf("%d %d", &n, &k);
    int divide = n / k ;

    for(int i = 0 ; i < n ; i++)
    {
        int input ;
        scanf("%d" , &input);
        count[input]++;
        if(count[input] > divide)
        {
            color ++;
            count[input]--;
        }
    }
    printf("%d\n" ,color);
    return 0;
}
