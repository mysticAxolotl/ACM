#include <iostream>
#include <vector> 
#include <map>
#include <string>
using namespace std;

int main()
{
    int queries, length, shows, req, min;
    string ans = "";
    cin >> queries;
    for( int i = 0; i < queries; ++i )
    {
        // n = length
        // k = shows
        // d = req
        cin >> length >> shows >> req;

        min = shows;
        vector<int> sched( length );
        for( int j = 0; j < length; ++j )
            cin >> sched[j];

        map<int, int> test;

        for( int j = 0; j < req - 1; ++j )
        {
            if( test[ sched[j] ] )
                ++test[ sched[j] ];
            else
                test[ sched[j] ] = 1;
        }

        if( length == req )
        {
            if( test[ sched[ req - 1 ] ] )
                ++test[ sched[ req - 1 ] ];
            else
                test[ sched[ req - 1 ] ] = 1;
            ans += to_string( test.size() ) + '\n';
            continue;
        }

        for( auto j = sched.begin(), k = ( sched.begin() + req - 1); k != sched.end(); ++j, ++k)
        {            
            if( test[*k] )
                ++test[*k];
            else
                test[*k] = 1;

            if( test.size() == 1 )
            {
                min = 1;
                break;
            }

            if( test.size() < min )
                min = test.size();
            
            --test[ *j ];
            if( test[*j] == 0 )
                test.erase(*j);
        }

        ans += to_string(min) + '\n';
    }
    cout << ans;
    return 0;
}