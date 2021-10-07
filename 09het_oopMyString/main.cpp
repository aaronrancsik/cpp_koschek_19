#include <iostream>
#include "mystring.h"

using namespace std;

int main() {
	CMyString mystring("test");
	mystring.Display();

	cout << mystring.GetLength() << '\n';

	CMyString myRepeat('*', 5);
	myRepeat.Display();

	// myRepeat.GetAt(5);
	myRepeat.SetAt(2, 'x');
	myRepeat.Display();

	myRepeat.Append("sss");
	myRepeat.Display();

	myRepeat.Reverse();
	myRepeat.Display();

	mystring = myRepeat;
	mystring.Display();

	CMyString myNew = mystring;
	myNew.Display();


}
