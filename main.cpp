// COMSC-210 | Lab 4A | Alexander Sierra
#include <iostream>
#include <vector>
using namespace std;

struct Color {
    int red;
    int green;
    int blue;
};

int main() {
    Color test;
    test.red = 100;
    test.green = 100;
    test.blue = 100;
    cout << test.red << " " << test.green << " " << test.blue << endl;
    vector<Color> myVec;
    myVec.push_back(test);
    cout << myVec.at(0).red << " " << myVec.at(0).green << " " << myVec.at(0).blue << endl;
    myVec.clear();
    return 0;
}