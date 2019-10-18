using namespace::std;
#include <iostream>
#include <string>
#include <map>

int main()
{
    int num;
    cin >> num;
    string fir, sec, out = "";
    string::iterator itr1, itr2;
    for( int i = 0; i < num; ++i )
    {
        cin >> fir >> sec;
        itr1 = fir.begin();
        itr2 = sec.begin();
        bool flag;
        
        for(flag = 1; *itr1 && flag; ++itr1, itr2 = sec.begin() )
        {
            for(; *itr2 && flag; ++itr2 )
            {
                if( *itr1 == *itr2 )
                    flag = 0;
            }
        }
        
        if( flag )
        {
            out += "NO\n";
            continue;
        }
        out += "YES\n";
    }
    cout << out;
}