#include <cstdio>

using namespace std;

int main()
{
    int a , b;

    scanf("%d %d" ,&a, &b);

    int hip = 0 ;
    int nor = 0 ;
    while(a!=0 && b!=0)
    {
        a--;
        b--;
        hip++;
    }
    while(a>1)
    {
        a = a-2;
        nor++;
    }
    while(b>1)
    {
        b = b-2;
        nor++;
    }

    printf("%d %d\n" , hip , nor);
    return 0;
}
