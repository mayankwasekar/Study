# The largest heading
## The second largest heading
###### The smallest heading
## **This is bold text**
## *This text is italicized*
## **This text is _extremely_ important**
## 	***All this text is important***
## > Pardon my French
```
git status
git add
git commit
```
This site was built using [GitHub Pages](https://pages.github.com/).

- George Washington
- John Adams
- Thomas Jefferson

1. James Madison
2. James Monroe
3. John Quincy Adams

1. First list item
   - First nested list item
     - Second nested list item

- [x] Finish my changes
- [ ] Push my commits to GitHub
- [ ] Open a pull request

# STL
### 1. What is containers?
    - Sequence, Adapter, Associative, Unordered
### 2. What is Sequence, Adapter, Associative, Unordered containers?
    - Vector(Dynamic Array ) dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted
    - List(doubly link list), Lists are sequence containers that allow non-contiguous memory allocation. 
    - Deque(Similar to vector, more efficient, contiguous storage allocation may not be guaranteed, efficient in case of insertion and deletion), 
    - Array(collection of similar data items )
    - Forward list(singly link list ***C++11*** )









1. What is containers?
Sequence, Adapter, Associative, Unordered

2. What is Sequence, Adapter, Associative, Unordered containers?
Vector(Dynamic Array ), dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted
List(doubly link list), Lists are sequence containers that allow non-contiguous memory allocation. 
forward list(singly link list C++11), 
Deque(Similar to vector, more efficient, contiguous storage allocation may not be guaranteed, efficient in case of insertion and deletion), 
Array(collection of similar data items )

Queue(encapsulated object of deque or list), 
Priority Queue(save in increasing order), 
Stack(encapsulated object of vector or deque, list)


Set(BST)set<int, greater<int> > s1;, 
Mult-set(BST multiple elements can have same values), 
Map(BST key value pair)gquiz1.insert(pair<int, int>(1, 40)), 
Multi-Map(BST multiple elements can have same keys)


3. Operator Overloading
 the ability to provide the operators with a special meaning for a data type, this ability is known as operator overloading.
 name of an operator function is always operator keyword followed by symbol of operator
Cant Overloaded(No need to overload following operators by Strostrup)
 . (dot) 
   :: 
   ?: 
   sizeof 
Imp points
At least one operants must be user defined type

4. Templates
The simple idea is to pass data type as a parameter so that we don’t need to write the same code for different data types.

5. Polymorphism
    Compile time Polymorphism
    	Function Overloading(multiple functions with same name but different parameters then these functions are said to be overloaded)
    	Operator Overloading
    Runtime Polymorphism
    	Function Overriding
    	Virtual Function
5. Virtual Pointer, Deadly dimond of deth
Deep copy & Shallow copy
Constructor and its types

Smart Pointers
unique_ptr : only one pointer can point this one at one time. So we can’t share with another pointer, 
but we can transfer the control to P2 by removing P1.
shared_ptr : shared_ptr then more than one pointer can point to this one object at a time 
and it’ll maintain a Reference Counter using use_count() method.
weak_ptr : similar to shared_ptr except it’ll not maintain a Reference Counter.In this case, a pointer will not have a strong hold on the object. 
The reason is if suppose pointers are holding the object and requesting for other objects then they may form a Deadlock.

1. Encapsulation
Encapsulation is the process of binding together the data and functions in a class.
2. Abstraction
An abstraction in C++ is hiding the internal implementations and displaying only the required details
3. Inheritance 
process where one class acquires the properties (methods and fields) of another. 

static_cast, dynamic_cast, reinterpret_cast
Use dynamic_cast for converting pointers/references within an inheritance hierarchy.
Use static_cast for ordinary type conversions.
Use reinterpret_cast for low-level reinterpreting of bit patterns. Use with extreme caution.
Use const_cast for casting away const/volatile. Avoid this unless you are stuck using a const-incorrect API.

this pointer

try catch
a)Synchronous, b)Asynchronous
try: represents a block of code that can throw an exception.
catch: represents a block of code that is executed when a particular exception is thrown.
throw: Used to throw an exception. Also used to list the exceptions that a function throws, but doesn’t handle itself.
catch all: catch (...)

implemented using a hash table where keys are hashed into indices, used Balanced Tree Structure
Unordered set(), Unordered Mult-set, Unordered map, Unordered Multi-Map.

Friend funciton

IS-A
HAS-A
Composition
Association

C++11
1. Lambda Expressions(anonymous function object (a closure))
[ capture clause ] (parameters) -> return-type  
{   
   definition of method   
} 

2. Type Inference in C++ (auto and decltype)
Type Inference refers to automatic deduction of the data type of an expression in a programming language. Before C++ 11, each data type needs to be explicitly declared at compile time

3. Uniform Initialization Syntax
type var_name{arg1, arg2, ....arg n}
int* pi = new int[5]{ 1, 2, 3, 4, 5 };

4. Deleted and Defaulted Functions
A() = default; 
we didn’t have to specify the body of the constructor A() because, by appending the specifier ‘=default’, the compiler will create a default implementation of this function.

5. nullptr
NULL is typically defined as (void *)0 and conversion of NULL to integral types is allowed. So the function call fun(NULL) becomes ambiguous.

6. Delegating Constructors
Delegating constructors prevent code duplication (and all the possible errors and flaws that come with it : increased maintenance, decreased readability...), which is a good thing. 
Sometimes it is useful for a constructor to be able to call another constructor of the same class. 

7. Rvalue References

8. Threading Library

9. New Smart Pointer Classes


C++14
1. Generic lambdas
In C++11, lambda function parameters need to be declared with concrete types. C++14 relaxes this requirement, allowing lambda function parameters to be declared with the auto type specifier
auto lambda = [](auto x, auto y) {return x + y;};

2. Return type deduction
an auto return type
auto multiply(int a, int b)
{
  
    // Return the product
    return a * b;
}
  
// Driver Code
int main()
{
    int a = 4, b = 5;
  
    // Function Call
    cout << multiply(a, b);
  
    return 0;
}

3. Alternate type deduction on declaration.


    1.1 Function return type deduction
    1.2 Alternate type deduction on declaration[5]
    1.3 Relaxed constexpr restrictions
    1.4 Variable templates
    1.5 Aggregate member initialization
    1.6 Binary literals
    1.7 Digit separators
    1.8 Generic lambdas
    1.9 Lambda capture expressions
    1.10 The attribute [[deprecated]]
     New standard library features
    2.1 Shared mutexes and locking
    2.2 Heterogeneous lookup in associative containers
    2.3 Standard user-defined literals
    2.4 Tuple addressing via type
    2.5 Smaller library features

 c++17 

    Nested Namespaces
    Variable declaration in if and switch
    if constexpr statement
    Structured bindings
    Fold Expressions
    Direct list initialization of enums















