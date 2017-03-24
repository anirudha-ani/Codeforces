#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int k2 , k3 , k5 , k6;

    scanf("%lld %lld %lld %lld", &k2 , &k3 , &k5 , &k6);

    long long int op132 , op1256 , op232 , op2256;
    long long int op1 , op2 ;
    op132 = min(k2 , k3);
    op1256 = min(k2-op132 , min(k5,k6));

    op1 = 32*op132 + 256*op1256;

    op2256 = min(k2, min(k5, k6));
    op232 = min(k2-op2256 , k3);

    op2 = 32*op232 + 256*op2256;

    long long int ans = max(op1 , op2);

    printf("%lld\n",ans);
    return 0;
}
