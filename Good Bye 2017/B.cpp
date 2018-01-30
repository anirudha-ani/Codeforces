#include <bits/stdc++.h>

using namespace std ;

string grid[55];
int n , m ;

//bool isValid ;
int s_row , s_column ;
int length ;
string instruction ;
map <char , int> dir ;
bool isValid(int zero , int one , int two , int three)
{
    int current_row = s_row ;
    int current_column = s_column ;

    for(int i = 0 ; i < length ; i++)
    {
        if(dir[instruction[i]] == 1)
        {
            current_row++;
        }
        else if(dir[instruction[i]] == 2)
        {
            current_column--;
        }
        else if(dir[instruction[i]] == 3)
        {
            current_column++;
        }
        else if(dir[instruction[i]] == 4)
        {
            current_row--;
        }

         if(current_row >= 0 && current_row < n && current_column >= 0 && current_column < m)
         {
             if(grid[current_row][current_column] == 'E')
             {
                 //cout << "Z = " << zero << " O = " << one << " T = " << two << " thr = " << three << endl ;
                 return true;
             }
             else if (grid[current_row][current_column] == '#')
             {
                 return false ;
             }
         }
         else
         {
             return false ;
         }
    }
    return false ;

}

int main()
{
    ios::sync_with_stdio(false);



    cin >> n >> m ;

    for(int i = 0 ; i < n ; i++)
    {
        cin >> grid[i];



        for(int j = 0 ; j < m ; j++)
        {
            if(grid[i][j] == 'S')
            {
                s_row = i;
                s_column = j;
            }
        }
    }

    /*
    1 = up
    2 = left
    3 = right
    4 = down
    */


    cin >> instruction ;

    length = instruction.length();


    long long int counter = 0 ;

    for(int i = 1 ; i <= 4 ; i++)
    {
        dir['0'] = i;
        for(int j = 1 ; j <= 4 ;j++)
        {
            if(dir['0'] != j)
            {
                dir['1'] = j ;
                for(int k = 1 ; k <= 4 ; k++)
                {
                    if(dir['0'] != k && dir['1'] != k)
                    {
                        dir['2'] = k ;
                        for(int p = 1 ; p <= 4 ; p++)
                        {
                            if(dir['0'] != p && dir['1'] != p&& dir['2'] != p)
                            {
                                dir['3'] = p ;
                                if(isValid(dir['0'] , dir['1'] ,dir['2'] ,dir['3'] ))
                                {
                                    counter++;
                                }
                            }


                        }
                    }

                }
            }

        }
    }

    cout << counter << endl ;
    return 0 ;
}
