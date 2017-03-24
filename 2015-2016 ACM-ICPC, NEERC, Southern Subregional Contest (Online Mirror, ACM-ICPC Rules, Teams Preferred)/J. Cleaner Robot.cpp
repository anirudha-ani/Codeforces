#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>

using namespace std;

bool map[4][11][11];
bool obstacle[11][11];
int w , h;

void DFS(int direction , int position_x , int position_y);

int main()
{

    cin >> w >> h;



    for(int i = 0 ; i < 4 ; i++)
        for(int j = 0 ; j < 11 ; j++)
            for(int k = 0 ; k < 11 ; k++)
                map[i][j][k] = false;



    for(int j = 0 ; j < 11 ; j++)
            for(int k = 0 ; k < 11 ; k++)
                obstacle[j][k] = false;

    int position_x , position_y , direction;

    for(int i = w-1 ; i >= 0 ; i--)
    {
        string input;

        cin >> input;

        for(int j = 0 ; j <  h ; j++)
        {
            if(input [j] == 'U')
            {
                direction = 0;
                position_x = j;
                position_y = i;
            }
            else if(input [j] == 'R')
            {
                direction = 1;
                position_x = j;
                position_y = i;
            }
            else if(input [j] == 'D')
            {
                direction = 2;
                position_x = j;
                position_y = i;
            }
            else if(input [j] == 'L')
            {
                direction = 3;
                position_x = j;
                position_y = i;
            }
            else if(input [j] == '*')
            {
                obstacle[j][i] = true;
            }
        }
    }

    DFS(direction , position_x , position_y);

    bool mark[11][11];
    for(int j = 0 ; j < 11 ; j++)
            for(int k = 0 ; k < 11 ; k++)
                mark[j][k] = false;

    for(int i = 0 ; i < 4 ; i++)
        for(int j = 0 ; j < 11 ; j++)
            for(int k = 0 ; k < 11 ; k++)
                {
                    if(map[i][j][k] == true)
                    {
                        mark[j][k] = true;
                    }
                }
    int count = 0;

    for(int j = 0 ; j < 11 ; j++)
            for(int k = 0 ; k < 11 ; k++)
                {
                    if(mark[j][k] == true)
                        count++;
                }

    cout << count << endl;
    return 0;
}

void DFS(int direction , int position_x , int position_y)
{
    if(map[direction][position_x][position_y] == true)
        return;
    else
    {
        map[direction][position_x][position_y] = true;

        if(direction == 0)
        {
            if(obstacle[position_x][position_y+1] != true && (position_y + 1) < w)
            {
                DFS(direction , position_x , position_y+1);
            }
            else
            {
                DFS(1, position_x , position_y);
            }
        }
        else if(direction == 1)
        {
            if(obstacle[position_x + 1][position_y] != true && (position_x + 1) < h)
            {
                DFS(direction , position_x + 1 , position_y);
            }
            else
            {
                DFS(2, position_x , position_y);
            }
        }
        else if(direction == 2)
        {
            if(obstacle[position_x][position_y - 1] != true && (position_y - 1) >= 0)
            {
                DFS(direction , position_x  , position_y - 1);
            }
            else
            {
                DFS(3, position_x , position_y);
            }
        }
        else if(direction == 3)
        {
            if(obstacle[position_x -1 ][position_y ] != true && (position_x - 1) >= 0)
            {
                DFS(direction , position_x - 1  , position_y);
            }
            else
            {
                DFS(0, position_x , position_y);
            }
        }
    }
}
