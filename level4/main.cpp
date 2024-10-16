#include <iostream>
#include <vector>

using namespace std;


// pass by value (new copy of the array)
void add_zero_to_list(vector<int> number_list, int zeros_number)
{
    for(int i = 0; i < zeros_number; i++) {
        number_list.push_back(0);
    }
    cout << "B. size of number list: " << number_list.size() << endl;
}

// &number_list is pass by reference. In this case it would modify list directly
void add_zero_to_list2(vector<int> &number_list, int zeros_number)
{
    for(int i = 0; i < zeros_number; i++) {
        number_list.push_back(0);
    }
    cout << "D. size of number list: " << number_list.size() << endl;
}

// const address to avoid creating a copy and avoid editing the original
void print_all_elems(const vector<int> &list) {
    for(int number: list) {
        cout << number << endl;
    }
}

int main () {
    vector<int> list = {5,5,4};
    cout << " A. Size of number list: " << list.size() << endl;
    add_zero_to_list(list, 4);
    cout << "C. Size of number list: " << list.size() << endl;
    add_zero_to_list2(list, 4);
    cout << "E. Size of number list: " << list.size() << endl;
    int a = 3;
    add_1(a);
    cout << a << endl;
    print_all_elems(list);


    return 0;

}