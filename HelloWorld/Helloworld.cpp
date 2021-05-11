#include <iostream>
using namespace std;

int main()
{
	// 1. number1 의 값은 205d 로 만든다.
	int number1 = 200;
	// 2. 만약 number1 이 205 이면
	if(number1 == 205)
	{
		// 3. "짱 멋지네!!!!" 출력
		cout << "짱 멋지네!!!!" << endl;
	}
	// 그렇지 않고 만약 200 이면
	else if (number1 != 205)
	{
		// 아까비~~ 라고 출력
		cout << "아니네!" << endl;
	}
	

	return 0;
}

