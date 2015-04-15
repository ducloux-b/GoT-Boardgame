/*
 * Map.cpp
 *
 *  Created on: 18 avr. 2013
 *      Author: Beno�t
 */

#include "Map.h"

Map::Map(std::string name, std::vector< std::vector< std::string > > areas) :
	_name(name)
  {
  int nbArea= areas.size();
  Area tmpArea("","");
  for(int i= 0 ; i < nbArea ; ++i)
	{
	//tmpArea.Area(areas.at(i).at(0),areas.at(i).at(1));
	_areas.push_back(new Area(areas.at(i).at(0),areas.at(i).at(1)));
	}
  }

Map::~Map()
  {
  }

