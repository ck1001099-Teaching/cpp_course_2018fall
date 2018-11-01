//寫一C++程式，將字串反向後回存並輸出。
//定義一個reverse函數，接收呼叫敘述傳遞的字串指標參數，然後
//將字串頭尾對調後返回呼叫函數。
//在main函數中，定義一個字串指標，由鍵盤輸入一字串並存入指標位
//址，然後呼叫並傳遞字串給reverse函數，最後輸出反向後的字串。
#include <iostream>
using namespace std;

void reverse(char*);

int main(){
	char *str = new char[20];
	cin >> str;
	cout << "改變前：" << str << endl;
	reverse(str);
	cout << "改變後：" << str << endl;
	delete[] str;
	return 0;
}

void reverse(char* str){
	char* tmp = new char[20];
	int i = 0;
	while (*(str+i) != '\0'){
		*(tmp+i) = *(str+i);
		i = i + 1;
	}
	int j = 0;
	for (int j = 0 ; j < i ; j++){
		*(str+j) = *(tmp+i-j-1);
	}
	delete[] tmp;
}