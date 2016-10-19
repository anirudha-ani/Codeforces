#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n , k ;
    int input;

    vector<int> data ;
    scanf("%d %d", &n , &k);
    int add = 0;
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d", &input);

        data.push_back(input);
    }

    for(int i = n-2 ; i>= 0 ; i--)
    {
        if(data[i]+data[i+1] < k)
        {
            add += k - (data[i] + data[i+1]);
            data[i] += k - (data[i] + data[i+1]);
        }
    }
    printf("%d\n", add);
    for(int i = 0 ; i < n ; i++)
    {
        if(i!=0)
        {
            printf(" ");
        }
        printf("%d", data[i]);

    }
    printf("\n");
    return  0;
}
