#include <iostream>

int main() {

    const int seconds_per_hour = 3600;
    const double max_allowed_temperature = 76.8;

    int number = 10;
    std::cout << "Hello" << std::endl;
    std::cout << "World" <<std::endl;
    std::cout << number <<std::endl;
    std::cout << number+1 <<std::endl;
    std::cout << number+2 <<std::endl;
    std::cout << number+3 <<std::endl;

    int a;
    a = 2;
    int b = a + 2;
    double temperature = 20.6;
    bool is_alive = false;
    std::string user_name = "Bob";

    std::cout << b << std::endl;
    std::cout << "Temperature:" << temperature << std::endl;
    std::cout << is_alive << std::endl;
    std::cout << user_name << std::endl;
    std::cout << seconds_per_hour << std::endl;
    std::cout << max_allowed_temperature << std::endl;
    return 0;
}