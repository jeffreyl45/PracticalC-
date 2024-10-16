#include <iostream>

// you don't need to put std everywhere anymore
using namespace std;

namespace abc {
    int triple_number(int number) {
        return number * 3;
}
    
    
};

void say_hello(string user_name, int user_age){
    cout << "Hello" << endl;
    cout << "test" << endl;
    cout << user_name << " You are " << user_age << std::endl;

}

void print_triple_number (int number) {
    cout << abc::triple_number(number) << endl;
}





// global variable
int a =5;

int main ()
{
    say_hello("Bob",3);
    say_hello("John",4);
    say_hello("Pete",5);
    print_triple_number(4);

    // block
    {
        // only accessible within this block
        int c = 5;
    }

    return 0;
}