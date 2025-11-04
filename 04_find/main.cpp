#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat1("kucing hitam punya ekor ");
    string kalimat2("pagi hari ayam berkokok");

    //mencari posisi
    cout << "posisi hitam: ";
    cout << kalimat1.find("hitam") << endl;
    cout << "posisi hari";
    cout << kalimat2.find("hari") << endl;

    //mencari huruf i dalam variabel
    cout << "i pada kucing";
    int a = kalimat1.find("i"); 
    cout << a << endl;
    cout << "i pada hari";
    cout << kalimat1.find("i", a+1) << endl;

    return 0;
}
