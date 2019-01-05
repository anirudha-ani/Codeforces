#include <bits/stdc++.h>

using namespace std ;

int main()
{
    stack <char> data;
    char input[500005];
    int n ;

    scanf("%d", &n);
    map <int , int> marking ;
    int balanced= 0 ;
    long long int ans = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%s", input);

        int k = 0 ;
        int score = 0 ;
        stack <char> store ;
        //cout <<"HE" << endl ;
        while(input[k] != '\0')
        {
            //cout << input[k] << endl ;
            if(input[k] == '(')
            {
                store.push(input[k]);
                //cout << "1" << endl ;
            }
            else {
                if(!store.empty() && store.top() == '(')
                {
                    store.pop();
                    //cout << "2" << endl;
                }
                else {
                        store.push(input[k]);
                        //cout << "3" << endl ;
                }
            }
            //cout << k << endl ;
            k++;
        }

        if(store.size() == 0)
        {
            balanced++;
        }
        else {
            bool possible = true;
            char init = store.top() ;
            store.pop();
            if(init == '(')
            {
                score++;
            }
            else score--;
            //cout << "HERE" << endl ;
            while(!store.empty())
            {
                if(store.top() != init)
                {
                    possible = false ;
                    break;
                }
                else if(store.top()  == '(')
                {
                    score++;
                }
                else score--;
                store.pop();
            }
            if(!possible) continue;
            else if(marking[score * -1] > 0)
            {
                marking[score * -1] = marking[score * -1] - 1 ;
                ans++ ;
            }
            else {
                    marking[score] = marking[score] + 1 ;
            }
        }

    }
    ans += balanced/2;
    printf("%lld\n", ans);

    return 0 ;
}
