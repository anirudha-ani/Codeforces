#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    char character[26];
    for(int i = 0 ; i < 26 ; i++)
    {
        character[i] = i + 'a';
    }


    int n , m;

    cin >> n >> m;

    string input ;
    cin >> input;

    char a[200005];
    char b[200005];

    for(int i = 0 ; i < m ; i++)
    {
        char xi , yi;

        cin >> xi >> yi ;

        a[i] = xi;
        b[i] = yi;
    }






    for(int i = 0 ; i < 26 ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(character[i] == a[j])
            {
                character[i] = b[j];
            }
            else if(character[i] == b[j])
            {
                character[i] = a[j];
            }
        }
    }

    for(int i = 0 ; i < n ; i++)
    {
        cout << character[(int)(input[i] - 'a')] ;
    }
    cout << endl;
    return 0;
}
