#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace::std;

int main()
{
    int num;
    cin >> num;
    vector<int> map[ num + 1 ];
    int triples[ num - 2 ][3];
    int final[num];
    for( int i = 0; i < num - 2; ++i ){
        for( int j = 0; j < 3; ++j ){
            cin >> triples[i][j];
            map[ triples[i][j] ].push_back( i );
        }
    }

    std::pair<int, int> end;

    for( int i = 1; i < num + 1; ++i ){
        if( map[i].size() == 1 ){
            end = std::make_pair( *map[i].begin(), i );
            break;
        }
    }




}