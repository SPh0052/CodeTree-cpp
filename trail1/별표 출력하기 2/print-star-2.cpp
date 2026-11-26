#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i=1; i<=N; i++){
        for(int j=1; j<=N-i+1; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
for(int j=1; j<=i; j--){
    cout << "*";
}

: 이 말은, j를 i와 같아질 때까지 반복.
*/