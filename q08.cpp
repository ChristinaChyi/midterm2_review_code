#include <iostream>

using namespace std;

void trickyFunction(int* a, int* b, int& c, int d){
	*a = *a + 1;
	b = b+1;
	c = c+1;
	d = d+1;
}

int main(){
	int w = 10, x = 10, y = 10, z = 10;
	trickyFunction(&w, &x, y, z);
	cout << w << ", " << x << ", " << y << ", " << z << endl;
	return 0;
}

