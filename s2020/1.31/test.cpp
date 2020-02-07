#include <iostream>
using namespace::std;

int main(){
    char arr[5] = { 'a', 'b', 'c', 'd', 'e' };

    for( char * ptr = &arr[0]; ptr != &arr[4] + 1; ++ptr )
    {
        cout << *ptr << ' ';
    }
    return 0;
}