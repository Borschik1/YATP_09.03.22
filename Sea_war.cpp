#include <iostream>
#include <string>

using namespace std;

class Pole {
public:
    Cell pole[10][10];

    void attack(Cell cell) {
    }
};

class Cell {
public:
    int pos_x;
    int pos_y;
    string type;

};

class Ship1 {
    Cell first;

    void die() {
    }
};

class Ship2 {
    Cell first;
    Cell second;

    void die() {
    }
};

class Ship3 {
    Cell first;
    Cell second;
    Cell thirth;

    void die() {
    }
};

class Ship4 {
    Cell first;
    Cell second;
    Cell thirth;
    Cell fourth;

    void die() {
    }
};

class Ship5 {
    Cell first;
    Cell second;
    Cell thirth;
    Cell fourth;
    Cell fifth;

    void die() {
    }
};

int main() {

    return 0;
}
