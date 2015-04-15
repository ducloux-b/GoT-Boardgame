/*
 * Deck.h
 *
 *  Created on: 18 avr. 2013
 *      Author: Beno�t
 */
/*
 * used to define descks of cards (events, family members...)
 */
#ifndef DECK_H_
#define DECK_H_

#include <iostream>
#include "Card.h"
#include <algorithm>

class Deck
  {
public:
  Deck();
  ~Deck();

  void addCard(std::map< std::string , std::string > attributes);
  Card& drawCard();
  void shuffleDeck();
  Card& useNthCard(int);
  Card& useCardNamed(std::string);
  std::vector< Card > getCemetery() const;
  void setCemetery(std::vector< Card > cemetery);

  void echo();

private:
  int _nbCards;
  std::vector< Card > _cards;
  /*on va pour chaque deck avoir un cimetiere...a la magic the gathering*/
  std::vector< Card > _cemetery;

  int getNbCards() const;
  Card& getNthCard(int whatCard); /*numerotees de 1 a x avec acces en (1-1) pour la premiere*/

  };
#endif /* DECK_H_ */
