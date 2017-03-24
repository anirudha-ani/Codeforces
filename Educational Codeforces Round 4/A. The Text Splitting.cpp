#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>

using namespace std;

string input;
int index = 0;
bool found = false;

bool dp[105][105][105] = {false};

int bfs(int n , int p , int q , int step);

int main()
{
    int n, p , q;

    scanf("%d %d %d", &n , &p , &q);
    cin >> input;
    bfs(n,p,q,0);

    return 0 ;
}

int bfs(int n , int p , int q , int step)
{
    //cout << "N::" << n << " P::"<<p <<" N::"<<n<<" Step::"<<step<<endl;
    if(n<0)
    {
        return -1;
    }
    if(dp[n][p][q] != false)
    {
        return -1;
    }
    else
    {
        dp[n][p][q] = true;
    }
    if(n==0)
    {
        found = true ;
        printf("%d\n", step);
        return 0;
    }



    int x = bfs(n-p , p , q , step+1);

    if(x==0)
    {
        for(int i = 0 ; i < p ; i++,index++)
        {
            cout<< input[index];
        }
        cout<< endl;
        return 0 ;
    }
    int y = bfs(n-q , p , q , step+1);
    if(y==0)
    {
        for(int i = 0 ; i < q ; i++,index++)
        {
            cout<< input[index];
        }
        cout<< endl;
        return 0 ;
    }

    if(step == 0 && !found)
    {
        cout << "-1" << endl;
    }
}
