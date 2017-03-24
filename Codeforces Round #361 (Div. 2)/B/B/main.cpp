#include <cstdio>
#include <queue>
#include <iostream>
#include <vector>
#include <cstring>
#include <string>
using namespace std;

vector <int> list[200005] ;
int distances[200005];

void BFS()
{
    queue<int> node_queue;
    queue<int> distance_queue;
    int visited[200005];
    
    memset(visited , 0 , sizeof(visited));
    
    node_queue.push(1);
    distance_queue.push(0);
    
    visited[1] = 1;
    
    while(node_queue.empty()!=true)
    {
        int current_node = node_queue.front();
        node_queue.pop();
        
        //cout << current_node << " " << distances[current_node]<<endl;
        
        int current_distance = distance_queue.front();
        distance_queue.pop();
        
        distances[current_node] = current_distance;
        
        int nodes = list[current_node].size();
        
        for(int i = 0 ; i < nodes ;i++)
        {
           // cout << "current node = " << current_node << " adjacent node = " << list[current_node][i] << " distance = " << distances[list[current_node][i]] << endl;
            if(visited[list[current_node][i]] == 0 )
            {
                visited[list[current_node][i]] = 1;
                
                node_queue.push(list[current_node][i]);
                distance_queue.push(current_distance + 1);
            }
        }
    }
}
int main()
{
    int node;
    
    int input;
    
    scanf("%d", &node);
    distances[1] = 0;
    for(int i = 1 ; i <= node ; i++)
    {
        scanf("%d",&input);
        if(input != i)
        list[i].push_back(input);
        if(i-1> 0)
        list[i].push_back(i-1);
        if(i+1 <=node)
        list[i].push_back(i+1);
        distances[i] = i-1;
        
    }
    BFS();
    for(int i = 1 ; i <= node ; i++)
    {
        printf("%d", distances[i]);
        
        if(i!=node)
        {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}