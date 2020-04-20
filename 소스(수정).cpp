#include<iostream>
#include<string>
using namespace std;

int main()
{

	string name ; // '우경'이 출력이 된다. 
	cout << "이름을 입력하세요: " ;
	getline(cin, name);

	string birth; //띄어쓰기를 위해 getline으로 받았다. 1월 18일을 집어넣으면 내 생일이 나온다. 
	cout << "생일을 입력하세요: ";
	getline(cin, birth);

	int age ; //20을 넣으면 20이 출력이 된다. 
	cout << "나이를 입력하세요: ";
	cin >> age;
	getchar();
	string major ; // 자율전공학부를 넣으면 자율전공학부가 출력이 되는 것을 알 수 있다. 
	cout << "소속 학과를 입력하세요: ";
	getline(cin, major);

	cout << "===========================================================" << endl;
	cout << "<회원정보>\n";
	cout << "이름: " << name << endl;
	cout << "생일: " << birth << endl;
	cout << "나이: " << age << endl;
	cout << "소속 학과: " << major << endl;
	
}