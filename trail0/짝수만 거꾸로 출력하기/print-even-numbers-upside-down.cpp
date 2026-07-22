#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int array[N];

    for(int i=0; i<N; i++){
        cin >> array[i];
    }

    //다 입력받음

    for(int i=N-1; i>=0; i--){
        if(array[i]%2==0){
            cout << array[i] << " ";
        }
    }
    return 0;
}