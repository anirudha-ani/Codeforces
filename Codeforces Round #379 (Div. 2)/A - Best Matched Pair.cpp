#include <bits/stdc++.h>

using namespace std;
string to_STRING ( int Number )
{
	stringstream ss;
	ss << Number;
	return ss.str();
}

int main()
{
    int n ;

    scanf("%d", &n);

    int maxi = -1;

    vector <int> data;
    int x ;
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d", &x);
        data.push_back(x);
    }

    string input ;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(i == j)
            {
                continue;
            }
            else
            {
                int ans = data[i] * data[j];


                string str = to_STRING(ans);
                bool flag = false ;

                int length = str.length();

                for(int k = 0 ; k < length-1 ; k++)
                {
                    if(str[k]>= str[k+1] || str[k+1] - str [k] != 1)
                    {
                        flag = true ;
                        break;
                    }
                }



                if(!flag)
                {
                    if(ans > maxi)
                    {
                        maxi = ans ;
                    }
                }
            }
        }
    }
    printf("%d\n", maxi);
    return 0;
}
