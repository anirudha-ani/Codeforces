#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b ;

    scanf("%d %d", &a , &b);
    int ans = 0;
    if(a>b)
    {
        swap(a , b);
    }
    while(a!= 0 && b!=0)
    {
        if(b-2 <1)
        {
            if(a-2 >= 1)
            swap(a , b);
            else break;
        }
        a+=1;
        b-=2;
        //cout << a << " " << b << endl;
        ans++;
    }
    if(a>1 || b>1)
    {
        ans++;
    }
    printf("%d\n",ans);
    return 0;
}
