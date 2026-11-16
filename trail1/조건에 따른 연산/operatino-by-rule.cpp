#include <iostream>
using namespace std;

int main() {
    int N, cnt=0;
    cin >> N;

    while(N<1000){
        // cout << N << endl;
        if(N%2==0){
            N=N*3+1;
        }
        else{
            N=N*2+2;
        }
        cnt +=1;
    }
    cout << cnt;
    return 0;
}