#include <iostream>
using namespace std;

int main() {
    bool satisfied = true;
    int N;
    
    for(int i=0; i<5; i++){
        cin >> N;

        if(N%3!=0){
            satisfied = false;
            break;
        }
    }

    if(satisfied == true){
        cout << 1;
    }
    else{
        cout << 0;
    }
    return 0;
}