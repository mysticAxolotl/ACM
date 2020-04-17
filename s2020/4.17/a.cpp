// A. Candies and Two Sisters
// http://codeforces.com/contest/1335/problem/A
// ACCEPTED

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t; 
    double c;
    cin >> t;
    while( t-- )
    {
        cin >> c;
        cout << ( int ) ( ceil(c/2) - 1 ) << '\n';
    }
    return 0;
}