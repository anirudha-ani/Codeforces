#include <bits/stdc++.h>

using namespace std ;
vector <int> data ;
long long int current = 0 ;
bool ans = false ;
int input , n ;
bool solve(int degree, int index , int moves)
{
    if(ans == true) return true ;

    if(moves == 0)
    {
        degree += data[index];
    }
    else if(moves == 1)
    {
        degree -= data[index];
    }
    if(index == n-1)
    {
        if(degree %360  == 0)
        {
            ans = true ;
            return true;
        }
        else return false ;
    }
    ans = ans | solve(degree , index+1 , 0);
    if(ans == true) return true;
    ans = ans | solve(degree, index+1 , 1);
    if(ans == true) return true;

    return false ;
}
int main()
{


    scanf("%d", &n);

    for(int i= 0 ; i < n ; i++)
    {
        scanf("%d", &input);
        data.push_back(input);
    }
    solve(0 , 0 , 0);
    if(ans != true) solve (0 , 0 , 1);

    if(ans)
    {
        printf("YES\n");
    }
    else { printf("NO\n");};
    return 0;
}
