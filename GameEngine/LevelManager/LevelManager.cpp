#include "LevelManager.hpp"
#include <iostream>

LevelManager::LevelManager( int level ){
	//this->level = level;
	this->mapWidth = 9;
	this->mapHeight = 9;
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
	int block = 1;
	int type;
	int line = 1;
	for (int i = 0; i <= 81; i++){
		type = 0;
		if (((i%9 == 1) || (i%9 == 0)) || ((i <= 9) || (i >= 81 - 9))){
			type = 1;
			block = 0;
		}
		else{
			if ((i >= (this->mapWidth * 2 - 1)) && (i < (this->mapWidth * this->mapHeight - this->mapWidth * 2 - 1))){
				line++;
				block++;
				if (block % 2 == 0 && line % 2 == 0)
					type = 1;
				else
					type = 0;
			}
		}
		this->testMap.push_back(type);
	}
	this->testMap.pop_back();
}

void	LevelManager::debugPrintMap( void ){ // debug // test
	std::cout << testMap.size() << std::endl;
	for (int i = 1; i <= testMap.size(); i++){
		std::cout << testMap[i];
		if (i % 9 == 0)
			std::cout << std::endl;
	}
}

void	LevelManager::checkDeadEnds( void ){

}

void	LevelManager::spawnEnemies( void ){

}

void	LevelManager::placePowerups( void ){

}

void	LevelManager::placeDoor( void ){

}
