#include <iostream>
#include <vector>
#include "myvectorfunction.hpp"
using namespace std;




int main () {
    vector<int> list = {5,5,4};
    cout << " A. Size of number list: " << list.size() << endl;
    add_zero_to_list(list, 4);
    cout << "C. Size of number list: " << list.size() << endl;
    add_zero_to_list2(list, 4);
    cout << "E. Size of number list: " << list.size() << endl;
    print_all_elems(list);

    vector<int> input = {2,3,4};
    vector<int> output = {10, 11, 12};
    add_list_to_list(input, output);
    print_all_elems(output);


    vector<string> city_list = {"Paris", "London", "Berlin", "Pairs", "Madrid", "Paris"};
    cout << "Number of occurences of Paris: " << get_string_occurences_in_list(city_list, "Paris") << endl;
    return 0;



}