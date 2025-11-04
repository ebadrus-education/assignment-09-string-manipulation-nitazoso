#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat2("pagi hari ayam berkokok");

    cout << "erase\n";
    kalimat2.erase(5,4);
    cout << kalimat2;

    return 0;
}
