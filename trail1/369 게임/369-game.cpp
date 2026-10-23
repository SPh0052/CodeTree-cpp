#include <iostream>
using namespace std;

int main() {
    int N;

    cin >> N;

    for(int i=1; i<=N; i++){
        if(i%3==0){
            cout << 0 << " ";
        }
        //10의 자리에 3,6,9 있는 경우
        else if(i%10==3 || i%10==6 || i%10==9){
            cout << 0 << " ";
        }
        //1의 자리에 3,6,9 있는 경우
        else if(i/10==3 || i/10==6 || i/10==9){
            cout << 0 << " ";
        }
        else{
            cout << i << " ";
        }
    }

    return 0;
}