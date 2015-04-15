/*
 * Token.h
 *
 *  Created on: 2 sept. 2013
 *      Author: benoit
 */

#ifndef TOKEN_H_
#define TOKEN_H_

#include<iostream>
#include<string>

class Token
  {
public:
  Token(std::string type);
  virtual ~Token();
  std::string getType() const;

  void echo();

private:
  std::string _type;

  };

#endif /* TOKEN_H_ */
