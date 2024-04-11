//Q-7. Write a C++ Program to illustrates the use of Constructors in multilevel 
//inheritance
#include <iostream>

using namespace std;

// Base class
class Animal {
public:
    string type;

    // Base class constructor
    Animal(string animalType){
    	type = animalType;
        cout << "Animal constructor called with type: " << type << endl;
    }
};

// Intermediate class inheriting from Animal
class Dog : public Animal {
public:
    string breed;

    // Intermediate class constructor
    Dog(string dogBreed,string animalType) : Animal(animalType) {
        breed = dogBreed;
        cout << "Dog constructor called with breed: " << breed << endl;
    }
};

// Derived class inheriting from Dog
class GermanShepherd : public Dog {
public:
    // Derived class constructor
    GermanShepherd(string name) : Dog("German Shepherd", "Dog") {
        cout << "GermanShepherd constructor called with name: " << name << endl;
    }
};

int main() {
    // Create an instance of GermanShepherd
    GermanShepherd myDog("Buddy");

}

