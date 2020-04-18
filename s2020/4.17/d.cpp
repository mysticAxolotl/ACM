// D. Anti-Sudoku
// https://codeforces.com/contest/1335/problem/D
// ACCEPTED

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while( t-- )
    {
        string out = "", line;

        for( int i = 9; i--; )
        {
            cin >> line;
            line[ line.find('2') ] = '1';
            out += line + '\n';
        }
        cout << out;
    }
    return 0;
}