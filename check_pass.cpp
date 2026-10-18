#include <iostream>
#include <string>
using namespace std;
int main() {
    string secret = "GMBH|DOef_Cb4t1d~";
    string input;
    cout << "nhap mat khau:" ;
    cin >> input;
    for (int i = 0; i<input.length(); i++) {
        input[i] =input[i] + 1;
    }
    if (input==secret) {
        cout << "chinh xac! Ban da tim thay flag.";
    } else {
        cout <<"sai mat khau!";
    }
    return 0;
}
