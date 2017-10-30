#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int n ;

    scanf("%d", &n);

    vector <int> ans ;
    if(n==2)
    {
        printf("3\n");
        printf("2 1 2\n");
        return 0;
    }
    else if(n == 3)
    {
        printf("4\n");
        printf("2 1 3 2\n");
        return 0;
    }
    else if(n==4)
    {
        printf("6\n");
        printf("2 1 3 4 3 2\n");
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
        int left = n / 2 ;
        int right = left +1;

        for(int i = left-1 ; i>=1 ; i--)
        {
            ans.push_back(i);
        }
        for(int i = 2 ; i < left-1 ; i++)
        {
            ans.push_back(i);
        }
        for(int i = right + 1 ; i <= n ;i++)
        {
            ans.push_back(i);
        }
        for(int i = n-1 ; i > right+1 ; i--)
        {
            ans.push_back(i);
        }
        ans.push_back(left);
        ans.push_back(right);
        ans.push_back(left);
        ans.push_back(left-1);
        ans.push_back(right+1);
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
