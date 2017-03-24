#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
#include <stack>

using namespace std;

int main()
{
    int input_no;

    scanf("%d", &input_no);
    string fake;
    getline(cin , fake);
    for(int i = 0 ; i < input_no ; i++)
    {
        string input;

        getline(cin,input);

        long long int row = 0 , column = 0;
        long long input_size = input.length();

        int type , count = 0 ;

        for(int i = 0 ; i < input_size ; i++)
        {
            if(input[i] >= 'A' && input[i] <= 'Z')
                count++;
        }
        if(count == 1)
        {
            type = 2;
        }
        else if(count > 1 && (input[1] >= 'A' && input[1] <= 'Z'))
        {
            type = 2;
        }
        else
        {
            type = 1;
        }
        if(type == 1)
           {
               stack <char> row_string;
               int position;
               for(int i = 1 ; input[i] != 'C' ; i++ )
                {
                    row_string.push(input[i]);
                    position = i;
                }
                position+= 2;
                int numerical = 1;
                while(!row_string.empty())
                {
                    row = row + (row_string.top()-'0') * numerical;
                    numerical *= 10;
                    row_string.pop();
                }

                stack <char> column_string;

                for(int i = position ; i<input_size ; i++ )
                {
                    column_string.push(input[i]);
                }
                numerical = 1;
                while(!column_string.empty())
                {
                    column = column + (column_string.top()-'0') * numerical;
                    numerical *= 10;
                    column_string.pop();
                }


                stack<char> ans;

                while(column !=0)
                {
                    if(column%26 != 0)
                    {
                        char a =(char) ((column%26)-1 + 'A');
                        ans.push(a);
                        column = column/26;
                    }
                    else
                    {
                        ans.push('Z');
                        column = ((column)/26)-1;
                    }

                }
                while(!ans.empty())
                {
                    cout << ans.top();
                    ans.pop();
                }
                cout << row << endl;
           }
           else
           {
               int position = 0;
               stack <char> column_string ;
               while(input[position] >= 'A' && input[position] <= 'Z')
               {
                   column_string.push(input[position]);

                   position++;
               }
               int numerical = 1;

               while(!column_string.empty())
               {
                   column = column + (column_string.top() - 'A' + 1 ) * numerical;
                   column_string.pop();
                   numerical *= 26;
               }

               stack <char> row_string ;
                for(int i = position ; i<input_size ; i++ )
                {
                    row_string.push(input[i]);
                }
                numerical = 1;
                while(!row_string.empty())
                {
                    row = row + (row_string.top()-'0') * numerical;
                    numerical *= 10;
                    row_string.pop();
                }

                cout << "R" << row << "C" << column << endl;

           }
    }

    return 0;
}
