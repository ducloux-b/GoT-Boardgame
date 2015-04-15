/*
 * Card.h
 *
 *  Created on: 30 août 2013
 *      Author: benoit
 */

#ifndef CARD_H_
#define CARD_H_

#include <iostream>
#include <string>
#include <map>
#include "Attribute.h"

class Card
  {
public:
  Card();
  Card(std::map< std::string , std::string > attributes);
  Card(const Card& card);
  ~Card();

  std::map< std::string , std::string > getAttributes() const;
  std::string getAttribute(std::string key) const;

  int getId() const;
  int operator==(const Card& otherCard);
  void addAttribute(std::string cle, std::string valeur);
  void setAttributes(std::map< std::string , std::string > attributes);
  void setId(int id);

  void echo();

private:
  /*id, combat strength, name, img, fortification, sword, special ability*/
  int _id;
  static int id;
  std::map< std::string , std::string > _attributes;//<nom_attribut,valeur_attribut>
  };

#endif /* CARD_H_ */
