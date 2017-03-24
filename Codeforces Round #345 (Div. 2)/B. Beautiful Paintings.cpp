#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    int data[1005];
    bool mark[1005];
    for(int i = 0 ; i < T ; i++)
    {
        scanf("%d", &data[i]);
        mark[i] = false;
    }

    sort(data , data + T);
    int ans = 0;

    int found = true;
    int compareit;
    while(found)
    {
        found = false;
        int i;
        for(i = 0 ; i < T ; i++)
        {
            if(mark[i] == false)
            {
                compareit = data[i];
                mark[i] = true;
                break;
            }
        }
        for(int j = i+1 ; j < T ; j++)
        {
            if(compareit < data[j] && mark[j] == false)
            {
                ans++;
                compareit = data[j];
                mark[j] = true;
                found = true;
            }

        }
    }
    printf("%d\n", ans);
}
