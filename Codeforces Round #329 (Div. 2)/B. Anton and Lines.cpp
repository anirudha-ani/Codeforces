#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

struct y
{
    long long int y1;
    long long int y2;
};

bool sortByY1(y one ,  y two)
{
    if(one.y1 == two.y1)
    {
        return one.y2 < two.y2;
    }
    return one.y1 < two.y1;
}
int main()
{
    long long int input_no ,x1 ,x2;

    scanf("%lld", &input_no);
    y input[100001];
    scanf("%lld %lld", &x1 , &x2);

    for(int i  = 0 ; i < input_no ; i++)
    {
        long long int k , b;

        scanf("%lld %lld", &k , &b);
        input[i].y1 = k * x1 + b;
        input[i].y2 = k * x2 + b;
    }
//    cout<<"Before sort "<< endl;
//    for(int i = 0 ; i < input_no ; i++)
//    {
//        cout << input[i].y1 <<" "<< input[i].y2 << endl;
//    }
    sort(input , input+input_no , sortByY1);
//    cout << "After sort"<< endl;
//    for(int i = 0 ; i < input_no ; i++)
//    {
//        cout << input[i].y1 <<" "<< input[i].y2 << endl;
//    }

    for(int i = 0 ; i < input_no-1 ; i++)
    {

        if(input[i].y2 > input[i+1].y2)
        {

          printf("Yes\n");
          return 0;
        }
    }
    printf("No\n");
    return 0 ;
}
