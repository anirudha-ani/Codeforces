#include <bits/stdc++.h>

using namespace std ;
#define ll long long int
vector <long long int> adjacency_list[150005];
long long int counter ;
long long int visited[150005];

void BFS(long long int node)
{
    visited[node] = 1 ;
    counter++;

    queue <long long int> node_queue;
    node_queue.push(node);

    while(node_queue.empty() != true)
    {
        ll current_node = node_queue.front();
        node_queue.pop();

        ll length = adjacency_list[current_node].size();

        for(ll i = 0 ; i < length ; i++)
        {
            if(visited[adjacency_list[current_node][i]] != 1)
            {
                visited[adjacency_list[current_node][i]] = 1 ;
                counter++;
                node_queue.push(adjacency_list[current_node][i]);
            }
        }

    }
}

int main()
{
    long long int n , m , input1 , input2;

    scanf("%lld %lld", &n , &m);

    for(int i = 0 ; i < m ; i++)
    {
        scanf("%lld %lld", &input1 , &input2);

        adjacency_list[input1].push_back(input2);
        adjacency_list[input2].push_back(input1);


    }

    long long int shouldHave = 0 ;
    for(int i = 1 ; i <= n ; i++)
    {
        if(visited[i] != true)
        {
            counter = 0 ;
            BFS(i);

            shouldHave += (counter * (counter-1))/2;
        }
    }

    if(shouldHave != m)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}
