// This module does not need to be modified by you
#include "process_data.h"

#include <cstdint>
#include <iostream>
using namespace std;

void print(const char names[][30]) {
    cout << "Let the instructor know after you clone this project \n"
         << "so that he modififes it so that you can rebase it and pushed the changed code back \n"
         << "to your GitHub account and receive an extra credit." << endl << endl;

    for (size_t i = 0; names[i][0] != 0; ++i)
        cout << names[i] << endl;
}
