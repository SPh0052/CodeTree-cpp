#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int array[N];

    for(int i=0; i<N; i++){
        cin >> array[i];
    }

    for(int i=0; i<N; i++){
        cout << array[i]*array[i] << " ";
    }
    return 0;
}