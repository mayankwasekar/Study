/*
|--------------------------------------------------------------------------
| Procedural Programing
|--------------------------------------------------------------------------
|1. Namespace - for avoiding collision between names of global symbols.
|		In each scope, a name can only represent one entity. So, there cannot be two variables 
|		with the same name in the same scope. Using namespaces, we can create two variables or 
|		member functions having the same name.
|
*/
	
#include <iostream> 
using namespace std; 
  
// Variable created inside namespace 
namespace first 
{ 
    int val = 500; 
} 
  
// Global variable 
int val = 100; 
  
int main() 
{ 
    // Local variable 
    int val = 200; 
  
    // These variables can be accessed from 
    // outside the namespace using the scope 
    // operator :: 
    cout << first::val << '\n';  
  
    return 0; 
} 