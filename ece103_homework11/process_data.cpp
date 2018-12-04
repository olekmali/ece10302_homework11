#include "process_data.h"

#include <cstdint>
#include <iostream>
using namespace std;

void print(const char names[][30]) {
    cout << "The fourth and last chance for rebase extra credit at 8:50pm on 12/3/2018" << endl;
    cout << "The third chance for rebase extra credit at 11:00pm on 12/2/2018" << endl;
    cout << "The second chance for rebase extra credit at 3:10pm on 11/30/2018" << endl;
    cout << "If you cloned the project before 6:10pm 11/29/2018, rebased after 6:10pm on 11/29/2018,\n"
         << "and pushed the changed code back to GitHub you will receive an extra credit." << endl << endl;

    for (size_t i = 0; names[i][0] != 0; ++i)
        cout << names[i] << endl;
}
