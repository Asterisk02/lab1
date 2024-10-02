#include "iostream"
#include "string"
#include <fstream>
using namespace std;
int main(void) {
	string type1, type2, operation;
	cout << "Input type1" << endl;
	cin >> type1;
	cout << "Input type2" << endl;
	cin >> type2;
	cout << "Input operation" << endl;
	cin >> operation;
	cout << "File is done." << endl;
	ofstream fout("func_1.cpp");
	fout << "#include <iostream>" << endl;
	fout << "using namespace std;" << endl;
	
	fout << type1 <<" f(void) {" << endl;
	fout << type1 << " var1;" << endl;
	fout << "cout << \"Input " << type1 << "\"<< endl;" << endl;
	fout << "cin >> var1;" << endl;
	fout << type2 << " var2;" << endl;
	fout << "cout << \"Input " << type2 << "\"<< endl;" << endl;
	fout << "cin >> var2;" << endl;
	fout << "cout << var1 "<< operation<<" var2 << endl; " << endl;
	fout << "return 0;" << endl;
	fout << "}" << endl;

	fout << "int main() {" << endl;
	fout << "f();" << endl;
	fout << "return 0;}" << endl;
	
	fout.close();
	return 0;
}
