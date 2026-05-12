#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string phoneNumbers[] = {
        "0793142742",
        "0795052815",
        "0795331244",
        "0788105573",
        "0795057433"
    };

    int size = 5;
    string searchNumber;



    cout << "Enter phone number to search: ";
    cin >> searchNumber;


    for (int i = 0; i < size; i++) {
        if (phoneNumbers[i] == searchNumber) {
            cout << "Phone number found at position: " << i + 1  << endl;
            
            break;
        }
    }


    return 0;
}