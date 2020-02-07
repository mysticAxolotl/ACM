#include <iostream>
using namespace::std;

int main()
{
    double people, sum = 0;
    cin >> people;   
    for(; people; --people )
        sum += 1/people;
    cout << sum << '\n';
}