#include <iostream>

using namespace std;

int getSmallestOdd(int* a, int size){
	bool foundOneOdd = false;
	int min = 0;
	for(int i = 0; i < size; i++){
		if(a[i]%2 != 0){
			if(!foundOneOdd){
				min = a[i];
				foundOneOdd = true;
			}
			else{
				if(a[i] < min){
					min = a[i];
				}
			}
		}
	}
	if(!foundOneOdd) return -1;
	else return min;
}


int main(){

	int arr[] = {13, -15, 23, 26, 0, -76, 14};
	int arr1[] = {12, 16, 20, -400};
	cout << getSmallestOdd(arr, 7) << endl;
	cout << getSmallestOdd(arr1, 4) << endl;

	return 0;
}
