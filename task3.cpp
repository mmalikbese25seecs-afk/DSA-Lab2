#include <iostream>
using namespace std;

// function for the pointer

void analyze_pointer(int *ptr) {
    if (ptr == nullptr) {

        cout << "NULL POINTER" <<endl;
        return;
    }
    
    // memory location pointed by the pointer

    cout << "Memory Address " << ptr <<endl;
    
    //value of the integer stored 

    cout << "Value at Location: " << *ptr <<endl;
    
}

int main() {
   
   // allocate on stack and assign value
    int iValue = 42; 
    
    // [pass memory location using &

    analyze_pointer(&iValue);

    // allocate on heap using new
    int *heapPtr = new int; 

    // assigned value
    *heapPtr = 99;         
    
    analyze_pointer(heapPtr);


    return 0;
}
