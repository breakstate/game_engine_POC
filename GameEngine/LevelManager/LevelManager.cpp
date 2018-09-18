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
	for (int i = 0; i <= 81; i++){
		if (((i%9 == 1) || (i%9 == 0)) || ((i <= 9) || (i >= 81 - 9))){
			std::cout << i << " and 1" << std::endl; // debug
			this->testMap.push_back(1);
		}
		else{
			std::cout << i << " and 0" << std::endl; // debug
			this->testMap.push_back(0);
		}
	}
}

void	LevelManager::debugPrintMap( void ){ // debug // test
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
