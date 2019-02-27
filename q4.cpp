#include <iostream>

using namespace std;



void increment1(int x, int y){
    x++;
    y++;
    cout << x << endl;
    cout << y << endl;
    return;
}
void increment2(int &x, int &y){
    x++;
    y++;
    cout << x << endl;
    cout << y << endl;
}

void increment3(int* x, int* y){
	*x = *x+1;
	*y = *y+1;
	cout << x << endl;
	cout << y << endl;
}
int main(){
    int a = 6;
    int b = 10;
    increment1(a,b);
    cout << a << " " << b << endl;
    increment2(a,b);
    cout << a << " " << b << endl;
    increment3(&a,&b);
    cout << a << " " << b << endl;

    return 0;
}

