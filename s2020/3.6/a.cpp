// A. Grade Allocation
// https://codeforces.com/contest/1316/problem/A
// ACCEPTED

#include <iostream>

using namespace std;

int main()
{
    int tests, num, max, sum, hold;
    cin >> tests;

    while( tests-- )
    {
        cin >> num >> max;
        sum = 0;
        while( num-- )
        {
            cin >> hold;
            sum += hold;
        }
        cout << ( sum >= max ? max : sum ) << '\n';
    }
    return 0;
}