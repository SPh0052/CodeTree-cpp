#include <iostream>
using namespace std;

int main() {
    int N;
    int cnt_year=0;

    cin >> N;

    for(int i=1; i<=N; i++){
        if(i%4==0){
            cnt_year++;
        }

        if(i%100==0 && i%400!=0){
            cnt_year--;
        }
    }

    cout << cnt_year;
    return 0;
}