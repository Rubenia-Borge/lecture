#include <iostream>  
using namespace std;  
class Animal {  
  public:  
  void function(){    
    cout <<"In the base class... Eating..." << endl;    
  }      
};   

class Man: public Animal {    
  public:  
  void function()    
  {    
    cout <<"In the derived class... Walking ..." << endl;    
  }    
};  
int main(void) {  
  Animal A = Animal();
  A.function();   // An object of the parent class 
  
  Man m = Man();    
  m.function();   // An object of the child class
     
  return 0;  
}










