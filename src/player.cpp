#include "player.hpp"
# include <iostream>
using namespace std;

Player::Player() {
    name = "";
    isWhite = false;
    timer = 0;
    cout << "in player.cpp" << endl;
};
Player::Player(std::string name, bool isWhite, float timeLimit)
    : name(name), isWhite(isWhite), timer(timeLimit) {
    cout << "in player.cpp" << endl;
    }

string Player::getName() const {
    return name;
}

void Player::setName(const string& playerName) {
    name = playerName;
}

bool Player::getIsWhite() const{
    return this->isWhite;
}

void Player::setIsWhite(bool isWhite) {
    this->isWhite = isWhite;
}

void Player::updateTimer(float deltaTime) {
    timer.update();  
}

void Player::drawTimer(sf::RenderWindow& window)  {
    timer.draw(window);  
}