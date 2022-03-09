#include <iostream>
#include <string>

using namespace std;


class {
};


class Card {
public:
    int num;
    string suit;
};

class Player {
public:
    Card* cards;
};

class Game {
public:
    int trump;

    void round(Player attacter, Player defenser, int* card1, int* card2) {
        //Функция будет смотреть, покрывают ли карты 2 игрока карты первого и в зависимости от результата убирать карты из рук игроков или выдавать ошибку
    }
};


int main() {

    return 0;
}