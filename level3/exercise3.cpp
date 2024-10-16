#include <iostream>
#include <vector>
using namespace std;

int findMax (vector<int> numbers) {
    int max = numbers.at(0);
    for (int i = 1; i < numbers.size(); i ++) {
        if (numbers.at(i) > max) {
            max = numbers.at(i);
        }
    }
    return max;
}

int main () {

    vector<int> numbers = {};
    for (int i = 0; i < 5; i ++) {
        int num;
        cout << "enter a number " << endl;
        cin >> num;
        numbers.push_back(num);
    }
    cout << findMax(numbers) << endl;

    
    vector<int> numbers2 = {};
    bool askForNums = true;
    int input;
    while (askForNums) {
        
        cout << "Enter a number " << endl;
        cin >> input;
        if (input == 0) {
            askForNums = false;
        }
        numbers2.push_back(input);
    }
    cout << findMax(numbers2) << endl;


    return 0;
}