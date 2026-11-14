#include <iostream>
using namespace std;

int main() {
    float N, prod=1;
    cin >> N;

    for(int i=1; i<=10; i++){
        prod *=i;
        if(prod >=N){
            cout << i;
            break;
        }

    }
    return 0;
}