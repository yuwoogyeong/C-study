#include<iostream>
using namespace std;

int main()
{
	int First,Second,one,two,three;
	float four;

	
	
	cout << "First number>>" ;
	cin >> First;
	cout << "Second number>>";
	cin >> Second;

	one= First + Second ;
	two = First - Second;
	three = First * Second;
	four = (double)First/ Second;  //First�� double�� ���������ȯ�� ���ָ� 3.0/5.0���� �ٲ��.
	//�׸���four�� float�� ���� ������ ���� ���� 0.6�� ���ð��̴�. 

	cout << "=========��� ���=========\n";
	cout << First << "+" << Second << "=" << one << endl;
	cout << First << "-" << Second << "=" << two << endl;
	cout << First << "*" << Second << "=" << three << endl;
	cout << First << "/" << Second << "=" << four << endl;
}