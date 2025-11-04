#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat1("kucing hitam punya ekor ");
    string kalimat2("pagi hari ayam berkokok");

    cout << "length\n";
    cout << kalimat1.length() << " karakter\n";
    cout << kalimat2.size() << " karakter\n";

    return 0;
}