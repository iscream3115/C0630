#include <iostream>
using namespace std;

int main()
{
	int a = 10;

	// :: 접근 지정 연산자
	std::cout << a <<endl;

	float f;

	cout << "실수 입력: ";
	cin >> f;
	cout << f << "\n";

	long long LL;
	double d;
	char c;

	cout << "롱롱 입력: ";
	cin >> LL;
	cout << "더블 입력: ";
	cin >> d;
	cout << "챠 입력: ";
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