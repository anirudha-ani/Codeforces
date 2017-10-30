#include <bits/stdc++.h>

using namespace std ;

int main()
{
    string input ;

    cin>> input ;

    int length = input.length();
    bool first = false;
    bool second = false ;
    for(int i = 0 ; i < length ; i++)
    {
        if(input[i] == 'A')
        {
            if(i+2 < length && input[i+1] == 'n' && input[i+2] == 'n')
            {
                if(first)
                {
                    second = true ;
                }
                else
                {
                    first = true;
                }
            }

        }
        if(input[i] == 'D')
        {
            if(i+4 < length && input[i+1] == 'a' && input[i+2] == 'n'&& input[i+3] == 'i'&& input[i+4] == 'l')
            {
                if(first)
                {
                    second = true ;
                }
                else
                {
                    first = true;
                }
            }
        }
        if(input[i] == 'O')
        {
            if(i+3 < length && input[i+1] == 'l' && input[i+2] == 'y'&& input[i+3] == 'a')
            {
                if(first)
                {
                    second = true ;
                }
                else
                {
                    first = true;
                }
            }
        }
        if(input[i] == 'S')
        {
            if(i+4 < length && input[i+1] == 'l' && input[i+2] == 'a'&& input[i+3] == 'v'&& input[i+4] == 'a')
            {
                if(first)
                {
                    second = true ;
                }
                else
                {
                    first = true;
                }
            }
        }
        if(input[i] == 'N')
        {
            if(i+5 < length && input[i+1] == 'i' && input[i+2] == 'k'&& input[i+3] == 'i'&& input[i+4] == 't'&& input[i+5] == 'a')
            {
                if(first)
                {
                    second = true ;
                }
                else
                {
                    first = true;
                }
            }
        }

    }
    if(second)
    {
        printf("NO\n");
    }
    else if(first)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0 ;
}
