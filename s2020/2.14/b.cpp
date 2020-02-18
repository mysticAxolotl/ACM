// B. Assigning to Classes
// http://codeforces.com/contest/1300/problem/B
// 

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int tests, num;
    cin >> tests;
    for(; tests; --tests )
    {
        int num;
        cin >> num;
        vector< int > arr ( num * 2 );
        for( int i = 0; i < num; ++i )
            cin >> arr[ i ];
        sort( arr.begin(), arr.end() );
        

    }

    return 0;
}