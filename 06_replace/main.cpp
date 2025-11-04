#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat1("kucing hitam punya ekor ");

    cout << "replace string\n";
    kalimat1.replace(19,4,"kalung");
    cout << kalimat1 << endl;

    return 0;
}
