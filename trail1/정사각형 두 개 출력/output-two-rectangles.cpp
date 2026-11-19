#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int k=0; k<2; k++){

        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                cout << "*";
            }
            cout << endl;
        }
        cout << endl;
        //i의 for문이 끝나기 전에 endl로 이미 줄 바꿈을 하므로
        //k의 for문에서는 한 번만 하면 한 줄이 비워진다.
    }
    return 0;
}