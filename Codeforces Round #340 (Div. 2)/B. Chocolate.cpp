#include <cstdio>

using namespace std;

int main()
{
    int input_size , input;
    long long int ans = 1 , count = 0;
    scanf("%d", &input_size);
    bool one_found = false ,first_zero = true , previousone = false;
    while(input_size)
    {
        scanf("%d", &input);
        if(input == 1 )
        {
            if(one_found == true && !previousone)
            {
                ans *= count;
                first_zero = true;
                count = 0;
            }
            one_found = true;
            previousone = true;
            //one_one = true;
        }
        else if(input == 0)
        {
            previousone = false;
            if(one_found)
            {
                if(first_zero)
                {
                    count += 2;
                    first_zero = false;
                }
                else
                {
                    count += 1;
                }
            }
        }
        input_size -- ;
    }
    if(one_found)
    printf("%lld\n", ans);
    else
        printf("0\n");
    return 0;
}
