#include<iostream>
#include<string>
using namespace std;

int main()
{

	string name = "���";
	cout << "�̸��� �Է��ϼ���: " << name << endl;
	

	string birth; //���⸦ ���� getline���� �޾Ҵ�. 1�� 18���� ��������� �� ������ ���´�. 
	cout << "������ �Է��ϼ���: ";
	getline(cin, birth);

	int age = 20;
	cout << "���̸� �Է��ϼ���: " << age << endl;
	

	char major[100] = "���������к�";
	cout << "�Ҽ� �а��� �Է��ϼ���: " << major << endl;
	

	cout << "===========================================================" << endl;
	cout << "<ȸ������>\n";
	cout << "�̸�: " << name << endl;
	cout << "����: " << birth << endl;
	cout << "����: " << age << endl;
	cout << "�Ҽ� �а�: " << major << endl;

}