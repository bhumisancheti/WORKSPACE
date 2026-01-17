#include <iostream>
using namespace std;

int main() {
    int n = 5;  // Number of lines

    for (int i = 0; i < n; i++) {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++) {
            cout << ch;
        }

}

