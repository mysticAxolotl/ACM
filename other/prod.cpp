#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, d, pos = 0, neg = 0;

    cin >> n;
    int arr[n];
    vector<int> negs;
    bool changed = 1;

    for( int i = 0; i < n; ++i )
    {
        cin >> d;
        if( d > 0 )
        {
            ++pos;
            arr[i] = 1;
            continue;
        }
        if( changed )
            changed = 0;
        ++neg;
        arr[i] = -1;
        negs.push_back(i);       
    }

    if( changed ) //All positive
    {
        cout << n/2 * (n + 1);
        return 0;
    }
    
    

}