#include <bits/stdc++.h>

using namespace std ;

int main()
{
    string x = "123";
    string y = x.substr(1,1);
    cout << y << endl  ;
    int a = 3;
    int b = 2 ;

    for(int i = 4 ; i <= 1005 ; i++)
    {
        if(i == a+b)
        {
            x += "O";
            int temp = a ;
            a = a + b ;
            b = temp ;
        }
        else
        {
            x += "o";
        }
    }
    int input ;
    scanf("%d", &input);

    for(int i = 0 ; i < input ; i++)
    {
        printf("%c", x[i]);
    }
    printf("\n");
    return 0 ;
}
