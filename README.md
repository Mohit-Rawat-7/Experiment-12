# Experiment-12
## AIM
To learn fucntion overloading in c++.

## Software Used
VS Code

## Problem Statement
1.) Write a c++ program to do function overloading.

2.) Write a c++ program to do operator overloading.

# Theory
### Function Overloading:-<br>
Function overloading allows you to create multiple functions with the same name but different parameters. This means that you can define several functions that perform similar tasks but with different types or numbers of inputs.
<br>1)Overloaded functions must have different parameters (type or number).
<br>2)They must have the same name.
<br>3)Return type alone is not enough to overload functions.

### Operator Overloading:<br>
Operator overloading allows you to redefine the behavior of existing operators (like +, -, *, etc.) for user-defined classes. This means you can make these operators work in a way that’s specific to your classes without changing their general behavior in C++.
<br>1)You can overload most operators (e.g., +, -, *), but some operators (e.g., ::, ., .*, sizeof, and typeid) cannot be overloaded.
<br>2)Operator overloading can make code more readable and intuitive when working with custom types.
<br>3)It helps to maintain consistency with built-in operators, making user-defined types easier to use.


## Problem Codes:
1:-
~~~ javascript
//MOHIT SINGH RAWAT
//23070123086
#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}
float add(float a, float b) {
    return a + b;
}
int add(int a, int b, int c) {
    return a + b + c;
}
int main() {
cout << "Addition of 2 integers: " << add(7, 7) << endl;         
cout << "Addition of 2 floats: " << add(3.9f, 4.9f) << endl; 
cout << "Addition of 3 integers: " << add(7, 8, 9) << endl;      
return 0;
}
~~~

2:-
~~~ javascript
//Mohit Singh Rawat
//23070123086
#include <iostream>
using namespace std;
class Complex {
    private:
    float real;
    float imag;
    public:
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i; 
    }
    Complex operator + (const Complex &obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};
int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.6, 3.7);
    Complex c3 = c1 + c2;
    cout << "First complex number: ";
    c1.display();
    cout << "Second complex number: ";
    c2.display();
    cout << "Sum of complex numbers: ";
    c3.display();
    return 0;
}
~~~

## Outputs
1:- 
<img width="294" alt="Screenshot 2024-09-15 at 8 43 38 PM" src="https://github.com/user-attachments/assets/6719ea07-cefd-4ea1-bbbb-a461fb1b4a86">

2:-
<img width="301" alt="Screenshot 2024-09-15 at 8 48 51 PM" src="https://github.com/user-attachments/assets/bc0e124c-1991-4d1a-903d-f7567d255680">

## Conclusion
In simple terms, function overloading lets you use the same function name for different tasks based on the inputs, while operator overloading lets you customize how operators (like + or -) work with your own classes. Both make your code easier to understand and use.
