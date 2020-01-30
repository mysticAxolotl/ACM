using namespace::std;
#include <iostream>
#include <string>

int main()
{
    int mathe;

    cin >> mathe;

    int arraaA[mathe];

    for(int i = 0; i < mathe; ++i){

        cin >> arraaA[i];

    }
    
    for(int j = 0; j < mathe; ++j){

        if(arraaA[j] == 2){

            arraaA[j] = 2;

        }else{

            arraaA[j] = arraaA[j] % 2;

        }

    }

    for(int k = 0; k < mathe; ++k){

        cout << arraaA[k] << endl;
        
    }

    return 0;   
}