#include <bits/stdc++.h>

using namespace std;
int n ;

double  input ;
double maxi = 0.0 , mini=1000000000.00;
vector <double> position , velocity;

bool cTime(double  time)
{
    //cout << "Pos = " << pos << endl ;
    double current ;
    double ans = 0.0 ;
    double minLeft = -1000000000000000000 ;
    double minRight = 1000000000000000000;
    for(int j = 0 ; j < n ; j++)
    {
        minLeft = max(position[j] - (velocity[j] * time) , minLeft);
        minRight = min(position[j] + (velocity[j] * time) , minRight);
        //cout << current << " == ";
        //ans = max(current , ans );
    }
    //cout << "Time = " << time << " l = " << minLeft << " r = " << minRight << endl ;
    if(minLeft <= minRight)
    {
        return true;
    }
    else
    {
        return false ;
    }
    //cout << endl ;
    //cout << "Ans = " << ans << endl ;
    //return ans ;
}

int main()
{


    scanf("%d", &n);

    for(int i = 0 ; i < n ; i++)
    {
        scanf("%lf", &input);

        position.push_back(input);
        maxi = max(input , maxi);
        mini = min(input , mini);
    }
    //cout << maxi << " :: " << mini << endl ;
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%lf", &input);

        velocity.push_back(input);
    }
    double ans = 0.0;
    double current;

    double eps = pow(10 , -9);
    //cout << maxi << " :: " << mini << endl ;
    double miniTime = 0.0;
    double maxiTime = 1000000000;
    double mid ;
    int counter = 0 ;
    while(counter < 200)
    {
        mid = (miniTime + maxiTime)/2;

        if(cTime(mid) == true)
        {
            maxiTime = mid;
        }
        else
        {
            miniTime = mid;
        }
        counter++;
    }

    //cout << maxi << " :: " << mini << endl ;
    //cout << miniTime << "::" << maxiTime << endl ;
    if(cTime(miniTime) == true)
    {
        ans = miniTime;
    }
    else
    {
        ans = maxiTime;
    }
    printf("%.10f\n",ans);
    return 0;
}
