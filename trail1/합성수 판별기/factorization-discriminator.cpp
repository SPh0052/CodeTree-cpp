#include <iostream>
using namespace std;

int main() {
    int N;
    bool satisfied=false;
    cin >> N;

    for(int i=2; i<N; i++){
        if(N%i==0){
            satisfied=true;
        }
    }

    if(satisfied==true){
        cout << "C";
    }
    else{
        cout << "N";
    }


    return 0;
}