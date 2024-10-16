#include <iostream>

using namespace std;

int main () {
// 1 is true and 0 is false
// print true and false instead of 1 and 0
    cout << boolalpha;  

    double temperature = 25.0;

    cout << ((temperature > 20.0) && (temperature < 30.0)) << endl;

    cout << true << endl;
    cout << false << endl;
    cout << ((1==1) && (3==4)) << endl;

    int user_age = 325;

    if (user_age < 18) {
        cout << "You are not an adult yet" << endl;
    } else if ((user_age >= 18) && (user_age < 30)) {
        cout << "ur an adult below 30" << endl;
    } else if ((user_age >=30) && (user_age < 40)) {
        cout << "ur in ur thirties" << endl;
    } else {
        cout << "You are over 40." << endl;
    }

    cout << "End of program." <<endl;
}