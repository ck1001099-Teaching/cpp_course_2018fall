#include <iostream>
using namespace std;

int main(){
	char name[6];
	name[0] = 'J';
	name[1] = 'a';
	name[2] = 'm';
	name[3] = 'e';
	name[4] = 's';
	name[5] = '\0';
	cout << name << endl;

	name[2] = '\0';
	cout << name << endl;
	return 0;
}

