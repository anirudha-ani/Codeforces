#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

int main()
{
    int input ;

    scanf("%d", &input);

    int counter = input / 2;
    if(input % 2 == 0)
    {
        printf("%d\n", counter);

        for(int i = 0 ; i < counter ; i++)
        {
            printf("2");
            if(i != counter - 1)
            {
                printf(" ");
            }
            else
            {
                printf("\n");
            }
        }
    }
    else
    {
        printf("%d\n", counter);

        for(int i = 0 ; i < counter ; i++)
        {

            if(i != counter - 1)
            {
                printf("2 ");
            }
            else
            {
                printf("3\n");
            }
        }
    }
    return 0;
}
