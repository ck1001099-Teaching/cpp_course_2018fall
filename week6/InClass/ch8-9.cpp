//寫一C++程式，將字串中的小寫轉成大寫。
//定義一個toUpper函數，接收呼叫敘述傳遞的字串指標參數，然後
//將字串中所有的小寫轉成大寫，其餘的字元不變，最後輸出轉換後
//的字串。
//在main函數中，定義一個字串指標，由鍵盤輸入一字串並存入指標
//位址，然後呼叫並傳遞字串給toUpper函數。
#include <iostream>
using namespace std;

void toUpper(char*);

int main(){
	char* str = new char[20];
	cin >> str;
	toUpper(str);
	delete[] str;
	return 0;
}

void toUpper(char* str){
	int i = 0;
	while (*(str+i) != '\0'){
	//while (str[i] != '\0')
		if (*(str+i) >= 97 && *(str+i) <= 122){
		//if (*(str+i) >= 'a' && *(str+i) <= 'z'){
			*(str+i) = *(str+i) - 32;
		}
		i = i + 1;
	}
	cout << str << endl;
}