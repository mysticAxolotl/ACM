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
    
    return 0;
}