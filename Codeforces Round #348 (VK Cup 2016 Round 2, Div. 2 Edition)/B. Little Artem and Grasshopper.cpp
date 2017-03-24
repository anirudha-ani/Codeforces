#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>

using namespace std;

int jump_instruction[100005];
int visited[100005];

int main()
{
    memset(visited , 0 , sizeof(visited));
    int cell_size;

    scanf("%d", &cell_size);

    string cells;

    cin >> cells;

    for(int i = 0 ; i < cell_size ; i++)
    {
        scanf("%d", &jump_instruction[i]);
    }
    int infinite = 0;
    int index = 0;
    int next_index;
    while(infinite == 0)
    {
        if(visited[index] != 0)
        {
            infinite = 1;
            break;
        }
        else
        {
            if(cells[index] == '>')
            {
                if(index+jump_instruction[index]<cell_size)
                {
                    visited[index] = 1;
                    index = index + jump_instruction[index];
                }
                else
                {
                    infinite = 2;
                }
            }
            else if(cells[index] == '<')
            {
                if(index-jump_instruction[index]>=0)
                {
                    visited[index] = 1;
                    index = index - jump_instruction[index];
                }
                else
                {
                    infinite = 2;
                }
            }
        }
    }
    if(infinite == 1)
    {
        printf("INFINITE\n");
    }
    else
    {
        printf("FINITE\n");
    }
    return 0;
}
