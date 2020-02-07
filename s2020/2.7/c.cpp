#include <iostream>

using namespace std;

int main()
{
    int tests, leng, place, con;
    cin >> tests;
    for(; tests; --tests )
    {
        cin >> leng >> place >> con;
        int arr[ leng ], l = 0, r = leng - 1;
        for(int i = 0; leng; --leng )
            cin >> arr[ i++ ];
        place -= con;
        for(; con; --con )
            arr[ l ] < arr[ r ] ? ++l : -- r;
        for(; place; --place )
            arr[ l ]  > arr[ r ] ? ++l : -- r;
        
        cout << ( arr[ l ] < arr[ r ] ? arr[ l ] : arr[ r ] ) << '\n';
    }
}