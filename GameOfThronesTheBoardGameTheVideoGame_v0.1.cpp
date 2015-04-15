//============================================================================
// Name        : GameOfThronesTheBoardGameTheVideoGame.cpp
// Author      : G-LOFAI
// Version     : 0.1
// Copyright   : GPL v2
// Description : construction du coeur
//============================================================================

#include <iostream>
#include <string>
#include <vector>

#include "TinyXML2/tinyxml2.h"

#include"Area.h"
#include"Attribute.h"
#include"Card.h"
#include"Deck.h"
#include"Family.h"
#include"Game.h"
#include"Map.h"
#include"Pawn.h"
#include"Token.h"

int main (/*int argc, char *argv[]*/)
  {
  std::cout << "Hello Westeros!" << std::endl; // prints Hello Westeros!

  std::map<std::string, std::string> atrs1;
  atrs1.insert(std::pair<std::string, std::string>("paquet", "II"));
  atrs1.insert(std::pair<std::string, std::string>("nom", "Clash of Kings"));
  atrs1.insert(
               std::pair<std::string, std::string>("description",
                                                   "Bid on the three Areas of Influence"));

  Card testeu(atrs1);
  //testeu.echo();

  std::map<std::string, std::string> atrs2;
  atrs2.insert(std::pair<std::string, std::string>("paquet", "III"));
  atrs2.insert(std::pair<std::string, std::string>("nom", "Clash of Knights"));
  atrs2.insert(
               std::pair<std::string, std::string>("description", "Fight!!"));

  std::map<std::string, std::string> atrs3;
  atrs3.insert(std::pair<std::string, std::string>("paquet", "IV"));
  atrs3.insert(std::pair<std::string, std::string>("nom", "Clash!!"));
  atrs3.insert(
               std::pair<std::string, std::string>("description", "Simply the clash!"));

  Deck deck_testeu;
  deck_testeu.addCard(atrs1);
  deck_testeu.addCard(atrs2);
  deck_testeu.addCard(atrs3);
  //deck_testeu.echo();

  std::map<std::string, std::map<std::string, std::string> > deck_testeu_family;
  deck_testeu_family.insert(std::pair<std::string, std::map<std::string, std::string> >("atrs1", atrs1));
  deck_testeu_family.insert(std::pair<std::string, std::map<std::string, std::string> >("atrs2", atrs2));
  deck_testeu_family.insert(std::pair<std::string, std::map<std::string, std::string> >("atrs3", atrs3));
  std::map< std::string, int > pawns_testeu_family;
  pawns_testeu_family.insert(std::pair<std::string, int>("soldat", 2));
  pawns_testeu_family.insert(std::pair<std::string, int>("chevalier", 1));
  std::map< std::string, int > tokens_testeu_family;
  tokens_testeu_family.insert(std::pair<std::string, int>("attaquer", 1));
  tokens_testeu_family.insert(std::pair<std::string, int>("brûler", 3));

  Family family_testeu("testeu", deck_testeu_family, pawns_testeu_family, tokens_testeu_family);
  family_testeu.echo();

  tinyxml2::XMLDocument doc;
  doc.LoadFile("testeu.xml");

  for (tinyxml2::XMLElement* child = doc.FirstChildElement("game")->FirstChildElement("houses")->FirstChildElement("house"); child != 0; child = child->NextSiblingElement())
    {
    std::cout << "nom maison = " << child->FirstChildElement("name")->GetText() << std::endl;
    }

  //return (0);
  }


