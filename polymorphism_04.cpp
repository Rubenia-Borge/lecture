// Example without virtual function
 
#include <iostream>  
using namespace std;  
class Add
{  
   int x = 5, y = 20;  
   public:  
   void display()  // Overriden function
   {  
     cout << "Value of x is : " << x + y << endl;  
   }  
};

class Substract: public Add
{  
    int y = 10, z = 30;  
    public:  
    void display()  // Overriden function
    {  
      cout << "Value of y is : " << y - z << endl;  
    }  
}; 

int main()  
{  
    Add *m;           // Base class pointer. It can only access the base class members
    Substract s;      // Object of the derived class
    m = &s;  
    m->display();     // Accessing the function using the base class pointer
    return 0;  
}  



