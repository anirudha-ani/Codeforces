#include <cstdio>

using namespace std;

int main()
{
    int input;
    int count = 0 ;
    scanf("%d" , &input);
    while (input >1)
    {
        int flag = 1;
        while(flag * 2 <= input)
        {
            flag = flag *2;
        }
        input= input - flag ;
        count++;
    }
    if(input == 1)
    count++;
    printf("%d", count);
    return 0 ;
}
