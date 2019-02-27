#include <iostream>

using namespace std;

struct Pet{
    string name;    // name of pet
    string species; // ex: dog, cat, etc.
    double weight;  // weight of pet
};

void nameOfHeavierPet(Pet *p1, Pet *p2){
	if(p1 == NULL || p2 == NULL){
		cerr << "invalid Pet" << endl;
		return;
	}
	if(p1->weight > p2->weight) cout << p1->name << endl;
	else if (p1->weight < p2->weight) cout << p2->name << endl;
	else cout << "same weight" << endl;
}

int main(){



	return 0;
}
