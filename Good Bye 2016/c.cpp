#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll max_ans = -1000000000000;

ll n , c , d ;

vector<ll> rating_change ;
vector <ll> division ;


int  valid (ll input)
{
    ll current_rating = input;
    ll current_div;

    if(input > 1899)
    {
        current_div = 1;
    }
    else
    {
        current_div = 2;
    }

    bool isValid = true;

    for(int i = 0 ; i < n ; i++)
    {
        if(current_div != division[i])
        {
            isValid = false ;
            break;
        }
        else
        {
            current_rating += rating_change[i];

            if(current_rating > 1899)
            {
                current_div = 1;
            }
            else
            {
                current_div = 2;
            }
        }
    }

    if(isValid == true)
    {
        max_ans = max(max_ans , current_rating);
        return 3;
    }
    else
    {
        return current_div;
    }
}

int main()
{

    bool one_found = false ;
    bool two_found = false ;

    scanf("%lld", &n);
    int position  = -1 ;
    for(ll  i = 0 ; i < n ; i++)
    {
        scanf("%lld %lld", &c , &d);

        rating_change.push_back(c);
        division.push_back(d);

        if(d==1)
        {
            one_found = true ;
        }
        else
        {
            two_found = true ;
        }
    }

    if(two_found == false)
    {
        printf("Infinity\n");
    }
    else
    {
        ll l = -50000000;
        ll h = 50000000; // Not n - 1
        int counter = 0 ;
        while (l < h && counter < 50)
        {
            ll mid = (l + h) / 2;

            int value = valid(mid);
            //cout << mid << "::" << value << endl ;
            valid(mid-1);
            valid(mid+1);
            if (value == 3 || value == 2)
            {
                l = mid + 1;
            }
            else
            {
                h = mid;
            }
            counter++;

        }
        if(max_ans == -1000000000000)
        {
            printf("Impossible\n");
        }
        else
        {
            while(valid(l) == 3)
            {
                l++;
            }
            printf("%lld\n", max_ans);
        }
    }

    return 0 ;
}
