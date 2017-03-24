#include <cstdio>

int main()
{
    int houses[100001];

    int n ;

    scanf("%d" ,&n);

    for(int i = 0 ;  i < n ; i++)
    {
        int input ;
        scanf("%d", &input);
        houses[i] = input;
    }
    int maxCount[100001];
    int max = houses[n-1];
    maxCount[n-1] = 0;
    for(int i = n-2 ; i>=0 ; i--)
    {
        if(houses[i] > max)
        {
            maxCount[i] = 0;
            max = houses[i];

        }
        else
        {
            maxCount[i] = max - houses[i] + 1;
        }
    }

    for(int i = 0 ; i < n ; i++)
    {
        printf("%d",maxCount[i]);
        if(i!= n-1)
            printf(" ");
    }
    printf("\n");

    return 0;
}
