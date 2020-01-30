#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace::std;

int main()
{
    int tests, fridge, chains;
    cin >> tests;
    string out = "";
    vector<int> weights;
    for( int i = 0; i < tests; ++i, fridge = chains = 0 )
    {
        cin >> fridge >> chains;

        for( int j = 0, hold; j < chains; ++j ){
            cin >> hold;
            weights.push_back(hold);
        }

        if( chains < fridge || fridge == 2){
            out += "-1\n";
        }   
        else{
            long long total = 0;
            for( int j = 0; j < chains; ++j )
                total += weights[j];
            total *= 2;
            out += to_string( total ) + '\n';
            out += "1 " + to_string(chains) + '\n';
            for( int j = 0; j < chains - 1; ++j )
                out += to_string( j + 1 ) + ' ' + to_string( j + 2 ) + '\n';
        }
        weights.clear();
    }
    cout << out;
    return 0;
    // 3 4 4 1 1 1 1 3 1 1 2 3 3 3 1 2 3
    // 3 4 4 1 1 1 1 3 3 1 2 3 4 4 1 1 1 1
    // 2 3 1 1 2 3 3 3 1 2 3
}