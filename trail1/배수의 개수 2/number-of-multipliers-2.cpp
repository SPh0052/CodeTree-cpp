#include <iostream>
using namespace std;

int main() {
    int k;
    int cnt = 0;
    for(int i=0; i<10; i++){
        cin >> k;
        if(k%2==1){
            cnt +=1;
        }

    }
    cout << cnt;
    return 0;
}