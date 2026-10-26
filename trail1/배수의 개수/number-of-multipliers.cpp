#include <iostream>
using namespace std;

int main() {
    int k;
    int cnt_3 = 0;
    int cnt_5 = 0;


    for(int i=0; i<10; i++){
        cin >> k;
        if(k%3==0){
            cnt_3+=1;
        }

        if(k%5==0){
            cnt_5+=1;
        }
    }

    cout << cnt_3 << " " << cnt_5;
    return 0;
}