#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int n ;

    scanf("%d", &n);

    vector <int> ans ;
    if(n == 3)
    {
        printf("4\n");
        printf("2 1 3 2\n");
        return 0;
    }
    else if(n%2 != 0)
    {
        int mid = n/2+1;

        for(int i = mid-1 ; i>=1 ; i--)
        {
            ans.push_back(i);
        }
        for(int i = 2 ; i < mid-1 ; i++)
        {
            ans.push_back(i);
        }
        for(int i = mid + 1 ; i <= n ; i++)
        {
            ans.push_back(i);
        }
        for(int i = n-1 ; i > mid+1 ; i--)
        {
            ans.push_back(i);
        }
        ans.push_back(mid);
        ans.push_back(mid+1);
        ans.push_back(mid-1);
    }
    else
    {
        int mid = n / 2 ;

        for(int i = mid ; i>=1 ; i--)
        {
            ans.push_back(i);
        }
        for(int i = 2 ; i < mid ; i++)
        {
            ans.push_back(i);
        }
        for(int i = mid + 1 ; i <= n ;i++)
        {
            ans.push_back(i);
        }
        for(int i = n-1 ; i >= mid ; i--)
        {
            ans.push_back(i);
        }
    }
    int length = ans.size();
    printf("%d\n", length);
    for(int i = 0 ; i < length ; i++)
    {
        printf("%d", ans[i]);
        if(i == length -1)
        {
            printf("\n");
        }
        else
        {
            printf(" ");
        }
    }
    return 0 ;
}

