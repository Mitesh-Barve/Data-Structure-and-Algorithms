#include <iostream>
using namespace std;

int count = 0;

int fun() {
    if (count == 3) {
        return 0;
    }
    cout << count;
    count++;
    return fun();
}

int main() {
    fun();
    return 0;
}
