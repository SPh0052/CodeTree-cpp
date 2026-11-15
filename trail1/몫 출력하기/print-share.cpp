#include <iostream>
using namespace std;

int main() {
    int N,cnt=0;

    while(1){
        cin >> N;
        if(N%2==0){
            cout << N/2 << endl;
            cnt +=1;
            if(cnt>=3){
                break;
            }
        }
    }
    return 0;
}