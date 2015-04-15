/*
 * Pawn.cpp
 *
 *  Created on: 2 sept. 2013
 *      Author: benoit
 */

#include "Pawn.h"

Pawn::Pawn(std::string type):
_type(type),_idArea(-1)
  {
  }

Pawn::~Pawn()
  {
  // TODO Auto-generated destructor stub
  }

std::string Pawn::getType() const
  {
  return (_type);
  }

void Pawn::setType(std::string type)
  {
  _type= type;
  }

void Pawn::echo()
    {
    std::cout << "type    :" << _type << std::endl;
    std::cout << "position:" << _idArea << std::endl;
    }
