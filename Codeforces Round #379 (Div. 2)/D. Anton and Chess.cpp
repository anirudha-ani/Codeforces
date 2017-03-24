#include <bits/stdc++.h>

using namespace std;

long long int minus_inf = -1000000000000;
long long int inf = 1000000000000;
struct coordinate
{
    long long int x ;
    long long int y ;


};


int main()
{
    ios::sync_with_stdio(false);
    vector <coordinate> nouka;
    vector <coordinate> hati ;
    vector <coordinate> montri;

    long long int x , y , n ;

    long long int king_x , king_y ;

    char guti ;
    cin >> n ;
    cin >> king_x ;
    cin >> king_y;
//    scanf("%lld", &n);
//    scanf("%lld %lld", &king_x , &king_y);

    coordinate left_bound , right_bound , up_bound , down_bound , up_left , up_right , down_left , down_right;

    left_bound.x =  minus_inf;
    left_bound.y = king_y;

    right_bound.x = inf;
    right_bound.y = king_y;

    up_bound.x = king_x;
    up_bound.y = inf;

    down_bound.x = king_x;
    down_bound.y = minus_inf;

    up_left.x = minus_inf;
    up_left.y = inf ;

    up_right.x = inf;
    up_right.y = inf ;

    down_left.x = minus_inf;
    down_left.y = minus_inf ;

    down_right.x = inf;
    down_right.y = minus_inf ;


    for(int i = 0 ; i < n ; i++)
    {
        cin >> guti >> x >> y ;
        //scanf("%c %lld %lld", &guti , &x , &y);

        coordinate P;
        P.x = x ;
        P.y = y ;

        if(guti == 'R')
        {
            nouka.push_back(P);
        }
        else if(guti == 'B')
        {
            hati.push_back(P);
        }
        else if(guti == 'Q')
        {
            montri.push_back(P);
        }
    }

    int hati_lenght = hati.size();

    for(int i = 0 ; i < hati_lenght ; i++)
    {
        if(hati[i].x == king_x)
        {
            if(hati[i].y>king_y)
            {
                up_bound.y = min(up_bound.y , hati[i].y);
            }
            else if(hati[i].y <king_y)
            {
                down_bound.y = max(down_bound.y , hati[i].y);
            }
        }
        if(hati[i].y == king_y)
        {
            if(hati[i].x>king_x)
            {
                right_bound.x = min(right_bound.x , hati[i].x);
            }
            else if(hati[i].x <king_x)
            {
                left_bound.x = max(left_bound.x , hati[i].x);
            }
        }
    }

    int nouka_lenght = nouka.size();

    for(int i = 0 ; i < nouka_lenght ; i++)
    {
        if(abs(nouka[i].x-king_x) == abs(nouka[i].y - king_y))
        {
            if(nouka[i].x < king_x && nouka[i].y < king_y)
            {
                down_left.x = max(down_left.x , nouka[i].x);
                down_left.y = max(down_left.y , nouka[i].y);
            }
            else if(nouka[i].x < king_x && nouka[i].y > king_y)
            {
                up_left.x = max(up_left.x , nouka[i].x);
                up_left.y = min(up_left.y , nouka[i].y);
            }
            else if(nouka[i].x > king_x && nouka[i].y > king_y)
            {
                up_right.x = min(up_right.x , nouka[i].x);
                up_right.y = min(up_right.y , nouka[i].y);
            }
            else if(nouka[i].x > king_x && nouka[i].y < king_y)
            {
                down_right.x = min(down_right.x , nouka[i].x);
                down_right.y = max(down_right.y , nouka[i].y);
            }
        }
    }

    bool checkmate = false ;

    for(int i = 0 ; i < hati_lenght ; i++)
    {
        if(abs(hati[i].x-king_x) == abs(hati[i].y - king_y))
        {
            if(hati[i].x < king_x && hati[i].y < king_y)
            {
                if(hati[i].x > down_left.x && hati[i].y > down_left.y)
                {
                    checkmate = true;
                    break;
                }
            }
            else if(hati[i].x < king_x && hati[i].y > king_y)
            {
                if(hati[i].x > up_left.x && hati[i].y < up_left.y)
                {
                    checkmate = true;
                    break;
                }
            }
            else if(hati[i].x > king_x && hati[i].y > king_y)
            {
                if(hati[i].x < up_right.x && hati[i].y < up_right.y)
                {
                    checkmate = true;
                    break;
                }

            }
            else if(hati[i].x > king_x && hati[i].y < king_y)
            {
                if(hati[i].x < down_right.x && hati[i].y > down_right.y)
                {
                    checkmate = true;
                    break;
                }
            }
        }
    }

     for(int i = 0 ; i < nouka_lenght ; i++)
     {
         if(nouka[i].x == king_x)
        {
            if(nouka[i].y>king_y)
            {
                if(nouka[i].y <  up_bound.y )
                {
                    checkmate = true;
                    break;
                }

            }
            else if(nouka[i].y <king_y)
            {
                 if(nouka[i].y > down_bound.y )
                {
                    checkmate = true;
                    break;
                }

            }
        }
        if(nouka[i].y == king_y)
        {
            if(nouka[i].x>king_x)
            {
                if(nouka[i].x < right_bound.x )
                {
                    checkmate = true;
                    break;
                }

            }
            else if(nouka[i].x <king_x)
            {
                if(nouka[i].x > left_bound.x )
                {
                    checkmate = true;
                    break;
                }

            }
        }
     }
     int montri_length = montri.size();

     for(int i = 0 ; i < montri_length ; i++)
     {
         if(montri[i].x == king_x)
        {
            if(montri[i].y>king_y)
            {
                if(montri[i].y <  up_bound.y )
                {
                    checkmate = true;
                    break;
                }

            }
            else if(montri[i].y <king_y)
            {
                 if(montri[i].y > down_bound.y )
                {
                    checkmate = true;
                    break;
                }

            }
        }
        if(montri[i].y == king_y)
        {
            if(montri[i].x>king_x)
            {
                if(montri[i].x < right_bound.x )
                {
                    checkmate = true;
                    break;
                }

            }
            else if(montri[i].x <king_x)
            {
                if(montri[i].x > left_bound.x )
                {
                    checkmate = true;
                    break;
                }

            }
        }

        if(abs(montri[i].x-king_x) == abs(montri[i].y - king_y))
        {
            if(montri[i].x < king_x && montri[i].y < king_y)
            {
                if(montri[i].x > down_left.x && montri[i].y > down_left.y)
                {
                    checkmate = true;
                    break;
                }
            }
            else if(montri[i].x < king_x && montri[i].y > king_y)
            {
                if(montri[i].x > up_left.x && montri[i].y < up_left.y)
                {
                    checkmate = true;
                    break;
                }
            }
            else if(montri[i].x > king_x && montri[i].y > king_y)
            {
                if(montri[i].x < up_right.x && montri[i].y < up_right.y)
                {
                    checkmate = true;
                    break;
                }

            }
            else if(montri[i].x > king_x && montri[i].y < king_y)
            {
                if(montri[i].x < down_right.x && montri[i].y > down_right.y)
                {
                    checkmate = true;
                    break;
                }
            }
        }
     }
     if(checkmate)
     {
         printf("YES\n");
     }
     else
     {
         printf("NO\n");
     }
    return 0;
}
