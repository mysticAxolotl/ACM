#include <iostream>
using namespace std;

int main()
{
    int bags[4];
    for( int i = 0; i < 4; ++i )
        cin >> bags[i];
    int combos[2][7] = {
        { 
            bags[0],            //a
            bags[1],            //b
            bags[2],            //c
            bags[3],            //d
            bags[0] + bags[1],  //ab
            bags[0] + bags[2],  //ac
            bags[0] + bags[3]   //ad
        },
        {
            bags[1] + bags[2] + bags[3],    //bcd
            bags[0] + bags[2] + bags[3],    //acd
            bags[0] + bags[1] + bags[3],    //abd
            bags[0] + bags[1] + bags[2],    //abc
            bags[2] + bags[3],              //cd
            bags[1] + bags[3],              //bd
            bags[1] + bags[2]               //bc
        }
    };
    for( int i = 0; i < 7; ++i )
    {
        if( combos[0][i] == combos[1][i] )
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}