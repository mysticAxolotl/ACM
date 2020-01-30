#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    long long results = 1;
    std::string word, u = "uuu", n = "nnn" ;
    auto ui = u.begin(), ni = n.begin();
    cin >> word;
    for( auto i = word.begin(); i != word.end(); ++i)
    {
        if( *i == 'm'  || *i == 'w' )
        {
            std::cout << "0\n";
            return 0;
        }

        if( std::memcmp( i, ui, 3) == 0 || std::memcmp( i, ni, 3 ) == 0 )
        {
            results *= 3;
            i += 3;
            continue;
        }

        if( std::memcmp( i, ui, 2 ) == 0 || std::memcmp( i, ni, 2 ) == 0 )
        {
            results *= 2;
            i += 2;
        }
    }
    std::cout << results % 1000000007;
    return 0;
}