#include <iostream>
#include <string>
using namespace std;

enum options{
    roc = 0,
    pap = 1,
    sci = 2 
};

int main()
{
    int tests;
    cin >> tests;
    // rock > sci, sci > paper, paper > rock
    int length, com[3], me[3], wins, loss;
    string seq, winSeq = "", out = "";
    for( int i = 0; i < tests; ++i )
    {
        cin >> length >> me[roc] >> me[pap] >> me[sci] >> seq;
        wins = 0;
        loss = 0;

        winSeq = "";
        for( auto j = seq.begin(); j != seq.end(); ++j )
        {
            switch( *j )
            {
                case 'R':
                    ++com[roc];
                    break;
                case 'P':
                    ++com[pap];
                    break;
                case 'S':  
                    ++com[sci];
            }
        }

        if( me[roc] >= com[roc] )
            ++win;
        if( me[pap] >= com[pap] )
            ++win;
        if( me[sci] >= com[sci] )
            ++win;

        if( win < 2 )
        {
            out += "NO\n";
            continue;
        }
        out += "YES\n";

        for( )
        
    }
}