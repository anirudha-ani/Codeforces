#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int n , k;

    int skill[100001];
    int skillBuff[100001];
    int skillIndex[100001] = {0};

    scanf("%d %d" , &n , &k);

    int input;
    int rating = 0;
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d", &input);
        skill[i] = input;
        rating += input/10;
        skillIndex[i] = input / 10;
        skillBuff[i] = 10-(input%10);
    }

    while(k>0)
    {
        int min = 99999999;
        int index = 0;
        for(int i = 0 ; i < n ; i++)
        {
            if(skillBuff[i] != 0 && skillBuff[i]<min&& skillIndex[i] !=10)
            {
                min = skillBuff[i];
                index = i;
            }
        }

        if(k>=min)
        {
            skill[index]+=min;
            k-=min;
            skillBuff[index] = 0;
            skillIndex[index]+=1;
            rating++;
        }
        else
        {
            k = 0;
            break;
        }

    }
    while(k>0)
    {
        bool flag = false;

        for(int i = 0 ; i < n ; i++)
        {
            if(skillIndex[i] !=10)
                flag =true;
            if(skillIndex[i] != 10 && (k-10)>=0 )
            {
                rating++;
                skillIndex[i]+=1;
            }
            else if((k-10)<0)
            {
                k=0;
                break;
            }
        }
        if(flag)
            break;
    }
    printf("%d\n" , rating);

    return 0;
}
