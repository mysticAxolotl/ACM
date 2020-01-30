#include <iostream>
using namespace std;

int main()
{
    int n, change;
    string numstr = "";
    cin >> n >> change >> numstr;

    if( !change )
    {
        cout << numstr;
        return 0;
    }
    
    if( numstr.length() == 1 )
    {
        cout << '0';
        return 0;
    }

    string::iterator itr = numstr.begin();

    if( *itr != '1' )
    {
        *itr = '1';
        --change;
    }

    ++itr;
    for(; change && *itr; ++itr)
    {
        if( *itr != '0' )
        {
            *itr = '0';
            --change;
        }
    }
    cout << numstr;

    return 0;
}   