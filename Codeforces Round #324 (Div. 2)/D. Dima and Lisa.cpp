#include <iostream>
#include <cstdio>
#include <cmath>

#define M 1000000
bool marked[M];



bool isPrime(int n)
{
    if(n<M)
        return marked [n];
    else
        {
            int root = sqrt(n);
            for(int i = 2 ; i < root ; i++)
            {
                if(marked[i] == true && n%i == 0)
                    return false;
            }
        }
        return true;


}

void sieve(int n)
{
  for (int i = 2; i * i <= n; i++)
  {
    if (marked[i] == true)
    { // i is a prime
      for (int j = i * i; j <= n; j += i)
      {
        marked[j] = false;
      }
    }
  }
}

void goldbach(int x, int & a, int & b)
{

        for (int i = 2; i <= x / 2; i++)
        {
            if (isPrime(i) && isPrime(x - i))
            {
                a = i;
                b = x - i;
                return;
            }
        }

}

int main()
{

    int n ;
    for(int i = 0 ; i  < M ; i++)
    {
        marked[i] = true;
    }
    sieve(M);
    scanf("%d", &n);

        if(isPrime(n))
        {
            printf("1\n");
            printf("%d\n",n);
            return 0 ;
            //cout << "Check 3" << endl;
        }


    else if (n % 2 !=0)
        {

            int a, b;


            goldbach(n-3, a, b);

            printf("3\n");
            printf("3 %d %d\n",a,b);
        }
    else
        {
            int a, b;
            goldbach(n, a, b);
            printf("2\n");
            printf("%d %d\n",a,b);
        }
        return 0;
}
