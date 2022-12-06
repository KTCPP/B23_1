#include <iostream>
#include <string>

using namespace std;
int main() {

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

	char ccc[] =  "klo";
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
		return 0;
}