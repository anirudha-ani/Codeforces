#include <cstdio>

using namespace std;

int bigmod(int a , int b , int M)
{
    if(b==0)
        return 1 % M;

    int x = bigmod(a , b /2 ,M);

    x = (x * x) % M;

    if(b%2 == 1)
    {
        x = (x*a) % M;
    }
    return x;
}

int main()
{
    int n , t;

    scanf("%d %d", &n , &t);

    if(n == 1 && t == 10)
        printf("-1\n");
    else if(n==1 && t/10 ==0)
        printf("%d\n" , t);
    else if(t== 10)
    {

        printf("1");
        while(n-1 > 0)
        {
            printf("0");
            n--;
        }
        printf("\n");
    }
    else
    {
        int Mod = bigmod(10 , n-1 ,t);

        int ans = t-Mod;
        printf("1");
        while(n-2 > 0)
        {
            printf("0");
            //printf("t = %d" , t-2);
            n--;
        }

        printf("%d\n",ans);

    }
    return 0;
}
