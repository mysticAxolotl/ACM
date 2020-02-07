#include <iostream>
using namespace std;

int main()
{
    int fir, sec;
    cin >> fir >> sec;

    if( fir == 9 && sec == 1 )
    {
        cout << fir << ' ' << fir + 1 << '\n';
        return 0;
    }

    if( fir > sec || fir + 2 <= sec )
    {
        cout << -1 << '\n';
        return 0;
    }

    if( fir == sec )
    {
        sec *= 10;
        cout << sec << ' ' << sec + 1 << '\n';
        return 0;
    }
    sec *= 10;
    cout << sec - 1 << ' ' << sec << '\n';
    return 0;
}