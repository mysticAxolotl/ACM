// A. Non-zero
// http://codeforces.com/contest/1300/problem/A
// ACCEPTED

#include <iostream>

using namespace std;

int main()
{
    int tests, num;
    cin >> tests;
    for(; tests; --tests )
    {
        cin >> num;
        int sum = 0, steps = 0;
        for( int hold; num; --num )
        {
            cin >> hold;
            if( hold == 0 )
            {
                ++sum;
                ++steps;
            }
            else
                sum += hold;
        }
        cout << ( sum != 0 ? steps : steps + 1 ) << '\n';
    }
    return 0;
}