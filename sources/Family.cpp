/*
 * Family.cpp
 *
 *  Created on: 18 avr. 2013
 *      Author: Beno�t
 */

#include "Family.h"

int Family::id= 0;

Family::Family(
	std::string nomFamily,
	std::map<std::string,std::map<std::string,std::string> > family, //les informations nécessaires à la création du deck de la family
	std::map<std::string,int> pawns,
	std::map<std::string,int> tokens)
    {
    //notons qu'ici, nous n'avons pas encore choisis qui joue quoi, donc, l'id n'est pas encore associé à un joueur
    _id= id;
    id++;
    _nomFamily= nomFamily;

    std::map<std::string,std::map<std::string,std::string> >::iterator iterator_family;
    for(iterator_family= family.begin(); iterator_family!=family.end() ;
	    ++iterator_family)
	{
	//on crée déjà l'attribut "nom" de la carte de personnage
	Card * carte= new Card();
	carte->addAttribute("nom", iterator_family->first);
	std::map<std::string,std::string> attributs_membre_family=
		iterator_family->second;
	std::map<std::string,std::string>::iterator iterator_attributs;
	for(iterator_attributs= attributs_membre_family.begin();
		iterator_attributs!=attributs_membre_family.end() ;
		++iterator_attributs)
	    {
	    carte->addAttribute(iterator_attributs->first,
		    iterator_attributs->second);
	    }
	}

    }

Family::~Family()
    {
    // TODO Auto-generated destructor stub
    }

void Family::echo()
    {
    std::cout<< "nom famille    :" << _nomFamily <<std::endl;
    std::cout<< "_id famille    :" << _id <<std::endl;
    std::cout<< "_id joueur     :" << _idPlayer <<std::endl;
    std::cout<< "membres famille:" << std::endl;
    _family.echo();

    std::cout<<"pions          :"<<std::endl;
    for(unsigned int var= 0 ; var<_pawns.size() ; ++var)
	{
	_pawns.at(var).echo();
	}

    std::cout<<"tokens         :"<<std::endl;
    for(unsigned int var2= 0 ; var2<_tokens.size() ; ++var2)
	{
	_tokens.at(var2).echo();
	}

    }

