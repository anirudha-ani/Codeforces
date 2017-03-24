#include <stdio.h>

int main()
{
   int n,p,q,i,j,k;
   int a[101];



   i=0;
   while(i<101)
   {
       a[i]=0;
       i++;
   }
   i=0;
   scanf("%d",&n);
   scanf("%d",&p);
   while(i<p)
   {
       scanf("%d",&j);
       if(a[j]==0)
       {
           a[j]=1;
       }
       i++;

   }
   i=0;
   scanf("%d",&q);
   while(i<q)
   {
       scanf("%d",&j);
       if(a[j]==0)
       {
           a[j]=1;
       }
       i++;
   }
   i=1,k=0;
   while(i<=n&&k==0)
   {
       if(a[i]==0)
       {
           k=1;
       }
       i++;
   }
   if(k==0)
   {
       printf("I become the guy.");
   }
   else
   {
       printf("Oh, my keyboard!");
   }

}
