#include <iostream>
using namespace std;
char f(void) {
char var1;
cout << "Input char"<< endl;
cin >> var1;
double var2;
cout << "Input double"<< endl;
cin >> var2;
cout << var1 + var2 << endl; 
return 0;
}
int main() {
f();
return 0;}
