#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    char a[1000000] ;
    char b[1000000] ;



        gets(a);
        gets(b);
        int i;
        for(i=0; a[i]!='\0'; ++i);

     int length_a = i;
     for(i=0; b[i]!='\0'; ++i);
     int length_b = i;
     int index_a , index_b;
    bool flaga = false;
    bool flagb = false;

     for(int i = 0 ; i < length_a ; i++)
     {
         if(a[i] != '0')
         {
             index_a = i;
             flaga=true;
             break;
         }
     }
     for(int i = 0 ; i < length_b ; i++)
     {
         if(b[i] != '0')
         {
             flagb = true;
             index_b = i;
             break;
         }
     }
     if(!flaga && !flagb)
     {
         printf("=\n");
         return 0;
     }

     else if(!flaga)
     {
         printf("<\n");
         return 0;
     }

     else if(!flagb)
     {
         printf(">\n");
         return 0;
     }


     int a_l = length_a - index_a;
     int b_l = length_b - index_b;

     //cout << a_l << " " << b_l<<endl;

     if(a_l>b_l)
     {
         printf(">\n");
         return 0 ;
     }
     else if(a_l < b_l)
     {
         printf("<\n");
         return 0;
     }
     else
     {
         for(int i = index_a , j = index_b ; i < length_a ;i++,j++)
         {
             if(a[i] < b[j])
             {
                  printf("<\n");
                  return 0;
                  break;
             }
             else if(a[i]>b[j])
             {
                  printf(">\n");
                  return 0;
                  break;
             }
             else if(a[i] == b[j] && i == length_a-1)
             {
                 printf("=\n");
                 return 0;
                 break;
             }
         }
     }


    return 0;
}
