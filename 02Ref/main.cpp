#include <iostream>
using namespace std;

void swap(int& a, int& b);

int main()
{
	int a = 10;
	int b = 20;

	//a�� ref�� �̸��� �ٸ��� ��ǻ� ���� (ref�� a�� ���� ����)
	int& ref = a;
	// ������ p�� a�� �ּҸ� ������ �ִ�. �׷��� p ��ü�� �ּҰ��� ������ ������ �־ 
	//p�� a�� ������ ���� �ʴ�.
	int* p = &a;

	swap(a, b);

	cout << a << " , " << b << endl;


	return 0;
}

//�Ű������� ���۷����� ������ ������ó�� ������ ����
void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}