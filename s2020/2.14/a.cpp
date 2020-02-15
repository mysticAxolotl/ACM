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
        bool pos = 0, neg = 0;
        int sum = 0, steps = 0;
        for( int i = num, hold; i; --i )
        {
            cin >> hold;
            if( hold == 0 )
            {
                pos = 1;
                ++sum;
                ++steps;
            }
            else
            {
                sum += hold;
                if( hold < -1 )
                    neg = 1;
                if( hold > 0 )
                    pos = 1;
            }
        }

        if( sum != 0 )
        {
            cout << steps << '\n';
            continue;
        }
        
        if( pos || neg )
        {
            cout << ++steps << '\n';
            continue;
        }

        cout << steps + 2 << '\n';

    }

    return 0;
}