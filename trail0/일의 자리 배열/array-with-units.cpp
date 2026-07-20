#include <iostream>
using namespace std;

int main() {
    int size=10;
    int array[size];

    cin >> array[0];
    cin >> array[1];

    for(int i=2; i<size; i++){
        array[i] = array[i-2] + array[i-1];
        if(array[i]>=10){
            array[i] -= 10;
        }
    }
    
    for(int i=0; i<size; i++){
        cout << array[i] << " ";
    }
    return 0;
}