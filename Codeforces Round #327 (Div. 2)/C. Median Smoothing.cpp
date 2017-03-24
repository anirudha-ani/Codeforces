#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> input;

    int input_no;

    scanf("%d" , &input_no);

    for(int i = 0 ; i < input_no ;i++)
    {
        int take ;
        scanf("%d", &take);

        input.push_back(take);
    }

    int count = 1;
    int iteration = 0;
    while(count != 0)
    {
        vector<int> change_index;
        count = 0;

        for(int i = 1; i < input_no - 1 ; i++)
        {
            if(input[i] == 1 && input[i-1] == 0 && input[i+1] == 0)
            {

                    change_index.push_back(i);
                    count++;

            }
            else if(input[i] == 0 && input[i-1] == 1 && input[i+1] == 1)
            {
                change_index.push_back(i);
                count++;
            }
        }
        for(int i = 0 ; i < count ; i++)
        {
            if(input[change_index[i]] == 1)
            {
                input[change_index[i]] = 0;
            }
            else
            {
                input[change_index[i]] = 1;
            }
        }
        if(count != 0)
        {
            iteration++ ;
        }
    }
    printf("%d\n",iteration);
    for(int i = 0 ; i < input_no ; i++)
    {
        printf("%d" , input[i]);
        if(i != input_no - 1)
        {
            printf(" ");
        }
        else
        {
            printf("\n");
        }
    }
    return 0;
}
