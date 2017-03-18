#include <bits/stdc++.h>

using namespace std;

int name[55];

int main()
{
    int n , k ;
    string input ;

    scanf("%d %d", &n , &k);
    int first_pointer = 1;
    int second_pointer = k ;
    int counter = 1 ;
    for(int i = 1 ; i <= n ; i++)
    {
        name[i] = counter;
        counter++ ;
    }

    for(int i = 0 ; i < n -k + 1 ; i++)
    {
        cin >> input ;

        if(input == "YES")
        {

        }
        else
        {
            name[second_pointer] = name[first_pointer];
        }
        first_pointer++;
        second_pointer++;
    }
    for(int i = 1 ; i <= n ; i++)
    {
        if(name[i] <= 26)
        {
            string ans = "";
            ans += (char)('A' - 1 + name[i]);
            cout <<  ans  ;
        }
        else
        {
            string ans ="";
            ans += (char)('A' - 1 + name[i]-26) ;
            ans += "a";
            cout <<  ans   ;
        }

        if(i != n)
        {
            .
            cout << " " ;
        }
        else
        {
            cout << endl ;
        }
    }
}
