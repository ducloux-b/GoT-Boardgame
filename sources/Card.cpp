/*
 * Card.cpp
 *
 *  Created on: 30 août 2013
 *      Author: benoit
 */

#include "Card.h"

int Card::id = 0;

Card::Card()
    {
    _id = id;
    id++;
    }
Card::Card(std::map<std::string,std::string> attributes)
    {
    _id = id;
    id++;
    _attributes = attributes;
    }
//constructeur de recopie
Card::Card(const Card& card)
    {
    _id = card.getId();
    _attributes = card.getAttributes();
    }
//destructeur
Card::~Card()
    {
    }

std::map<std::string,std::string> Card::getAttributes() const
    {
    return (_attributes);
    }
std::string Card::getAttribute(std::string key) const
    {
    return (_attributes.at(key));
    }

int Card::getId() const
    {
    return(_id);
    }
int Card::operator==(const Card& otherCard)
    {
    //on va considérer que c'est la "même" carte si il y a le même nombre d'attributs
    //et si tous les attributs sont les mêmes
    return (0);
    }

void Card::addAttribute(std::string cle, std::string valeur)
    {
    _attributes.insert(std::make_pair(cle,valeur));
    }

void Card::setAttributes(std::map<std::string,std::string> attributes)
    {
    _attributes = attributes;
    }
void Card::setId(int id)
    {
    _id = id;
    }

void Card::echo()
    {
    std::cout<< "id: "<<_id<<std::endl;

    std::map< std::string , std::string >::iterator iterator_attributes;
    for (iterator_attributes = _attributes.begin() ; iterator_attributes != _attributes.end(); ++iterator_attributes)
	{
	std::cout<< iterator_attributes->first <<": " << iterator_attributes->second <<std::endl;
    	}
    }
