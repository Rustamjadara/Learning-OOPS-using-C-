/*A constructor is a member function of a class which initializes objects of a class. In C++, Constructor is automatically called when object(instance of class) create. It is special member function of the class.
A constructor is different from normal functions in following ways:

Constructor has same name as the class itself
Constructors don’t have return type
A constructor is automatically called when an object is created.
If we do not specify a constructor, C++ compiler generates a default constructor for us (expects no parameters and has an empty body).
*/
#include <iostream> 
using namespace std; 
  
class construct { 
public: 
    int a, b; 
  
    // Default Constructor 
    construct() 
    { 
        a = 10; 
        b = 20; 
    } 
}; 
  
int main() 
{ 
    // Default constructor called automatically 
    // when the object is created 
    construct c; 
    cout << "a: " << c.a << endl 
         << "b: " << c.b; 
    return 1; 
} 

