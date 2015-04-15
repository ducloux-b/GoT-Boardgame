/*
 * Attribute.cpp
 *
 *  Created on: 30 août 2013
 *      Author: benoit
 */

#include "Attribute.h"

Attribute::Attribute(std::vector< std::string > attribute):
  _attribute(attribute)
  {
  }

Attribute::~Attribute()
  {
  }

std::vector< std::string > Attribute::getAttribute() const
  {
  return (_attribute);
  }

void Attribute::setAttribute(std::vector< std::string > attribute)
  {
  _attribute= attribute;
  }

