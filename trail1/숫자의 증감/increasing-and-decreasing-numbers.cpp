#include <iostream>
using namespace std;

int main() {
    char C;
    int N;

    cin >> C >> N;

    if(C == 'A'){
        for(int i=1; i<N+1; i++){
            cout << i << " ";
        }
    }

    else if(C == 'D'){
        for(int i=N; i>0; i--){
            cout << i << " ";
        }
    }
    return 0;
}