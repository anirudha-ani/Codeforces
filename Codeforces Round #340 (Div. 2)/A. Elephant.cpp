#include <cstdio>

using namespace std;

int main()
{
    int input , ans = 0;

    scanf("%d", &input);

    if(input / 5 != 0)
    {
        ans+= input/5;
        input = input % 5;
    }
    if(input != 0) ans++;
    printf("%d\n",ans);
    return 0;
}
