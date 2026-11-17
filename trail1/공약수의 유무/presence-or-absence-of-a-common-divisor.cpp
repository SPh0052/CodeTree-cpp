#include <iostream>
using namespace std;

int main() {
    int A, B;
    bool satisfied = false;
    cin >> A >> B;

    for(int i=A; i<=B; i++){
        if(1920%i==0 && 2880%i==0){
            satisfied=true;
        }
    }

    if(satisfied==true){
        cout << 1;
    }
    else{
        cout << 0;
    }
    return 0;
}