#include <bits/stdc++.h>

using namespace std;

struct watchman
{
    long long int x ;
    long long int y ;
};

bool sortByStart(watchman a , watchman b)
{
    if(a.x == b.x) return a.y < b.y;
    return a.x < b.x;
}
bool sortByEnd(watchman a , watchman b)
{
    return a.y < b.y;
}

int main()
{
    long long int n ;

    scanf("%lld", &n);

    watchman startA[200005];
    watchman endA[200005];
    //watchman eqA[200005];

    long long int inputx ,inputy;

    for(long long int i = 0 ; i < n ; i++)
    {
        scanf("%lld %lld", &inputx , &inputy);
        startA[i].x = inputx;
        endA[i].x = inputx;
        startA[i].y = inputy;
        endA[i].y = inputy;
    }

    sort(startA , startA+n , sortByStart);
    sort(endA , endA + n , sortByEnd);

    long long int ans = 0 ;

    for(long long int i = 0 ; i < n-1 ;i++)
    {
        long long int count =0 , compareX;
        if(startA[i].x == startA[i+1].x)
        {
            compareX = startA[i].x;
            i++;
            while(i<n)
            {
                if(compareX == startA[i].x)
                {
                    count++;
                    i++;
                }
                else
                {
                    i--;
                    break;
                }

            }
            ans += (count * (count+1) / 2);
        }

    }
    //cout << ans << endl;
    for(long long int i = 0 ; i < n-1 ;i++)
    {
        long long int count =0 , compareY;
        //cout << endA[i].y << ":: " << endA[i+1].y << endl;
        if(endA[i].y == endA[i+1].y)
        {
            compareY = endA[i].y;
            i++;
            while(i<n)
            {
                if(compareY == endA[i].y)
                {
                     //cout << endA[i].y << ":: " << endA[i+1].y << endl;
                    count++;
                    i++;
                }
                else
                {
                    i--;
                    break;
                }

            }
            ans += (count * (count+1) / 2);
        }

    }
    //cout << ans << endl;
    for(long long int i = 0 ; i < n-1 ;i++)
    {
        long long int count =0 , compareX , compareY;
        //cout << startA[i].x <<"::" <<startA[i+1].x <<"::"<< startA[i].y <<"::"<<  startA[i+1].y << endl;
        if(startA[i].x == startA[i+1].x && startA[i].y == startA[i+1].y)
        {
            compareX = startA[i].x;
            compareY = startA[i].y;
            i++;
            while(i<n)
            {
                if(compareX == startA[i].x && compareY == startA[i].y)
                {
                    count++;
                    i++;
                }
                else
                {
                    i--;
                    break;
                }

            }
            ans -= (count * (count+1) / 2);
        }

    }
    //cout << ans << endl;
    printf("%lld\n",ans);

    return 0;
}
