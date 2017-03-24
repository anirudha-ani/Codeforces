#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>


using namespace std;

int main()
{
    int input_no;

    scanf("%d"  ,&input_no);

    int counting[101][26] = {0};
    int l_count[101] = {0};
    for(int i = 0 ; i < input_no ;i++)
    {
        string input;

        cin >> input;

        int input_length = input.length();

        for(int j = 0 ; j < input_length ; j++)
        {
            if(counting[i][input[j] - 'a'] ==0)
            {
                l_count[i]++;
            }
            if(l_count[i] > 2)
            {
                break;
            }
            counting[i][input[j] - 'a'] ++;

        }
    }

    int pair_count[26][26] = {0};
    for(int i = 0 ; i < input_no ; i++)
    {
        if(l_count[i] <=2)
        {
            for(int j = 0 ; j < 26 ;j++)
            {
                for(int  k = j+1 ; k < 26 ; k++)
                {

                    if(counting[i][j] !=0 && counting[i][k]!=0 && l_count[i] == 2)
                    {
                        //cout << "i j " <<counting[i][j] << "i k " << counting[i][k]<<endl;
                        pair_count[j][k] += (counting[i][j] + counting[i][k]);
                    }


                    else if(l_count[i] == 1)
                    {
                        pair_count[j][k] += (counting[i][j] + counting[i][k]);
                    }
                }
            }
        }
    }

    int max = 0;

    for(int j = 0 ; j < 26 ;j++)
            {
                for(int  k = j+1 ; k < 26 ; k++)
                {
                    if(pair_count[j][k] > max)
                        max = pair_count[j][k];
                }
            }
            cout << max << endl;
            return 0;
}
