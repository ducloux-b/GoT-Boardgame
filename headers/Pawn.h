/*
 * Pawn.h
 *
 *  Created on: 2 sept. 2013
 *      Author: benoit
 */

#ifndef PAWN_H_
#define PAWN_H_

#include<iostream>
#include<string>

class Pawn
  {
public:
  Pawn(std::string);
  virtual ~Pawn();

  std::string getType() const;
  void setType(std::string type);
  int getArea() const;

  void echo();

private:
  std::string _type; /*footman, knight, ship*/
  int _idArea;//l'area dans laquelle se trouve le pion
  };

#endif /* PAWN_H_ */
