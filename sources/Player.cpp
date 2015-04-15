/*
 * Player.cpp
 *
 *  Created on: 28 janv. 2015
 *      Author: Benoît
 */

#include "Player.h"

Player::Player()
    {
    // TODO Auto-generated constructor stub

    }

Player::~Player()
    {
    }


int Player::get_id() const
	{
	return (_id);
	}

std::string Player::get_nom_joueur() const
	{
	return (_nomJoueur);
	}

void Player::set_nom_joueur(std::string nomJoueur)
	{
	_nomJoueur= nomJoueur;
	}
