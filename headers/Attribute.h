/*
 * Attribute.h
 *
 *  Created on: 30 août 2013
 *      Author: benoit
 */

#ifndef ATTRIBUTE_H_
#define ATTRIBUTE_H_

#include <string>
#include <vector>

class Attribute
  {
public:
  Attribute(std::vector< std::string > attribute);
  virtual ~Attribute();

  std::vector< std::string > getAttribute() const;
  void setAttribute(std::vector< std::string > attribute);

private:
  std::vector< std::string > _attribute;
  };

#endif /* ATTRIBUTE_H_ */
