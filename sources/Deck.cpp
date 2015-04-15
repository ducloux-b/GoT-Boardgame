/*
 * Deck.cpp
 *
 *  Created on: 18 avr. 2013
 *      Author: Beno�t
 */

#include "Deck.h"

Deck::Deck()
    {
    _nbCards= 0;
    }

Deck::~Deck()
    {
    }

void Deck::addCard(std::map<std::string,std::string> attributes)
    {
    Card tmpCard;
    tmpCard.setAttributes(attributes);
    _cards.push_back(tmpCard);
    _nbCards++;
    }

Card& Deck::drawCard()
    {
    // on va se deplacer dans le vecteur en utilisant cet indice
    static int firstCard= 1;
    if(firstCard>this->getNbCards())
	{
	/*!!!!!!!!!!!!!!!!!!!!*/
	/*dans Game of thrones, on remet les cartes sous les paquets de carte evenements, on reprend donc le paquet dans l'ordre, mais cela ne devrait pas arriver a cause des cartes de melangeage*/
	firstCard= 1;
	}
    Card& res= getNthCard(firstCard);
    firstCard++;
    return (res);
    }

void Deck::shuffleDeck()
    {
    std::random_shuffle(_cards.begin(), _cards.end());
    }

int Deck::getNbCards() const
    {
    return (_nbCards);
    }

Card& Deck::useNthCard(int n)
    {
    _cemetery.push_back(_cards.at(n-1));
    _cards.erase(_cards.begin()+(n-1));
    return (_cemetery.at(_cemetery.size()-1));
    }

Card& Deck::useCardNamed(std::string nom)
    {
    int i= 0;
    while(_cards.at(i).getAttribute("nom").compare(nom)!=0)
	{
	i++;
	}
    return (this->useNthCard(i));
    }

Card& Deck::getNthCard(int whatCard)
    {
    return (_cards.at(whatCard));
    }

std::vector<Card> Deck::getCemetery() const
    {
    return (_cemetery);
    }

void Deck::setCemetery(std::vector<Card> cemetery)
    {
    _cemetery= cemetery;
    }

void Deck::echo()
    {
    std::cout<<"_______________________________________________"<<std::endl;
    std::cout<<"Deck!hep, Deck!"<<std::endl;
    int nbCards= this->getNbCards();
    for(int n_card= 0 ; n_card<nbCards ; ++n_card)
	{
	getNthCard(n_card).echo();
	std::cout<<"-----------------------------------------"<<std::endl;
	}
    std::cout<<"_______________________________________________"<<std::endl;
    }
