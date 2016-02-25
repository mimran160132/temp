
#include <iostream>
using namespace std;

class Adder{

public:
      // constructor
      Adder()
      {
	int i=200;
        total = i;
      }
      // interface to outside world
      void addNum(int number)
      {
          total += number;
      }
      // interface to outside world
      int getTotal()
      {
          return total;
      };
   private:
      // hidden data from outside world
      int total;
};
int main( )
{
   Adder a;
   
   a.addNum(10);
   a.addNum(20);
   a.addNum(30);

   cout << "With My editing...." <<endl;
   cout << "Total " << a.getTotal() <<endl;
   return 0;
}
