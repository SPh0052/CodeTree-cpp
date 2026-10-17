#include <iostream>
using namespace std;

int main() {
    int A, N;

    cin >> A >> N;

    int num = A;

    for(int i=0; i<N; i++){
        num += N;
        cout << num << endl;
    }
    return 0;
}