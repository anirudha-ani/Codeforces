#include <cstdio>
#include <iostream>

using namespace std;
unsigned long long int a , b ,  c;
int next;
long long int taking_steps(long long int n )
{
    unsigned long long int step1 , step2 , remaining1 , remaining2;
    cout << n << endl;
    //cin >> next;
    step1 = n/(b-c);

    remaining1 = n - (b-c) * step1 ;
    cout << n << endl;
    cout <<(b * step1) << endl;
    cout <<(step1 * c) << endl;
    if(step1 > 0 && remaining1 > 0)
    {
        cout << "Step1 :: " << step1 << " Remaining ::" << remaining1<<endl;
        step1 = step1 + taking_steps(remaining1);

    }

    step2 = n/a;

    remaining2 = n - step2 * a;

    if(step2 > 0 && remaining2 > 0)
    {
       cout << "Step2 :: " << step2 << " Remaining ::" << remaining2<<endl;
        step2 = step2 + taking_steps(remaining2);
    }

    if(step1>step2) return step1;
    else return step2;

}

int main()
{
    unsigned long long int n ;

    cin >> n;
    cin >> a;
    cin >> b;
    cin >> c;

    cout <<"Ans " << taking_steps(n);
    return 0;
}
