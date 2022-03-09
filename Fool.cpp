#include <iostream>
#include <string>

using namespace std;

class Card {
public:
    int num;
    string suit;
};

class Player {
public:
    Card* cards;

    void add_card(Card card) {
    }
};

class Game {
public:
    int trump;

    void round(Player attacter, Player defenser, int* card1, int* card2) {

    }
};


int main() {

    return 0;
}
