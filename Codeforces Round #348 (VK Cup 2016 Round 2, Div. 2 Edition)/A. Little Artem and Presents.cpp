#include <cstdio>

using namespace std;

int main()
{
    int input;

    scanf("%d",&input);

    int ans = (int)(input / 3 );
    ans = ans * 2;
    if(input%3 != 0)
    {
        ans++;
    }
    printf("%d\n", ans);
    return 0;
}
