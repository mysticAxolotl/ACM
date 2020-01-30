// ConneR and the A.R.C. Markland-N
// https://codeforces.com/contest/1293/problem/A

#include <iostream>
#include <algorithm>
#include <vector>

using namespace::std;

int main()
{
    int numFloors, cur, numClosed, tests;
    cin >> tests;
    for(; tests > 0; --tests )
    {
        cin >> numFloors >> cur >> numClosed;
        vector< int > floors( numClosed, 0 );
        for( int hold, i = 0; numClosed > 0; --numClosed )
        {
            cin >> hold;
            floors[ i++ ] = hold;
        }
        sort( floors.begin(), floors.end() );
        auto i = floors.begin();
        for(; i != floors.end() && *i < cur; ++i );

        if( i == floors.end() || *i != cur )
            cout << "0\n";
        else
        {
            auto j = i - 1;
            int up = 1, dwn = 1;
            for( ++i; i != floors.end() && *i - cur == up; ++up, ++i);
            for(; j != floors.begin() - 1 && cur - *j == dwn; ++dwn, --j);

            if( i == floors.end() && *( i - 1 ) == numFloors )
                cout << dwn << '\n';
            else if( j == floors.begin() - 1 && *( j + 1 ) == 1 )
                cout << up << '\n';
            else
                cout << min( up, dwn ) << '\n';
        }   
    }
    return 0;
}