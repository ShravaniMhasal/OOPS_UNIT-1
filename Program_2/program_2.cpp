#include <iostream>
using namespace std;

int main() {
    int marks = 38;  // changed marks value

    // checking if student passed or failed
    if (marks >= 40) {
        cout << "Pass";
    } else {
        cout << "Fail";  // marks less than 40 so fail
    }

    return 0; // program ends here
}