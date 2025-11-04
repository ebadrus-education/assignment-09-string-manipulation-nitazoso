#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat1("kucing hitam punya ekor ");
    string kalimat2("pagi hari ayam berkokok");

    cout << "substring\n";
    cout << kalimat1 << endl;
    cout << kalimat2 << endl;

    //substring(index,panjang)
    cout << kalimat1.substr(7,5) << endl;
    cout << kalimat2.substr(10,4) << endl;

    return 0;
}
