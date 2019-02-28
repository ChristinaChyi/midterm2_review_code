#include <iostream>

using namespace std;

struct Point{
    double x;
    double y;
};
struct Box{
    Point ul; // upper left corner of the Box double width; //width of the Box
    double height; //height of the Box
};

void initBox(Box* p, double x, double y, double width, double height){
	//not important for this question
}

int main(){
	Box b1;
	Box &b2 = b1;
	Box* b3 = new Box;
	/*
	 * (a) initBox(b1, 10.0, 20.0, 2, 4);  //  CE
	 * (b) initBox(*b1, 10.0, 20.0, 2, 4); //  CE
	 * (c) initBox(&b1, 10.0, 20.0, 2, 4); //  NE
	 * (d) initBox(b2, 10.0, 20.0, 2, 4);  //  CE
	 * (e) initBox(&b2, 10.0, 20.0, 2, 4); //  NE
	 * (f) initBox(b3, 10.0, 20.0, 2, 4);  //  NE
	 * (g) initBox(&b3, 10.0, 20.0, 2, 4); //  CE
	*/
}
