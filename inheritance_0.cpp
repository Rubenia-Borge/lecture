#include <iostream>  
using namespace std;  
 class PayrollAccount {  
   public:  
   float employeeSalary = 7000;   
 };  
   class salesPersonal: public PayrollAccount {  
   public:  
   float salesBonus = 3000;    
   };       

int main() {  
     salesPersonal salesman1;
     float totalSalary = salesman1.employeeSalary + salesman1.salesBonus;

     cout << "\nA sales employee makes a salary of " << salesman1.employeeSalary 
          << "\nand a bonus of " << salesman1.salesBonus 
          << "\nfor a total salary of " << totalSalary;
       
    return 0;  
}  