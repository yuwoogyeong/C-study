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
	four = (double)First/ Second;  //First를 double로 명시적형변환을 해주면 3.0/5.0으로 바뀐다.
	//그리고four가 float의 값을 가지니 따라서 값은 0.6이 나올것이다. 

	cout << "=========계산 결과=========\n";
	cout << First << "+" << Second << "=" << one << endl;
	cout << First << "-" << Second << "=" << two << endl;
	cout << First << "*" << Second << "=" << three << endl;
	cout << First << "/" << Second << "=" << four << endl;
}