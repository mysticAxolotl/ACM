using namespace::std;
#include <iostream>

int main()
{
    int b, g, n;
    cin >> b >> g >> n;

    if( b >= n && g >= n)
    {
        cout << n + 1;
        return 1;
    }

    switch( b < g )
    {
        case 1:
            cout << b + 1;
            break;
        default:
            cout << g + 1;
    }
    return 0;
}