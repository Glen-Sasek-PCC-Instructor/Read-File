#include <iostream>
#include <fstream>

using namespace std;

int main() {
    char line[80] = {0};
    fstream fin("number-shifter-ascii.txt");
    while(fin.getline(line, 80, '\n')) {
        cout << line << endl;
    }
}