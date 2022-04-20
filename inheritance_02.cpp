#include <iostream>  
using namespace std;  
class BaseClassA  
{  
    int x = 7;  
    int y = 10;  
    public:  
    int multiplyFunction()  
    {  
        int z = x * y;  
        return z;  
    }     
};  
  
class DerivedClassB : private BaseClassA  
{  
    public:  
    void display()  
    {  
        int printResult = multiplyFunction();  
        cout << "Result of x * y is : " << printResult << endl;  
    }  
};  

int main()  
{  
   DerivedClassB myBObject;  
   myBObject.display();  
  
    return 0;  
}  