#include <iostream>
#include <vector>
#include <numeric>

int main () {
    std::string username;
    int age;
    std::cout << "Your name? " << std::endl;
    std::cin >> username;
    std::cout << "Your age? " << std::endl;
    std::cin >> age;
    std::cout << "Hello " << username << "you are " << age << std:: endl;
    
    int num1, num2;
    std::cout << "Number 1 " << std::endl;
    std::cin >> num1;
    std::cout << "Number 2 " << std::endl;
    std::cin >> num2;
    std::cout <<num1 + num2 << std::endl;

    std::vector<double> numbers = {1.0,2.0,3.0,4.0};
    double total = accumulate(numbers.begin(), numbers.end(), 0.0);
    double average = total / numbers.size();
    std::cout << "Average: " << average << std::endl;

    return 0;
}