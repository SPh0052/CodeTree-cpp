#include <iostream>
using namespace std;

int main() {
    double row, col;
    char alpha;
    for(;;){
        cin >> row >> col >> alpha;

        cout << row*col << endl;
        if(alpha =='C'){
            //'C' : char 자료형
            //"C" : 문자열, const char[2] 자료형, [2] 뜻은 방이 2개가 쓰인다는 뜻
            // C, \0 -> 이렇게 2개(문자열)
            // C, \0 -> (문자열은 '\0'이라는 특수문자 자동으로 뒤에 붙임)

            //const : 저장된 내용을 수정할 수 없다는 의미

            //"C" 배열을 비교식에서 사용할 때 포인터로 변환할 수 있다.
            // char 자료형도 비교연산과정에서 정수형으로 쓰일 수 있다.
            break;
        }
    }
    return 0;
}