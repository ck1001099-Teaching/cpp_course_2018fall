#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Object{
public:
	/* implement here */
private:	
	string name;
	int index;
	/* implement here */
};

int main(){
	Object sphere1("sphere1");
	Object cube1("cube1");
	Object sphere2("sphere2");
	Object cube2("cube2");

	sphere1.info();
	~sphere1();

	cube1.info();

	return 0;
}