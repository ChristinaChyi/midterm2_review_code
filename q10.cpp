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

int numCats(Pet pets[], int length){
	int count = 0;
	for(int i =0; i < length; i++){
		if(pets[i].species == "cat") count++;
	}
	return count;
}


int main(){

	Pet pets[] = { {"Buddy", "dog", 34.5}, {"Snowball", "cat", 10.2}, {"Oreo", "cat", 8.7} };
	cout << "name of the heavier pet between Buddy and Snowball: ";
	nameOfHeavierPet(pets,pets+1);

	cout << "\n\nNumber of cats: " << numCats(pets, 3) << endl;

	return 0;
}
