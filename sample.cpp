#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void sort(string& s) {
    sort(s.begin(), s.end());
}

int main() {
  
    // Prompt the user to enter a string
    cout << "Enter a string: ";
    string user_input;
    getline(cin, user_input);

    // Sort the string
    sort(user_input);

    // Display the sorted string
    cout << "The sorted string is " << user_input << endl;

    return 0;
}
