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

	//C++ ���ڿ� ��ġ��
	string str3 = str1 +" " + str2;
	cout << str3 << endl;

	cout << "================" << endl;

	//C ��Ÿ�Ϸ� �ٲٱ�
	const char* cStr = str3.c_str();
	cout << str3.size() << endl;

	cout << "================" << endl;

	//���ڿ� �ڿ� �����̱� -> strcat ����
	str3.push_back('a');
	cout << str3 << endl;

	cout << "================" << endl;

	//C��Ÿ�� ���ڿ��� �����ϰ� �ε����� ���� ����
	cout << cStr[0] << endl;
	cout << str3[0] << endl;

	cout << "================" << endl;

	//���ڿ� ���� �ڿ� �ִ� ���� ����
	str3.pop_back();
	cout << str3 << endl;

	cout << "================" << endl;

	//���ڿ� �ڸ���

	//���ڿ� �ε��� 0���� 5���� �����´�.
	string str4 = str3.substr(0, 5);
	cout << str4 << endl;

	cout << "================" << endl;

	// ���� 1. sgaEdu�� �߶� ����ؿ���
	string sgaStr = "www.sgaEdu.co.kr";

	//���� 2. ������,100,10 �� ������ 100 10�� �߶� ����ؿ���
	//,�� �������� �ٲٴ� �� �ƴ϶�, substr�� �߶� ����ؿ���
	//���߿� ������ ����(csv����)�� ���� �� ������ �о�� �ϹǷ� �߿��� �κ��̴�.
	string csvStr = "asdasf,afsasf,fdafad,gfdge";
	for (int i = 0; i < csvStr.size(); i++)
	{
		if (csvStr[i] == ',')
		{
			//�� �κ� ä������
		}
	}



	return 0;
}