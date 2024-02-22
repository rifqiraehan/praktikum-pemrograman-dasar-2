#include <iostream>

using namespace std;

int main(){
    int a = 0, b = 1, c = 0;

    cout << a << ", ";
    cout << b << ", ";

    while (c < 300){
        c = a + b;

        if (c < 300){
            cout << c << ", ";
        } else {
            cout << c;
        }

        a = b;
        b = c;
    }

    return 0;
}

