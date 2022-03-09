#include <iostream>
#include <string>

using namespace std;

class Pole {
public:
    Cell pole[10][10];
};

class Cell {
public:
    int pos_x;
    int pos_y;
    bool is_ship;

};

class Ship1 {
    Cell first;

    void add_at_pole() {
    }
};

class Ship2 {
    Cell first;
    Cell second;
    void add_at_pole() {
    }
};

class Ship3 {
    Cell first;
    Cell second;
    Cell thirth;
    void add_at_pole() {
    }
};

class Ship4 {
    Cell first;
    Cell second;
    Cell thirth;
    Cell fourth;
    void add_at_pole() {
    }
};

class Ship5 {
    Cell first;
    Cell second;
    Cell thirth;
    Cell fourth;
    Cell fifth;
    void add_at_pole() {
    }
};

int main() {

    return 0;
}