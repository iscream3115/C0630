#include <iostream>
using namespace std;

int main()
{
	int a = 10;

	// :: ���� ���� ������
	std::cout << a <<endl;

	float f;

	cout << "�Ǽ� �Է�: ";
	cin >> f;
	cout << f << "\n";

	long long LL;
	double d;
	char c;

	cout << "�շ� �Է�: ";
	cin >> LL;
	cout << "���� �Է�: ";
	cin >> d;
	cout << "í �Է�: ";
	cin >> c;

	cout << LL << "," << d << "," << c << endl;

	//C
	const char cStr[100] = "Hello";
	cout << cStr << endl;

	//C++
	string str;
	cin >> str;
	cout << str << endl;




	return 0;
}