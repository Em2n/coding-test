#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	string a;
	while (true)
	{
		getline(cin,a);
		if (a == "")
			break;
		cout << a << endl;
	}

}


