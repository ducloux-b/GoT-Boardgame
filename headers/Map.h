/*
 * Map.h
 *
 *  Created on: 18 avr. 2013
 *      Author: Beno�t
 */
/*
 * Used as the board-game
 */
#ifndef MAP_H_
#define MAP_H_

#include<vector>
#include"Area.h"

class Map
  {
public:
  Map(std::string, std::vector< std::vector<std::string> > areas);
  virtual ~Map();

private:
  std::string _name;//bah, pour l'instant ça risque d'être westeros XD
  std::vector< Area* > _areas;//la liste des emplacements de la carte
  };

#endif /* MAP_H_ */
