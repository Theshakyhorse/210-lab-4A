// COMSC-210 | Lab 4A | Alexander Sierra
#include <iostream>
#include <vector>
using namespace std;
const int MN = 25, MX = 50;

struct Color {
    int red;
    int green;
    int blue;
};

int main() {
    int n;
    Color test;
    srand(time(0));

    test.red = 100;
    test.green = 100;
    test.blue = 100;
    cout << test.red << " " << test.green << " " << test.blue << endl;

    vector<Color> myVec;
    myVec.push_back(test);
    cout << myVec.at(0).red << " " << myVec.at(0).green << " " << myVec.at(0).blue << endl;
    myVec.clear();

    n = rand() % (MX-MN+1) + MN;
    for(int i = 1; i <= n; i++) {
        Color temp;
        temp.red = rand() % 255;
        temp.green = rand() % 255;
        temp.blue = rand() % 255;
        myVec.push_back(temp);
    }
    for (int i = 0; i < n; i++) {
        cout << myVec.at(i).red << " " << myVec.at(i).green << " " << myVec.at(i).blue << endl;
    }
    cout << endl;
    cout << endl;

    cout << "Color#   " << "R value   " << "G value   " << "B value" << endl;
    cout << "------   " << "-------   " << "-------   " << "-------   " << endl;
    
    
    return 0;
}