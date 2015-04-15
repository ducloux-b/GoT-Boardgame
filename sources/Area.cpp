/*
 * Area.cpp
 *
 *  Created on: 18 avr. 2013
 *      Author: Beno�t
 */

#include "Area.h"

Area::Area(std::string name, std::string type) :
	_name(name), _type(type)
  {
  static int identifiant=0;
  _id=identifiant;
  identifiant++;
  }

Area::~Area()
  {
  }

std::vector< Area* > Area::getConnections() const
  {
  return (_connections);
  }

void Area::setConnections(std::vector< Area* > connections)
  {
  _connections= connections;
  }

int Area::getId() const
  {
  return (_id);
  }

std::string Area::getName() const
  {
  return (_name);
  }

int Area::getNumberOfConnections() const
  {
  return (_numberOfConnections);
  }

void Area::setNumberOfConnections(int numberOfConnections)
  {
  _numberOfConnections= numberOfConnections;
  }

std::string Area::getType() const
  {
  return (_type);
  }

std::vector< Pawn > Area::getPawns() const
  {
  return (_pawns);
  }

void Area::setPawns(std::vector< Pawn > pawns)
  {
  _pawns= pawns;
  }

std::vector< Token > Area::getTokens() const
  {
  return (_tokens);
  }

void Area::setTokens(std::vector< Token > tokens)
  {
  _tokens= tokens;
  }


