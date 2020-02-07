// B. Array Sharpening
// https://codeforces.com/contest/1291/problem/B
// 

#include <iostream>

using namespace std;

int main()
{
    int tests, n;
    cin >> tests;
    for(; tests; --tests )
    {
        cin >> n;
        int arr[ n ], big = 1, p = -1;
        bool pos = 1;
        for( int i = 0; i < n; ++i )
        {
            cin >> arr[ i ];
            if( pos && arr[ i ] < i )
            {
                pos = 0;
                p = i;
            }
        }

        if( n == 1 )
        {
            cout << "YES\n";
            continue;
        }
        if( n == 2 )
        {
            if( !( arr[ 0 ] == 0 && arr[ 1 ] == 0 ) )
                cout << "YES\n";
            else
                cout << "NO\n";
            continue;
        }
        if( p == -1 )
        {
            cout << "YES\n";
            continue;
        }

        int j = n - 1, k = 0;
        for(; j > -1 && arr[ j ] >= k++; --j );
        if( j == -1 )
        {
            cout << "YES\n";
            continue;
        }
        if( p > j )
        {
            if( j + 1 == p && ( arr[p] == 1 && arr[j] == 1 ) )
                cout << "NO\n";
            else
                cout << "YES\n";
            continue;
        }

        cout << "NO\n";
    }
    return 0;
}