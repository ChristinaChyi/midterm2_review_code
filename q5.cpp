#include <iostream>

using namespace std;


void swap(int x, int y){
    x = y;
    y = x;
}

void swap2(int &x, int& y){
    int tmp = x;
    x = y;
    y = tmp;
}

int main(){
    int a = 12;
    int b = -4;
    swap(a,b);
    cout << a << " " << b << endl; //12 -4
    swap2(a,b);
    cout << a << " " << b << endl; //-4 12
}
