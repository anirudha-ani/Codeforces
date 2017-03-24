#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    string input = "1";

    for(int i = 2 ; i < 10 ; i++)
    {
        std::stringstream Stream;
        string MyStr;
Stream.str(MyStr);
Stream << i;
MyStr = Stream.str();
        input = input + MyStr + input ;
    }
    cout << input << endl;
    return 0;
}
