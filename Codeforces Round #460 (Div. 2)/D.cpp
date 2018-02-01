#include <bits/stdc++.h>

using namespace std ;

int save[300005][30];

vector <int> adjacency_matrix[300005];
int visited[300005];
int visited_last[300005];
int current_session;
int max_save[30];
int cycle_from_here[300005];
string memory;
bool cycle_exist;

void DFS(int node)
{
//    cout <<"Entering Node = " << node + 1 << endl ;

    if(cycle_exist == true)
    {
        return ;
    }

    visited[node] = 1 ;
    visited_last[node] = current_session;

    for(int i = 0 ; i < adjacency_matrix[node].size() ; i++)
    {
        //cout << "Adjacent = " << adjacency_matrix[node][i]+1 << endl ;
        if(visited[adjacency_matrix[node][i]] == 0)
        {
            DFS(adjacency_matrix[node][i]);
            for(int j = 0 ; j < 30 ; j++)
            {
                save[node][j] = max(save[node][j] , save[adjacency_matrix[node][i]][j]);
            }
        }
        else if(visited[adjacency_matrix[node][i]] == 1 && visited_last[adjacency_matrix[node][i]] != current_session && cycle_from_here[adjacency_matrix[node][i]] != 1)
        {
            for(int j = 0 ; j < 30 ; j++)
            {
                save[node][j] = max(save[node][j] , save[adjacency_matrix[node][i]][j]);
                max_save[j] = max(max_save[j] , save[node][j]);
            }
        }
        else if(visited_last[adjacency_matrix[node][i]] == current_session || cycle_from_here[adjacency_matrix[node][i]] == 1)
        {
            cycle_from_here[adjacency_matrix[node][i]] = 1;
            cycle_from_here[node] = 1;
            cycle_exist = true ;
            return;
        }
    }
    save[node][(int) (memory[node] - 'a')] += 1 ;
    max_save[(int) (memory[node] - 'a')] = max(max_save[(int) (memory[node] - 'a')] , save[node][(int) (memory[node] - 'a')]);
//    cout << "Exiting Node = " << node + 1 << endl ;
//    for(int i = 0 ; i < 30 ; i++)
//    {
//        printf("%d ",save[node][i]);
//    }
//    printf("\n");
    visited_last[node] = 0 ;
    return ;
}

int main()
{
    int n , m , x , y ;

    scanf("%d %d", &n , &m);
    cin >> memory;
    for(int i = 0 ; i < m ; i++)
    {
        scanf("%d %d", &x , &y);
        x--;
        y--;
        adjacency_matrix[x].push_back(y);
    }
    cycle_exist = false ;
    for(int i = 0 ; i < n ; i++)
    {
        current_session = 1 ;
        if(visited[i] == 0)
        {
            DFS(i);
            if(cycle_exist)
            {
                printf("-1\n");
                return 0;
            }
        }
    }
    int ans = 0 ;

    for(int i = 0 ; i < 30 ; i++)
    {
        ans = max(ans , max_save[i]);
    }
    printf("%d\n", ans);
    return 0 ;
}
