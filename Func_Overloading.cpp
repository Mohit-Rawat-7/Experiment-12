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
