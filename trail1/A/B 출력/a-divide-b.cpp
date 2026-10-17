#include <iostream>
#include <string>
using namespace std;

/* 여기서 오른쪽은 int인데, string에 +=로 더하면 숫자가 문자로 자동 변환되지 않아.
앞서 알려준 to_string()을 활용해 봐.*/

int main() {
    int A, B, num;

    cin >> A >> B;

    num = A%B;
    cout << A/B << ".";

    // i=0 : (A*10**i)//B = 0
    // i = 1 (A-전의것)*10//B = 6

    for(int i=0; i<20; i++){
        cout << (num*10)/B;
        num = (num*10)%B;
    }




    return 0;
}