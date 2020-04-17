// C. Two Teams Composing
// http://codeforces.com/contest/1335/problem/C
// ACCEPTEDs

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while( t-- )
    {
        int num;
        cin >> num;
        if( num == 1 )
        {
            int trash;
            cin >> trash;
            cout << "0\n";
            continue;
        }
        else if( num == 2 )
        {
            int trash;
            cin >> trash >> trash;
            cout << "1\n";
            continue;
        }

        int s[num + 1] { 0 };

        for( int i = num, hold; i--; )
        {
            cin >> hold;
            ++s[hold];
        }
        
        vector<int> stu;
        for( auto i = 1; i < num + 1; ++i )
        {
            if( s[i] == 0 )
                continue;
            stu.push_back( s[i] );
        }

        sort( stu.begin(), stu.end() );

        if( stu.size() == 1 )
            cout << ( *stu.begin() > 1 ? "1\n" : "0\n" );
        else
        {
            int max = *( stu.end() - 1 ),
                limit = stu.size() - 1;
            
            if( max > limit)
                cout << ( limit + 1 == max ? limit : limit + 1 ) << '\n';
            else if( max == limit )
                cout << max << '\n';
            else if( max < limit )
                cout << max << '\n';
        }
    }
}