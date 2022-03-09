#include <iostream>

using namespace std;


class DominoLine {
public:
    int leftNum;
    int rightNum;

    void putDomino(Domino dom, int dirLine, bool reverse) {
        if (dirLine == 0) {
            if (reverse == false) {
                leftNum = dom.leftNum;
            }
            else {
                leftNum = dom.rightNum;
            }
        }
        else {
            if (reverse == false) {
                rightNum = dom.leftNum;
            }
            else {
                rightNum = dom.rightNum;
            }
        }
    }
};


class Domino {
public:
    int leftNum;
    int rightNum;
};


int main() {
    
    return 0;
}
