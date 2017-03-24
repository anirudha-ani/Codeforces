#include <queue>
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    int n , m;

    cin >> n >> m;

    string input ;
    cin >> input;

    queue <char> ans1 ;
    queue <char> ans2 ;

    for(int j = 0 ; j < n ; j++)
    {
        ans1.push(input[j]);
    }

    for(int i = 0 ; i < m ; i++)
    {
        char xi , yi;

        cin >> xi >> yi ;
        if(ans1.empty() == true)
        {
            while(ans2.empty()!= true)
            {
                if(ans2.front() == xi)
                {
                    ans1.push(yi);
                    ans2.pop();
                }
                else if(ans2.front() == yi)
                {
                    ans1.push(xi);
                    ans2.pop();
                }
                else
                {
                    ans1.push(ans2.front());
                    ans2.pop();
                }
            }
        }
        else if(ans2.empty() == true)
        {
            while(ans1.empty()!= true)
            {
                if(ans1.front() == xi)
                {
                    ans2.push(yi);
                    ans1.pop();
                }
                else if(ans1.front() == yi)
                {
                    ans2.push(xi);
                    ans1.pop();
                }
                else
                {
                    ans2.push(ans1.front());
                    ans1.pop();
                }
            }
        }

    }

    if(ans1.empty() == true)
    {
        while(ans2.empty() != true)
        {
            cout << ans2.front();
            ans2.pop();
        }
    }
    else
    {
        while(ans1.empty() != true)
        {
            cout << ans1.front();
            ans1.pop();
        }
    }
    cout << endl;

    return 0;
}
