#include <iostream>
using namespace std;

int main(){
	//宣告3個int指標，並動態配置記憶體，初始值分別為400, 200
	//, 100。
	int *a = new int(400);
	int *b, *c;
	b = new int;
	*b = 200;
	c = new int(100);
	//印出3個int指標指向的記憶體位址與值。
	cout << a << " " << b << " " << c << endl;
	cout << *a << " " << *b << " " << *c << endl;
	//宣告2個float指標，並動態配置記憶體，初始值分別為3.14,
	// 6.28。
	float *e = new float(3.14);
	float *f;
	f = new float(6.28);
	//印出2個float指標指向的記憶體位址與值。
	cout << e << " " << f << endl;
	cout << *e << " " << *f << endl;
	//釋放3個int指標。
	delete a;
	delete b;
	delete c;
	//重新配置動態記憶體給3個int指標，初始值分別為10, 50,
	// 100。
	a = new int(10);
	b = new int(50);
	c = new int(100);
	//印出3個int指標指向的記憶體位址與值。
	cout << a << " " << b << " " << c << endl;
	cout << *a << " " << *b << " " << *c << endl;
	//釋放2個float指標。
	delete e;
	delete f;
	//釋放3個int指標。
	delete a;
	delete b;
	delete c;
	return 0;
}