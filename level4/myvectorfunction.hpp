#ifndef MYVECTORFUNCTION_H
#define MYVECTORFUNCTION_H
#include <vector>

using namespace std;

void add_zero_to_list(vector<int> number_list, int zeros_number);
void add_zero_to_list2(vector<int> &number_list, int zeros_number);
void print_all_elems(const vector<int> &list);

void add_list_to_list(const vector<int> &input_list, vector<int> &output_list);

int get_string_occurences_in_list(const vector<string> &list, string text);



#endif