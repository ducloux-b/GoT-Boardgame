/*
 * Family.h
 *
 *  Created on: 18 avr. 2013
 *      Author: Beno�t
 */
/*
 * Used to define a Family
 */
#ifndef FAMILY_H_
#define FAMILY_H_

#include<iostream>
#include "Deck.h"
#include "Pawn.h"
#include "Token.h"
#include <string>
#include <map>

class Family
  {
public:
  Family(std::string nomFamily,
	 std::map< std::string , std::map< std::string , std::string > > family,//les informations nécessaires à la création du deck de la family
	 std::map< std::string , int > pawns,
	 std::map< std::string, int > tokens
	 );
  virtual ~Family();

  int getId();
  std::string getNomFamily();
  void utiliserMembreDeLaFamily(int idMembre);
  bool pionDisponible(std::string type);//le type nous permet de savoir si un pion de ce type particulier peut ête placé
  void positionnerPion(std::string type, int idArea);//on positionne le pion sur l'area déterminée

  void echo();

private:
  int _id;//je ne suis pas un numér...hooo...si en fait
  static int id;
  int _idPlayer;
  std::string _nomFamily;//bah, ouais, loup, rose, calamar,...
  Deck _family;//le deck de personnages de sa family
  std::vector< Pawn > _pawns;//on a un nombre fixé de pions de chaque type pour toute une partie
  std::vector< Token > _tokens;//on a un coeur central de token d'actions qui ne change pas, mais on a des tokens spéciaux que l'on peut obtenir en fonction de son classement dans les catégories

  };

#endif /* FAMILY_H_ */
