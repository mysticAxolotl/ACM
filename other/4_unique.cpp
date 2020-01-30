#include <iostream>
using namespace std;

int main()
{
    int sint, bint;
    cin >> sint >> bint;
    for( string small; sint <= bint; ++sint)
    {
        small = to_string(sint);
        for( int j = 0; j < small.length() - 1; ++j )
        {
            for( int k = j + 1; k < small.length(); ++k)
            {
                if( small[j] == small[k] )
                {
                    goto reset;
                }
            }
        }
        cout << small << '\n';
        return 0;
        reset:;
    }
    cout << -1 << '\n';
    return 0;
}