#include <iostream>  
using namespace std;  

class Animal {  
  public:  
    void eat() {   
      cout<<"Inside Class Animal. Eating..." << endl;   
    }    
}; 


class Dog: public Animal {    
  public:  
    void bark(){  
      cout<<"Inside Class Dog. Barking..." << endl;   
    }    
};

class Puppy: public Dog {    
  public:  
    void weep() {  
      cout<<"Inside Class Puppy. Weeping..." << endl;   
    }    
};

int main(void) {  
    Puppy myPuppyObject;  
    myPuppyObject.eat();  
    myPuppyObject.bark();  
    myPuppyObject.weep();  
    
    return 0;  
}  