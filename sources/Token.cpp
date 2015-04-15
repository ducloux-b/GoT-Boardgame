/*
 * Token.cpp
 *
 *  Created on: 2 sept. 2013
 *      Author: benoit
 */

#include "Token.h"

Token::Token(std::string type) :
	_type(type)
  {
  }

Token::~Token()
  {
  // TODO Auto-generated destructor stub
  }

std::string Token::getType() const
  {
  return (_type);
  }

void Token::echo()
    {
    std::cout << "type    :" << _type << std::endl;
    }
