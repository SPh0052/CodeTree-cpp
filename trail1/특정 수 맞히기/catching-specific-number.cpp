#include <iostream>
using namespace std;

int main() {
    int N;

    while(1){
        cin >> N;
        if(N<25){
            cout << "Higher"<< endl;
        }

        else if(N>25){
            cout << "Lower"<< endl;
        }

        else{
            cout << "Good"<< endl;
            break;
        }
    }
    return 0;
}