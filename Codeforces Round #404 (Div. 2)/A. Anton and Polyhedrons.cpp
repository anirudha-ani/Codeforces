#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

int main()
{
    map <string , int > faces ;

    faces["Tetrahedron"] = 4;
    faces["Cube"] = 6;
    faces["Octahedron"] = 8;
    faces["Dodecahedron"] = 12;
    faces["Icosahedron"] = 20;

    int input ;
    ll ans = 0 ;

    char data[50] ;

    scanf("%d", &input);
    gets(data);
    for(int i = 0 ; i < input ; i++)
    {
        gets(data);
        string str(data);

        ans+= faces[str];
    }
    printf("%lld\n", ans);
    return 0;
}
