#include <iostream>
using namespace std;

int main() {
    int N, cnt=0;
    cin >> N;

    int quo = N;


    for(int i=1; i<=5000; i++){
        // cout << quo;
        quo = quo/i;
        cnt +=1; //전의 루프에서 if조건을 달성하지 않았다는 것은
        //일단 몫이 1 초과로, 한 번 더 나눗셈을 할 수 있다는 뜻.
        //그래서 cnt +=1을 if 조건문 앞에 나둬야 한다.
        // cout << "/" << i << "=" << quo<< endl;
        if(quo<=1){
            break;
        }
    }
    cout << cnt << endl;
    //나눗셈을 "진행한" 총 횟수. 그러므로 몫이 이미 '0'이어도
    //나눠봐야
    return 0;
}