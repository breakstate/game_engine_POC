#include "LevelManager.hpp"
#include <iostream>

int LevelManager::level = 0;
int LevelManager::enemies = 0;

// I think LevelManager should only come into existence when creating a level,
// then deleted. This way it can be reinitialized with the level value each time

LevelManager::LevelManager( int level ){
	srand(time(NULL));
	level = level;
	this->mapWidth = 13; // must be odd between 7 and 31
	this->mapHeight = 13; // must be odd between 7 and 31
	assert(this->mapWidth >= 7 && this->mapWidth <= 31 && this->mapHeight % 2 != 0);
	assert(this->mapHeight >= 7 && this->mapWidth <= 31 && this->mapWidth % 2 != 0);
	enemies = this->mapWidth * this->mapHeight / 50 + (level * 2);
}

LevelManager::LevelManager( void ){

}

LevelManager::~LevelManager( void ){

}

void	LevelManager::generateMap( void ){
	// using 1d vector
	// fixed map size
	// abundance of enemies and breakable bricks depends on level
	// (total vector elements / y) + x
	// totalBlocks = x*y
	int w = this->mapWidth;
	int h = this->mapHeight;
	int block = 1;
	int type;
	int line = 1;
	int	solidCountDebug = 0;
	int	openCountDebug = 0;

	for (int i = 0; i <= h * w; i++){
		type = 0;
		if (((i % w == 1) || (i % w == 0)) || ((i <= w) || (i >= (h * w) - w))){
			type = 1;
			block = 0;
		}
		else{
			// insert random objects here
			if ((i > w + 4) && (i != w * 2 + 2) && (i != w * 3 + 2)){ // keeps player start area clear
				if (rand() % 3 == 1)
					type = 2;
			}
			else
				type = 5;
			// end insert random object
			if ((i >= (w * 2 - 1)) &&
			(i < (w * h - (w * 2) - 1))){
				line++;
				block++;
				if (block % 2 == 0 && line % 2 == 0)
					type = 1;
			}
		}
		type == 1 ? solidCountDebug++ : openCountDebug++;
		this->testMap.push_back(type);
	}
	this->testMap.pop_back();
	std::cout << "solid = " << solidCountDebug << "\nopen = " << openCountDebug << std::endl;
}

//GameObject	LevelManager::*placeObjects( void );{ // may take level int in future;
//
//}

void	LevelManager::debugPrintMap( void ){ // debug // test
	std::cout << "total = " <<testMap.size() << std::endl;
	for (int i = 1; i <= testMap.size(); i++){
		std::cout << testMap[i] << " ";
		if (i % this->mapWidth == 0)
			std::cout << std::endl;
	}
}
/*
void	LevelManager::checkDeadEnds( void ){

}
*/
void	LevelManager::placeEnemies( void ){

}

void	LevelManager::placePowerups( void ){

}

void	LevelManager::placeDoor( void ){

}
