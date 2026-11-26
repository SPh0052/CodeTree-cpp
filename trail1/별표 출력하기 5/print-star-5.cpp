#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    //행 만들고
    for(int i=1; i<=N; i++){
        //그 행의 병뭉치 몇 개 반복되는지
        for(int j=1; j<=N-i+1; j++){
            //그 별뭉치에 별이 몇 개 들었는지
            for(int k=1; k<=N-i+1; k++){
                cout << "*";
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}