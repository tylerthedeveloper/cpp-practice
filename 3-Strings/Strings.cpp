#include <iostream>

using namespace std;

int main (){
	
string first, second;
cout << "please enter 2 strings" << endl;
cin >> first >> second;
int firLen = first.length(), secLen = second.length();
if (firLen > secLen)
	cout << first << "is longer than " << second << endl;
else if (firLen == secLen)
	cout << "They are the same length" << endl;
else
	cout << second << "is longer than " << first << endl;


}
