#include <iostream>
#include <string>

using namespace std;

int main() {

    // dynamically allocate memory for string

    string *input = new string();

    cout << "Enter a string to reverse; ";

    // take input using dereference
    // getline can allow spaces in string

    getline(cin, *input);

    // find length and reverse 

    int length = (*input).length();
    
    // iterate from 0 up to half the length to swap 

    for (int i = 0; i < length/ 2; i++) {

        // acccess characters using derefrensing

        char temp = (*input)[i];

        (*input)[i] = (*input)[length - 1 - i];

        (*input)[length - 1 - i] = temp;
    }

    // display reults
    cout << "Reversed string; " << *input << endl;

    // free allocated heap memory

    delete input;

    input = nullptr;

    return 0;
}
