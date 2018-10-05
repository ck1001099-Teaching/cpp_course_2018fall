//列出1~100中的所有質數
#include <iostream>
using namespace std;

int main(){
	
	for (int i = 2 ; i <= 100 ; i++){
		bool a = true;
		// 2 ~ i-1
		for (int j = 2 ; j <= i-1 ; j++){
			if (i%j == 0){
				a = false;
			}
		}

		if (a){
			cout << i << endl;
		}
	}

	return 0;
}