#include <iostream>
using namespace std;

void swap(int& a, int& b);

int main()
{
	int a = 10;
	int b = 20;

	//a와 ref는 이름만 다를뿐 사실상 같다 (ref는 a의 별명 수준)
	int& ref = a;
	// 포인터 p는 a의 주소를 가지고 있다. 그러나 p 자체의 주소값도 여전히 가지고 있어서 
	//p와 a는 완전히 같지 않다.
	int* p = &a;

	swap(a, b);

	cout << a << " , " << b << endl;


	return 0;
}

//매개변수에 레퍼런스를 넣으면 포인터처럼 스왑이 가능
void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}