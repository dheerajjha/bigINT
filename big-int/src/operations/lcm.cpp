#include <iostream>
#include 'bigINT'
using namespace std;

bigINT lcm(bigINT a, bigINT b) {
    return a * b / gcd(a, b);
}

int main() {
    bigINT a = "1231231231232" ,b = "12";
    lcm(a, b);
}
