#include <iostream>
using namespace std;

int main() {
    int A, N, i;

    cin >> A >> N;

    for(i=0; i<N; i++){
        A+=N;
        cout << A << "\n";
    }


    return 0;
}