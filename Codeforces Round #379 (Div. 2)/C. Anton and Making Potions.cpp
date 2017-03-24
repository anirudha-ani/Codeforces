#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int n, m , k , x , s ;

    vector<unsigned long long int>  time_needed;
    vector<unsigned long long int> mana_1st_spell;
    vector<unsigned long long int>  potion_created;
    vector<unsigned long long int> mana_2nd_spell;

    unsigned long long int input ;

    scanf("%llu %llu %llu" , &n , &m , &k);
//cout << n << " " << m << " " << k << endl;
    scanf("%llu %llu" ,&x , &s);
    //cout << "Here" << endl;
    for(unsigned long long int i = 0 ; i < m ; i++)
    {
        scanf("%llu", &input);
        time_needed.push_back(input);
    }
//cout << "Here" << endl;
    for(unsigned long long int i = 0 ; i < m ; i++)
    {
        scanf("%llu", &input);
        mana_1st_spell.push_back(input);
    }
//cout << "Here" << endl;
    for(unsigned long long int i = 0 ; i < k ; i++)
    {
        scanf("%llu", &input);
        potion_created.push_back(input);
    }
   // cout << "Here" << endl;
    for(unsigned long long int i = 0 ; i < k ; i++)
    {
        scanf("%llu", &input);
        mana_2nd_spell.push_back(input);
    }
    //cout << "Here" << endl;
    unsigned long long int answer = n * x ;

    std::vector<unsigned long long int>::iterator low,up;

    up= std::upper_bound (mana_2nd_spell.begin(), mana_2nd_spell.end(), s);
    unsigned long long int index = up-mana_2nd_spell.begin();
    unsigned long long int can_create;
    if(index != 0)
    {
        can_create =  potion_created[up-mana_2nd_spell.begin()-1]  ;

        if(can_create > n)
        {
            printf("0\n");
            return 0 ;
        }
        else
        {
            answer = min(answer , (n-can_create) * x);
        }
    }


    for(int i = 0 ; i < m ; i++)
    {
        if(mana_1st_spell[i] <= s)
        {
            up= std::upper_bound (mana_2nd_spell.begin(), mana_2nd_spell.end(), s - mana_1st_spell[i]);
            index = up-mana_2nd_spell.begin();
            if(index == 0)
            {
                can_create = 0;
            }
            else
            {
                can_create =  potion_created[up-mana_2nd_spell.begin()-1]  ;
                if(can_create > n)
                {
                    printf("0\n");
                    return 0 ;
                }
            }

            unsigned long long int new_time = (n-can_create) * time_needed[i];
            answer = min(answer , new_time);
        }
    }
    printf("%llu\n", answer);
    return 0 ;
}
