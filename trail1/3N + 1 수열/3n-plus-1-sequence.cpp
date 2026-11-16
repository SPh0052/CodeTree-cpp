#include <iostream>
using namespace std;

int main() {
    int N, cnt=0;
    cin >> N;
    int num = N;

    while(num!=1){
        // cout << num << " " << cnt << endl;
        if(num%2==0){
            num/=2;

        }

        else{
            num = num*3+1;

        }
        cnt+=1;
    }

    cout << cnt;
    return 0;
}