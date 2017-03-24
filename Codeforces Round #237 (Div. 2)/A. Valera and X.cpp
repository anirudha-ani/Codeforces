#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    int input_no , i , j;

    scanf("%d", &input_no);

    string input ;

    int start  = 0;
    int end = input_no - 1;

    bool flag = true;
    bool first_input = true;

    char primary ,secondary;

    for(i = 0 ; i < input_no ; i++)
    {
        cin >> input;
        if(first_input)
        {
            primary = input[0];
            secondary = input[1];

            if(primary == secondary)
            {
                flag = false;
                break;
            }

            first_input = false ;
        }


        if(input[start] != primary || input[end] != primary)
        {
            flag = false ;
            break;
        }

        for(j = 0 ; j < input_no ; j++)
        {
            if(j!=start && j!= end)
            {
                if(input[j]!= secondary)
                {
                    flag = false ;
                    break;
                }
            }

        }
        start++;
        end--;
    }

    if(flag)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
