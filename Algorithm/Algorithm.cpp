#include <iostream>

using namespace std;

// 1부터 N까지 M의 배수 합
// 입력 설명 
// 첫 줄에 자연수 N과 M이 차례대로 입력됩니다( 3<= M < N <= 1000)
// 출력 설명
// 첫 줄에 M의 배수합을 출력한다
// 입력예제 1
// 15 3
// 출력 예제
// 45

int main_()
{
    int n, m, sum = 0;
    cout << "n을 입력해 주세요" << endl;
    cout << "> " << endl;
    cin >> n;
    cout << "m을 입력해 주세요" << endl;
    cout << "> " << endl;
    cin >> m;
    for (int i = 1; i <= n; i++)
    {
        if (i % m == 0)
        {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}

