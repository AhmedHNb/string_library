#include <iostream>
#include <string>
#include <vector>
#include "string_library.h"

using namespace std;

/**
 * @brief Main function for demonstration.
 */
int main() 
{
    string str = "ahmed" ;
    string_library::upper_case(str);
    cout << str << endl;
    return 0;
}
