#include<iostream>
#include<string>
using namespace std;

int main()
{

	string name = "우경";
	cout << "이름을 입력하세요: " << name << endl;
	

	string birth; //띄어쓰기를 위해 getline으로 받았다. 1월 18일을 집어넣으면 내 생일이 나온다. 
	cout << "생일을 입력하세요: ";
	getline(cin, birth);

	int age = 20;
	cout << "나이를 입력하세요: " << age << endl;
	

	char major[100] = "자율전공학부";
	cout << "소속 학과를 입력하세요: " << major << endl;
	

	cout << "===========================================================" << endl;
	cout << "<회원정보>\n";
	cout << "이름: " << name << endl;
	cout << "생일: " << birth << endl;
	cout << "나이: " << age << endl;
	cout << "소속 학과: " << major << endl;

}