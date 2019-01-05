#include <bits/stdc++.h>

using namespace std ;

int main()
{
    string input ;
    long long int length , flake_count = 0  , candy_count = 0 , char_count = 0 ;

    cin >> input ;
    cin >> length ;

    long long int s_l = input.size();


    for(long long int i = 0 ; i < s_l ; i++)
    {
        if(input[i] == '*')
        {
            flake_count++;
        }
        else if(input[i] == '?')
        {
            candy_count++;
        }
        else char_count++;
    }

    if(char_count == length)
    {
        for(long long int i = 0 ; i < s_l ; i++)
        {
            if(input[i] != '*' && input[i] != '?')
                printf("%c", input[i]);
        }
        printf("\n");
    }
    else if(length > char_count)
    {
        if(flake_count > 0)
        {
            bool flake_found = false ;
            for(long long int i = 0 ; i < s_l ; i++)
            {
                if(input[i] != '*' && input[i] != '?')
                    printf("%c", input[i]);
                else if(input[i] == '*' && flake_found == false)
                {
                    flake_found = true;
                    for(int j = 0 ; j < length - char_count ; j++)
                    {
                        printf("%c", input[i-1]);
                    }
                }
            }
            printf("\n");
        }
        else
        {
            printf("Impossible\n");
        }
    }
    else if(length < char_count)
    {
        if(flake_count + candy_count >= (char_count - length))
        {
            int char_need_del = char_count - length;

            for(long long int i = 0 ; i < s_l ; i++)
            {
                if(input[i] != '*' && input[i] != '?')
                {
                    if(input[i+1] == '*' || input[i+1] == '?')
                    {
                        if(char_need_del != 0)
                        {
                            char_need_del--;
                        }
                        else
                        {
                            printf("%c", input[i]);
                        }
                    }
                    else
                    {
                        printf("%c", input[i]);
                    }
                }
            }
            printf("\n");
        }
        else
        {
            printf("Impossible\n");
        }
    }

}
