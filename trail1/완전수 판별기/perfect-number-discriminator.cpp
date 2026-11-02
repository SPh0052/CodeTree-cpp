#include <iostream>
using namespace std;

int main() {
    int N;
    int sum = 0;

    cin >>N;

    for(int i=1; i<N; i++){
        if(N%i==0){
            sum +=i;
        }
    }


    if(sum == N){
        cout << 'P';
    }

    else{
        cout << "N";
    }

    //완전 수 : 자기 자신을 제외한 약수의 합이 자신이 되는 수
    return 0;
}