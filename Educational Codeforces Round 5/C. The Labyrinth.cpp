#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <stack>
#include <utility>

using namespace std;
int bfs(int i , int j , bool visited[][1005]);
bool map [1005][1005] = {false};
int dp[1005][1005] = {0};
int result [1005][1005] = {0};
char show [1005][1005];
bool visited[1005][1005] = {false};
int n , m;
stack<pair<int,int> > save_star;


int main(int argc, const char * argv[])
{

    char x[1005];

    scanf("%d %d", &n , &m);
    gets(x);
    for(int i = 0 ; i < n ; i++)
    {
        gets(x);
        //cout << x << endl;
        //cout << i << endl;
        for(int j = 0 ; j < m ; j++)
        {

            if(x[j] == '.')
            {
                map[i][j] = true;
                show[i][j] = '.';
            }

        }
    }

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(map[i][j] == true && visited[i][j] != true)
            {
               int got = bfs(i,j , visited) ;

               while(save_star.empty() != true)
               {
                   result[save_star.top().first][save_star.top().second] +=  got;
                   visited[save_star.top().first][save_star.top().second] = false;
                   save_star.pop();
               }
            }
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(map[i][j] == false)
            {
                show[i][j] = (char) ((result[i][j]+1)%10 +'0') ;
            }
        }
    }

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            printf("%c", show[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int bfs(int i , int j , bool visited[][1005])
{
    if(i < 0 || i >= n || j < 0 || j>=m)
        return 0;
    if(visited[i][j] == true)
        return 0;
    if(map[i][j] == false)
    {
        save_star.push(make_pair(i , j ));
        visited[i][j] = true;
        return 0;
    }
    visited[i][j] = true;
    int result = 1;
    result+= bfs(i-1 , j , visited);
    result += bfs(i+1 , j , visited);
    result += bfs(i , j+1 , visited);
    result += bfs(i , j-1 , visited);


    return result;

}
