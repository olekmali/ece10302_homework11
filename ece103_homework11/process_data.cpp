#include "process_data.h"

#include <cstdint>
#include <iostream>
using namespace std;

void print(const char names[][30]) {
    cout << "If you cloned the project before 6:10pm 11/29/2018, rebased after 6:10pm on 11/29/2018,\n"
         << "and pushed the changed code back to GitHub you will receive an extra credit." << endl << endl;

    for (size_t i = 0; names[i][0] != 0; ++i)
        cout << names[i] << endl;
}
