#include <iostream>
#include <string>
using namespace std;

int main()
{
	//C
	const char* cName = "name";

	//C++
	string sName = "nameC++";
	std::string str1 = "hello";
	std::string str2 = "World!";

	//C++ 문자열 합치기
	string str3 = str1 +" " + str2;
	cout << str3 << endl;

	cout << "================" << endl;

	//C 스타일로 바꾸기
	const char* cStr = str3.c_str();
	cout << str3.size() << endl;

	cout << "================" << endl;

	//문자열 뒤에 덧붙이기 -> strcat 역할
	str3.push_back('a');
	cout << str3 << endl;

	cout << "================" << endl;

	//C스타일 문자열과 동일하게 인덱스로 접근 가능
	cout << cStr[0] << endl;
	cout << str3[0] << endl;

	cout << "================" << endl;

	//문자열 가장 뒤에 있는 문자 삭제
	str3.pop_back();
	cout << str3 << endl;

	cout << "================" << endl;

	//문자열 자르기

	//문자열 인덱스 0부터 5까지 가져온다.
	string str4 = str3.substr(0, 5);
	cout << str4 << endl;

	cout << "================" << endl;

	// 과제 1. sgaEdu만 잘라 출력해오기
	string sgaStr = "www.sgaEdu.co.kr";

	//과제 2. 슬라임,100,10 를 슬라임 100 10로 잘라서 출력해오기
	//,를 공백으로 바꾸는 게 아니라, substr로 잘라서 출력해오기
	//나중에 데이터 파일(csv파일)을 읽을 떄 나눠서 읽어야 하므로 중요한 부분이다.
	string csvStr = "asdasf,afsasf,fdafad,gfdge";
	for (int i = 0; i < csvStr.size(); i++)
	{
		if (csvStr[i] == ',')
		{
			//이 부분 채워오기
		}
	}



	return 0;
}