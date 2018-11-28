#include <iostream>
#include <vector>
#include <stdlib.h> /* 亂數相關函數 */
#include <time.h>   /* 時間相關函數 */
using namespace std;

void PrintVector(vector<int>*, int);
void shuffle(vector<int>*);
void SelectionSort1(vector<int>*); //Extra space
void SelectionSort2(vector<int>*); //In-place
void BubbleSort(vector<int>*);

int main(){
	/* 設定亂數種子 */
	srand( time(NULL) );
	clock_t t1, t2;

	int elementNum[6] = {100, 300, 1000, 3000, 10000, 30000};

	for (int i = 0 ; i < 6 ; i++){
		int num = elementNum[i];
		cout << "[Sort " << num << "]" << endl;
		vector<int> vec;
		for (int i = 0; i < num; i++){
			vec.push_back(i);
		}
		//PrintVector(&vec, 10);
		shuffle(&vec);

		cout << "原始： ";
		PrintVector(&vec, 10);


		t1 = clock();
		/* Sort */
		SelectionSort1(&vec);
		//SelectionSort2(&vec);
		//BubbleSort(&vec);

		t2 = clock();
		cout << "耗時： " << (t2-t1)/(double)(CLOCKS_PER_SEC) << " sec" << endl;

		cout << "排序後： ";
		PrintVector(&vec, 10);
		cout << endl;
	}


	return 0;
}

void PrintVector(vector<int>* vec, int num){
	for (int i = 0 ; i < num; i++){
		if (i != num-1){
			cout << (*vec)[i] << " ";
		} else {
			cout << (*vec)[i] << endl;
		}
	}
}

void shuffle(vector<int>* vec){
	for (int i = (*vec).size()-1; i > 0; i--){
		int index = rand()%i;
		int tmp = (*vec)[index];
		(*vec)[index] = (*vec)[i];
		(*vec)[i] = tmp;
	}
}

void SelectionSort1(vector<int>* vec){
	// Remove element from vector
	//  * vec.erase(vec.begin() + index);
	vector<int> sorted;
	while ( (*vec).size() > 0 ){
		int min = (*vec)[0];
		int index = 0;
		for (int i = 1; i < (*vec).size(); i++){
			if ((*vec)[i] < min){
				min = (*vec)[i];
				index = i;
			}
		}
		sorted.push_back(min);
		(*vec).erase((*vec).begin() + index);
	}
	for (int i = 0 ; i < sorted.size(); i++){
		(*vec).push_back(sorted[i]);
	}
}

void SelectionSort2(vector<int>* vec){
	for (int i = 0; i < (*vec).size()-1; i++){
		int minIndex = i;
		for (int j = i+1; j < (*vec).size(); j++){
			if ((*vec)[j] < (*vec)[minIndex]){
				minIndex = j;
			}
		}
		if (minIndex != i){
			int tmp = (*vec)[minIndex];
			(*vec)[minIndex] = (*vec)[i];
			(*vec)[i] = tmp;
		}
	}
}

void BubbleSort(vector<int>* vec){
	for (int i = 0 ; i < (*vec).size()-1 ; i++){
		for (int j = 0 ; j < (*vec).size()-i-1 ; j++){
			if ((*vec)[j] > (*vec)[j+1]){
				int tmp = (*vec)[j];
				(*vec)[j] = (*vec)[j+1];
				(*vec)[j+1] = tmp;
			}
		}
	}
}