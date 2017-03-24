#include <cstring>
#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main()
{
    string input;

    int black[8][8] = {0};
    int white[8][8] = {0};

    for(int i = 0 ; i < 8 ; i++ )
    {
        cin >> input;

        for(int j = 0 ; j < 8 ; j++)
        {
            if(input[j] == 'B')
            {
                black[i][j] = 1;
            }
            else if(input[j] == 'W')
            {
                white[i][j] = 1;
            }
        }

    }

    int black_move = -1 , white_move = -1;


        for(int i = 7 ; i >= 0 ; i--)
        {
            for(int j = 0 ; j < 8 ; j++)
            {
                bool found = false;
                if(black[i][j] == 1)
                {
                    for (int k = i+1 ; k < 8 ;k++)
                    {
                        if(white[k][j] == 1)
                        {
                            found = true;
                        }
                    }
                    if(!found)
                    {
                        black_move = 7 - i;
                        break;
                    }
                }
            }
            if(black_move != -1)
                break;
        }

        for(int i = 0 ; i <8 ; i++)
        {
            for(int j = 0 ; j < 8 ; j++)
            {
                bool found = false;
                if(white[i][j] == 1)
                {
                    for (int k = i-1 ; k >= 0 ; k--)
                    {
                        if(black[k][j] == 1)
                        {
                            found = true;
                        }
                    }
                    if(!found)
                    {
                        white_move = i ;
                        break;
                    }
                }
            }
            if(white_move != -1)
                break;
        }

        if(white_move <= black_move)
        {
            cout << "A" << endl;
        }
        else
        {
            cout << "B" << endl;
        }
    return 0;
}
