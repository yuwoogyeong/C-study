#include<iostream>
#include<string>
using namespace std;

int main()
{

	string name ; // '���'�� ����� �ȴ�. 
	cout << "�̸��� �Է��ϼ���: " ;
	getline(cin, name);

	string birth; //���⸦ ���� getline���� �޾Ҵ�. 1�� 18���� ��������� �� ������ ���´�. 
	cout << "������ �Է��ϼ���: ";
	getline(cin, birth);

	int age ; //20�� ������ 20�� ����� �ȴ�. 
	cout << "���̸� �Է��ϼ���: ";
	cin >> age;
	getchar();
	string major ; // ���������кθ� ������ ���������кΰ� ����� �Ǵ� ���� �� �� �ִ�. 
	cout << "�Ҽ� �а��� �Է��ϼ���: ";
	getline(cin, major);

	cout << "===========================================================" << endl;
	cout << "<ȸ������>\n";
	cout << "�̸�: " << name << endl;
	cout << "����: " << birth << endl;
	cout << "����: " << age << endl;
	cout << "�Ҽ� �а�: " << major << endl;
	
}