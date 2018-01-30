#include <bits/stdc++.h>

using namespace std ;


int main()
{
    string x ;

    cin >> x ;

    int length = x.length();
    long long int counter = 0 ;

    for(int i = 0 ; i < length ; i++)
    {
        if(x[i] =='a' || x[i] =='e' || x[i] =='i' || x[i] =='o' || x[i] =='u' || x[i] =='1' || x[i] =='3' || x[i] =='5' || x[i] =='7' || x[i] =='9' )
        {
            counter++;
        }
    }

    cout << counter << endl ;

    return 0;
}
