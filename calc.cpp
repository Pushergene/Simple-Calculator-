#include <iostream>
using namespace std;
int main() {
int a;
int b;
char c;
cout << "Geben Sie bitte die Zahlen unten ein!" << endl;
cin >> a >> c >> b;
switch (c) {
case '+':
cout << "Das Ergebnis von " << a << c << b << " lautet " << a+b;
break;
case '-':
cout << "Das Ergebnis von " << a << c << b << " lautet " << a-b;
break;
case '*':
cout << "Das Ergebnis von " << a << c << b << " lautet " << a*b;
break;
case '/':
cout << "Das Ergebnis von " << a << c << b << " lautet " << a/b;
break;
case '%':
cout << "Das Ergebnis von " << a << c << b << " lautet " << a%b;
break;
default:
cout << "Da hat etwas nicht geklappt. " << endl;
}
return 0;
}
