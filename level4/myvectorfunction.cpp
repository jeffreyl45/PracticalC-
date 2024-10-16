#include "myvectorfunction.hpp"
#include <iostream>

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

void add_list_to_list(const vector<int> &input_list, vector<int> &output_list) {
    for (int number: input_list) {
        output_list.push_back(number);
    }
}

int get_string_occurences_in_list(const vector<string> &list, string text) {
    int occurences = 0;
    for (string s: list) {
        if (s == text) {
            occurences ++;
        }
    }
    return occurences;
}
