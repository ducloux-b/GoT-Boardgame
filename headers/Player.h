/*
 * Player.h
 *
 *  Created on: 28 janv. 2015
 *      Author: Benoît
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include <string>

class Player
    {
public:
    Player();
    virtual ~Player();

    int get_id() const;
    std::string get_nom_joueur() const;
    void set_nom_joueur(std::string nomJoueur);

private:
    int _id;
    static int id;
    std::string _nomJoueur;
    };

#endif /* SRC_PLAYER_H_ */
