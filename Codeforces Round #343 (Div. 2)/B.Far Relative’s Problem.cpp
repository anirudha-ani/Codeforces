#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;


struct male
{
    int start ;
    int end ;
    bool selected  ;
}M[5000];

struct female
{
    int start;
    int end;
    bool selected ;
}F[5000];
bool sort_M(male x , male y)
{
    if(x.end == y.end)
    {
        return x.start>y.start;
    }
    else return x.end>y.end;
}
bool sort_F(female x , female y)
{
    if(x.end == y.end)
    {
        return x.start>y.start;
    }
    else return x.end>y.end;
}
int main()
{
    int n ;

    scanf("%d", &n);
    char gender ;
    int number_M = 0 , number_F  = 0;
    int start , end;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> gender;
        if(gender == 'M')
        {
            scanf("%d %d", &start , &end);
            M[number_M].start = start ;
            M[number_M].end = end;
            M[number_M].selected = false;
            number_M++;
        }
        else if (gender == 'F')
        {
            scanf("%d %d", &start , &end);
            F[number_F].start = start ;
            F[number_F].end = end;
            F[number_F].selected = false;
            number_F++;
        }
    }
    //sort(M , M+number_M , sort_M);
    //sort(F , F+number_F , sort_F);
    int count = 0;
    int max = 0 , male ,female;
    for(int k = 1 ; k <= 366 ; k++)
    {
        male = 0 ;
        female = 0;
        for(int i = 0 ; i<number_M ; i++)
        {
            if(M[i].start <= k && M[i].end >= k)
            {
                male++;
            }
        }
        for(int i = 0 ; i<number_F ; i++)
        {
            if(F[i].start <= k && F[i].end >= k)
            {
                female++;
            }
        }
        int ans = male<female ? male*2 : female*2 ;
        max = ans > max ? ans :max;
    }
//    for(int i = 0 ; i<number_M ; i++)
//    {
//
//        for(int j = 0 ; j < number_F ; j++)
//        {
//            if(F[j].end <= M[i].end && F[j].end >= M[i].start && F[j].selected != true)
//            {
//                F[j].selected = true;
//                count += 2;
//                cout << F[j].start << " " << F[j].end << " " << M[i].start << " " << M[i].end << endl;
//                break;
//            }
//            else if(F[j].start <= M[i].end && F[j].start >= M[i].start && F[j].selected != true)
//
//            {
//                F[j].selected = true;
//                count += 2;
//                cout << F[j].start << " " << F[j].end << " " << M[i].start << " " << M[i].end << endl;
//                break;
//            }
//
//        }
//    }
    printf("%d\n", max);
    return 0;
}
