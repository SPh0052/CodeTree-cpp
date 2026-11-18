#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    bool satisfied = true;

    for(int i=2; i<N; i++){
        if(N%i==0){
            satisfied = false;
        }
    }

    if(satisfied == true){
        cout << "P";
    }
    else{
        cout << "C";
    }
    return 0;
}