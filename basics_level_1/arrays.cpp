#include <iostream>
#include <vector>

int main() {
    // 4 elements in this array
    double temperature_list[4] = {34.5, 27.8, 26.8, 22.0};
    temperature_list[3] = 15.4;
    int lis[3] = {1,2,3};
    std:: cout << temperature_list[3] << std::endl;
    // attempting to compile with list index out of range causes a warning
    std:: cout << lis[5] << std::endl;
    // out of range gives a random value of the same datatype?

    // size will be dynamic so no need to state size of array
    std::vector<double> temperatures ={34.5, 27.8, 26.8, 22.0};
    //g++ -std=c++11 arrays.cpp -o array to use vector
    std::cout << temperatures.at(0) << std::endl;
    std::cout << temperatures.size() << std::endl;
    temperatures.push_back(17.4);
    std::cout << temperatures.size() << std::endl;

    return 0;
}