#include <iostream>

using namespace std;

int main()
{
    float Ax , Ay , Bx , By , Cx , Cy;

    cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy;

    float area = 1.0 * (Ax * ( By - Cy) + Bx *(Cy - Ay) + Cx *(Ay - By))/ 2;

    if(area < 0)
        area = area * -1;

    cout << area << endl;
    return 0;
}
