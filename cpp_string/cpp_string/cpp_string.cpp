#include <iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	string address("광주광산");
	string copyaddress(address);

	char text[] = { 'l', 'o', 'v', 'e', '\0' }; //c-string
	string tile(text); //c-string(char []배열)으로부터 스트링 객체 생성
	cout << str << " " << address << " " << copyaddress << " " << tile << endl;

	string* p = new string("C++");
	cout << *p;
	p->append("Great!");
	cout << *p;
	delete p;

	string name;
	getline(cin, name, '\n'); // \n을 만날때까지 키보드(cin)로부터 문다열을 읽어 name에 저장.

	string a("I love c++");
	a.insert(2, "realy "); //a= I realy love c++
	a.replace(2, 11, "study"); // a= "I study c++"
	a.erase(0, 7); // a= "c++"
	a.clear(); //a= ""

	string b = "I love C++";
	string c = b.substr(2, 4); //c= "love"

	string e = "I love love c++";
	int index = e.find("love");// e에서 "love"검색. 인덱스 2 리턴
	index = e.find("love", index + 1); //e의 인덱스 3부터 "love"검색.인덱스 7 리턴
	index = e.find("c#"); //e에서 "c#"을 발견할수 없다. -1 리턴
	
	string f = "jaeeun";
	char ch1 = f.at(0); //문자열 f의 인덱스 0에있는 문자리턴. ch1= "j"
	char ch2 = f[0]; //위와 동일.
	f[0] = 'c'; //f = "caeeun". at과 []의 차이점은 at은 문자열 수정불가. 오직 읽기모드

	string year = "2023";
	int n = stoi(year); //n= 2023. 문자열 -> 숫자

}