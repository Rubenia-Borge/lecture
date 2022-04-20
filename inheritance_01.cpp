#include <iostream>  
using namespace std;  
 
class Animal {  
   public:  
     void eat() {   
       cout<<"We're inside the base class Animal. Eating..."<<endl;   
     }    
}; 

class Dog: public Animal {    
  public:  
    void bark(){  
      cout<<"We are inside the derived class Dog. Barking...";   
    }    
}; 

int main() {  
    Dog dog1;  
    dog1.eat();  
    dog1.bark();  
    return 0;  
}  