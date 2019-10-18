using namespace::std;
#include <iostream>

int main()
{  
    int p1, p2, y1, y2, n;
    cin >> p1 >> p2 >> y1 >> y2 >> n;

    int tp = p1 + p2, 
        tc = p1*y1 + p2*y2,
        mi = 0, ma = 0;

    if( n == tc )
        mi = ma = tp;
    else if( y1 == y2 )
    {
        ma = n/y1;
        
        mi = n % ( y1  - 1 );
    }

    cout << mi << ' ' << ma << '\n';
    
    return 0;
}