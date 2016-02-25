
// Name space concepts....
/*

A namespace is designed to overcome this difficulty and is used as additional information to differentiate similar functions, classes, variables etc. with the same name available in different libraries. Using namespace, you can define the context in which names are defined. In essence, a namespace defines a scope.
*/

#include <iostream>
using namespace std;

// first name space
namespace first_space{
   void func(){
      cout << "Inside first_space" << endl;
   }
}
// second name space
namespace second_space{
   void func(){
      cout << "Inside second_space" << endl;
   }
}
int main ()
{
 
   // Calls function from first name space.
   first_space::func();
   
   // Calls function from second name space.
   second_space::func(); 

   return 0;
}
