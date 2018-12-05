#include <iostream>
#include <string>
#include <vector>
using namespace std;

//定義一個static private資料成員count，記錄已經建立多少個物體。
//定義一個static private資料成員objList，用於儲存被建立的物體的指標。
//定義建立者(constructor)函數，初始化name，將count值加1，並將指標存入
//objList。
//定義破壞者(destructor)函數，將count值減1，並根據編號從objList中移除指標。
//定義一個static public成員函數info，輸出總物體數目以及各物體編號及名稱。

class Object{
public:
	/* implement here */
	Object(string);
	~Object();
	string GetName(){ return name; }
	int GetIndex(){ return index; }
	void SetIndex(int index){ this->index = index; }
	static void info();
private:	
	string name;
	int index;
	/* implement here */
	static int count;
	static vector<Object*> objList;
};

int Object::count = 0;
vector<Object*> Object::objList;

int main(){
	Object sphere1("sphere1");
	if (true){
		Object cube1("cube1");
		Object sphere2("sphere2");
		sphere1.info();
	}
	Object cube2("cube2");

	sphere1.info();
	return 0;
}

Object::Object(string name){
	this->name = name;
	count = count + 1;
	this->index = objList.size();
	objList.push_back(this);
}

Object::~Object(){
	count = count - 1;
	objList.erase(objList.begin() + index);
	for (int i = 0 ; i < objList.size() ; i++){
		objList[i]->SetIndex(i);
	}
}

void Object::info(){
	cout << "總物體數目：" << count << endl;
	for (int i = 0 ; i < objList.size(); i++){
		cout << (*objList[i]).GetName() << " " << objList[i]->GetIndex() << endl;
	}
}









