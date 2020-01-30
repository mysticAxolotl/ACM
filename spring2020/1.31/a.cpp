// A. Parallelepiped
// https://codeforces.com/contest/224/problem/A

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace::std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if( a == b && b == c )
    {
        cout << sqrt( a ) * 12 << '\n';
        return 0;
    }
    
    
    if( a == b || a == c || b == c )
    {
        int same, diff;

        if( a == b )
        {
            same = a;
            diff = c;
        }
        else if( a == c )
        {
            same = a;
            diff = b;
        }
        else if( b == c )
        {
            same = b;
            diff = a;
        }

        int side = __gcd( same, diff );
        int side2 = same / side;
        cout << ( side + side + side2 ) * 4 << '\n';
        return 0;
    }
    cout << ( __gcd( a, b ) + __gcd( a, c ) + __gcd( b, c ) ) * 4 << '\n';
    return 0;
}