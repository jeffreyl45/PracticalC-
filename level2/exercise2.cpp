#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

float temp_conversion (float celsius) {
    return celsius * 1.8 + 32;
}

float average (vector<double> numbers) {
    double total = accumulate(numbers.begin(), numbers.end(), 0.0);
    double average = total / numbers.size();
    return average;
}

int addTwoNums (int num1, int num2) {
    return num1 + num2;
}

int main () {
    string username;
    int age;
    cout << "Your name? " << endl;
    cin >> username;
    cout << "Your age? " << endl;
    cin >> age;
    cout << "Hello " << username << "you are " << age << endl;
    
    int num1, num2;
    cout << "Number 1 " << endl;
    cin >> num1;
    cout << "Number 2 " << endl;
    cin >> num2;
    cout << addTwoNums(num1, num2) << endl;

    vector<double> numbers = {1.0,2.0,3.0,4.0};
    
    cout << "Average: " << average(numbers) << endl;

    float celsius;
    cout << "Celsius: " << endl;
    cin >> celsius;
    cout << temp_conversion(celsius) << endl;

    return 0;
}