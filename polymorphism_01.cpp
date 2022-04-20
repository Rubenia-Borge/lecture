#include <iostream>
#include <string>
using namespace std;

class Printer{
    public:
      void print(int i) {
        cout << "\nFunction Overloading print with an int argument: " << i << endl;
      }

      void print(double f) {
        cout << "Function Overloading print with a double argument: " << f << endl;
      }

      void print(string s) {
        cout << "Function Overloading print with a string argument: " << s << endl;
      }
};

int main() {
  Printer p;
  p.print(22);
  p.print(22.22);
  p.print("Twenty-two");
  cout << endl;
  return 0;
}
