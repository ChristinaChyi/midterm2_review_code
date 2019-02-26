#include <iostream>

using namespace std;

void arrStuff(int x[], int len){
	cout << x << ", " << *x << ". " << x + 1 << ", " << *(x+1) << endl;
	*x = *x + 1;
}

int main(){
	const int VAL = 2;
	int nums[] = {40, 10, -60, 25};
	arrStuff(nums, 4);
	for(int i =0; i < VAL; i++){
		cout << nums[i] << "";
	}
	return 0;
}

