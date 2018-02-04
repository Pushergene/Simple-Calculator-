#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
int a;
int b;
char c;
cout << "Gib deine Zahlen ein!" << endl;
cin >> a;
cin >> b;
cout << "Die Rechenformel, bitte." << endl;
cin >> c;
switch (c) {
case '+':
cout << a << " + " << b << " ergeben " <<  a+b << endl;
break;
case '-':
cout << a << "-" << b << " ergeben " << a-b << endl;
break;
}
return 0;
}
