#include <iostream>
using namespace std;

int main() {
    int userPin=1234, Pin, errorCounter = 0;
    cout << "Enter Your Pin" << endl;
    do {
        cout << "PIN: " << endl;
        cin >> Pin;
        if(Pin != userPin)
        errorCounter++;
        if (errorCounter < 3)
        cout <<"Loading..." << endl;
        else
        (errorCounter > 3)
        cout << "Blocked..." << endl;

    }while(userPin && errorCounter);
    
    system("pause");
}