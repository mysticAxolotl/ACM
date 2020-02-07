#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <functional>
#include <map>

using namespace std;

int main()
{
    int test;
    string out;
    cin >> test;

    for( int i = 0; i < test; ++i )
    {
        int size;
        cin >> size;
        map<int, int> nums;
        for( int j = 0, hold; j < size; ++j )
        {
            cin >> hold;
            if( nums[hold] )
                nums[hold]++;
            else
                nums[hold] = 1;
        }
        --size;
        int max = 0;
        for( auto i = nums.begin(); i != nums.end() ;)
        {
            if( i->first >= size && max < size )
                max = size;
            if( --i->second == 0 )
                ++i;          
            --size;      
        }
        out += to_string( max ) + '\n';
    }
    cout << out;
    return 0;
}