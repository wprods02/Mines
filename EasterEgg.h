#ifndef EASTEREGG_H
#define EASTEREGG_H

#include <SFML/Graphics.hpp>
#include "Texture.h"
#include "GameState.h"
#include <iostream>

class EasterEgg {
public:
    EasterEgg();
    void checkStatus(double& bank, GameState gamestate, sf::Event& event);
    void update(sf::Event& event, double& bank);
    void processGameResult(double multiplier, double& bank);
    void activatePhone();
    void renderPhone(sf::RenderWindow& window);
    void checkStep4(double bank, double wagerAmount, GameState gamestate);

    // Easter egg steps management
    void handleAllInBet(double& bank);
    void handleGameOutcome(double& bank, bool gameWon);
    void manageEndGameScenarios(double& bank);

    // Getters for rendering decisions
    bool isPhoneActive() const;
    bool phoneVisible;
    sf::Sprite phone;

    bool allInStep4;
    double allInAmount;

    int step;
};

#endif