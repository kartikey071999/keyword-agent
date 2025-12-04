#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("text.txt");
    string word;
    bool alert = false;

    while (file >> word)
        if (word == "error" || word == "fail" || word == "crash")
            alert = true;

    cout << (alert ? "ALERT" : "OK") << endl;
    return alert ? 1 : 0;
}
