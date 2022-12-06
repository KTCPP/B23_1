#include <iostream>
#include <string>
#include "main.h"

using namespace std;
int main(int argc, const char* argv[]) {
	//main1();
	//main2(argc, argv);
	/*
	int c = 3;
	const char* v[3];
	v[0] = "programm.exe";
	v[1] = "123";
	v[2] = "111";
	*/
	//main2(c, v);


	int start = -100;
	int end = 100;
	for (int i = start; i > end; i++) {
		cout << i << endl;
	}

	int i = start;
	while (true) {
		if (i > end) exit;
		cout << i << endl;
		i++; // ++i
	}










	//abort();
		return 0;
}
void main2(int argc, const char* argv[]) {
	cout << "Aufgabe 2.1 " << endl;
int a;
int b;
	bool hat_zwei_argumente = argc == 3;
        if (hat_zwei_argumente){
            a = atoi(argv[1]);
            b = atoi(argv[2]);
            cout << "Es wurden 2 Argumente uebergeben!" << endl;
        }else{
            a = 5;
            b = 6;
            cout << "Es wurden nicht genau zwei Argumente uebergeben" << endl;

        }
		cout << "Die Zahlen a und b sind: " << a << " und " << b << endl;
		char cchar = '5';
		int c = (int)cchar - (int)'0';
		cout << c << endl;
		int f = int(cchar) - int('0');
		cout << f << endl;
		int g = static_cast<int>(cchar) - static_cast<int>('0');
		cout << g << endl;
		char arr[] = "5";
		int d = atoi(arr);
		cout << d << endl;
		string str = "5";
		int e = stoi(str);
		cout << e << endl;
}

void main1()
{
	cout << "Aufgabe 1.1" << endl;
	int i;
	i = 10;
	cout << "Die Ganzzahl ist: " << i << endl;
	cout << endl;

	cout << "Aufgabe 1.2" << endl;
	double d;
	float f;
	d = 33.3;
	cout << "Die double-Zahl ist: " << d << endl;

	cout << "Aufgabe 1.3" << endl;
	//char ccc[4];
	//ccc[0] = 'o';
	char cc = 'l';
	string c = "k";
	cout << c << endl;
	cout << cc << endl;
	//cout << ccc[0] << endl;

	c = "klo";
	cout << c << endl;

	char ccc[] = "klo";
	char broken[] = { 'k','l','a', '\0' };
	cout << broken << endl;
	/*ccc[1] =  'l';
	ccc[2] =  'o';

	char ch[4] = "klo";
	string sss(1,ch[3]);
	//int toi = stoi(sss);
	cout << sss << endl;*/

	cout << ccc[0] << ccc[1] << ccc[2] << endl;
	cout << "test: " << endl;
	//cout << ccc[0], ccc[1], ccc[2] << endl;
	std::string input = "dataHwaste";
	char arr[] = "qwertz";
	std::string asdf = std::string("asdfghjkl", 4);
	std::string ghkjl("asdfghjkl", 4);
	std::string test(input, 4);
	std::string test2(arr, 4);
	cout << asdf << endl;
	cout << ghkjl << endl;
	cout << test << endl;
	cout << test2 << endl;
	cout << string(4, 'a') << endl;
}
