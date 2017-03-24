#include<cstdio>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    string x[100];

    int n ;

    scanf("%d", &n);

    for(int i = 0 ; i < n ; i++)
    {
        cin >> x[i];
    }
    int count = 0;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(x[i][j] == 'C')
            {
                for(int k = i+1 ; k < n ; k++)
                {
                    if(x[k][j] == 'C') count++;
                }
                for(int l = j+1 ; l<n ;l++ )
                {
                    if(x[i][l] == 'C') count++;
                }
            }
        }

    }
    printf("%d\n",count);
    return 0;
}
