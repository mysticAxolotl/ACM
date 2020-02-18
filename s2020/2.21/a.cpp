// A. Two Bunnies
// https://codeforces.com/contest/1304/problem/A
// ACCEPTED

#include <iostream>

using namespace std;

int main()
{
    short t;
    cin >> t;
    long double p1, p2, d1, d2, time = 0;
    long long int trunc;
    while( t-- )
    {
        cin >> p1 >> p2 >> d1 >> d2;
        trunc = time = ( p2 - p1 ) / ( d1 + d2 );
        cout << ( trunc == time ? trunc : -1 ) << '\n';
    }
    return 0;
}