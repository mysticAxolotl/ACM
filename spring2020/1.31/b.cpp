// B. Array
// https://codeforces.com/contest/224/problem/B

#include <iostream>
#include <map>
#include <vector>

using namespace::std;

int main(){
    int elem, leng;
    cin >> elem >> leng;

    if( leng > elem )
    {
        cout << "-1 -1\n";
        return 0;
    }
    
    int arr[ elem ];
    map< int, int > unique;
    for( int i = 0; i < elem; ++i )
        cin >> arr[i];
    
    int i = 0;
    for( ; i < leng; ++i )
        ++unique[ arr[i] ];
    
    if( unique.size() == leng )
    {
        cout << "1 " << i << '\n';
        return 0;
    }

    int j = 0;
    for(; i < elem && unique.size() != leng; ++i )
    {
        ++unique[ arr[i] ];
        if( unique[ arr[j] ] > 1 )
        {
            --unique[ arr[j] ];
            ++j;
        }
    }
    if( unique.size() == leng )
        cout << ++j << " " << i << '\n';
    else
        cout << "-1 -1\n";   
    return 0;
}