#include <cstdio>

using namespace std;

int main()
{
    int n,m , minimum , max =0 , input;

    scanf("%d %d", &n,&m);

    for(int i = 0 ; i < n ; i++)
    {
        minimum = 9999999999;
        for(int j = 0 ; j < m ; j++)
        {
            scanf("%d", &input);
            if(input<minimum)
                minimum = input;
        }
        if(max<minimum)
        {
            max = minimum;
        }
    }
    printf("%d\n", max);
    return 0;
}
