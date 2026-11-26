#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    //일단 행을 만들고,
    for(int i=1; i<=N; i++){
        //그 행에 어떻게 출력할지 반복문으로 만듦
        //별 하나를 i개수만큼 반복출력해야한다.
        for(int j=1; j<=i; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}