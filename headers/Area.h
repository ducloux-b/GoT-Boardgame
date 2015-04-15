/*
 * Area.h
 *
 *  Created on: 18 avr. 2013
 *      Author: Benoit
 */

/*
 * Used to define a region of the Map
 */

#ifndef AREA_H_
#define AREA_H_

#include <string>
#include <vector>
#include"Pawn.h"
#include"Token.h"

class Area
  {
public:
  Area(std::string name, std::string type);
  virtual ~Area();

  std::vector< Area* > getConnections() const;
  void setConnections(std::vector< Area* > connections);
  int getId() const;
  std::string getName() const;
  int getNumberOfConnections() const;
  void setNumberOfConnections(int numberOfConnections);
  std::string getType() const;
  std::vector< Pawn > getPawns() const;
  void setPawns(std::vector< Pawn > pawns);
  std::vector< Token > getTokens() const;
  void setTokens(std::vector< Token > tokens);

private:
  int _id;
  std::string _name; //name|ID
  std::string _type; //ocean,land,iceland,moutain,...

  /*on cree les area sans les connections, puis on fera un second passage pour terminer le remplissage*/
  int _numberOfConnections;
  std::vector< Area* > _connections; /*ATTENTION: on ne peut pas faire de vecteur de références car il n'y a pas d'opérateur d'affectation sur les références*/

  std::vector< Pawn > _pawns;//liste des pions d'armée présents
  std::vector< Token > _tokens;//liste des tokens d'action présents
  };

#endif /* AREA_H_ */
