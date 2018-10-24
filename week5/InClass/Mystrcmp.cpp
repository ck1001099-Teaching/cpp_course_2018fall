//撰寫一個程式，具有一個自訂函數Mystrcmp()，利用指標傳入
//兩個字串（字元陣列），並比較是否完全相同，如果相同回傳0
//，如果不同則回傳-1。
#include <iostream>
using namespace std;

int Mystrcmp(char*, char*);

int main(){

	char a[] = "Hello!";
	char b[] = "Hello!";

	cout << Mystrcmp(a, b) << endl; //0

	char c[] = "Hello!";
	char d[] = "Hel";

	cout << Mystrcmp(c, d) << endl; //-1

	return 0;
}

int Mystrcmp(char* str1, char* str2){
	for (int i = 0 ;  ;i++){
		if (str1[i]=='\0' || str2[i]=='\0'){
			if (str1[i] != str2[i]){
				return -1;
			}
			break;
		}
		if (str1[i] != str2[i]){
			return -1;
		}

	}
	return 0;
}