#include <iostream>
#include <string>
using namespace std;

int main() {
    string kata("kucing");
    // menampilkan string
    cout << kata << endl;

    // menggabung kata
    cout << "append\n";
    string kata1(" hitam");
    kata.append(kata1);
    cout << kata << endl;

    string kata2(" keren!!!!");
    kata += kata2;
    cout << kata << endl;

    return 0;
}