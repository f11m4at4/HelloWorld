#include <iostream>
using namespace std;

int main()
{
	// 1. number1 �� ���� 205 �� �����.
	int number1 = 205;
	// 2. ���� number1 �� 205 �̸�
	if(number1 == 205)
	{
		// 3. "¯ ������!!!!" ���
		cout << "¯ ������!!!!" << endl;
	}
	// �׷��� �ʰ� ���� 200 �̸�
	else if (number1 == 200)
	{
		// �Ʊ��~~ ��� ���
		cout << "�Ʊ��~~" << endl;
	}
	// 	�׷��� �ʰ� ���� 190 �̶��
	else if (number1 == 190)
	{
		// �� ���̳���~~ ��� ���
		cout << "�� ���̳���~~" << endl;
	}
	// 4. �׷��� ������ 
	else
	{
		// 5. "���~" ��� ���
		cout << "���~" << endl;
	}

	return 0;
}

