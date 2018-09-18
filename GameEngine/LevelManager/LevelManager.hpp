#ifndef LEVELMANAGER_HPP
# define LEVELMANAGER_HPP

# include <vector>
# include <iostream>

# include "LevelManager.hpp"

class LevelManager {
public:
	LevelManager( int level );
	LevelManager( void );
	~LevelManager( void );

	void	generateMap( void );
	void	checkDeadEnds( void );
	void	spawnEnemies( void );
	void	placePowerups( void );
	void	placeDoor( void );
	void	debugPrintMap( void ); // debug // test

	//static int			level;
	int					mapWidth;
	int					mapHeight;
	std::vector<int>	testMap; // map = vector of game objects // breakable walls can "contain" other objects // can have predetermined or drop based on rng

protected:

private:

};

#endif
/*
void	LevelManager::generateMap( void ){
	// using 1d vector
	// fixed map size
	// abundance of enemies and breakable bricks depends on level
	// (total vector elements / y) + x
	// totalBlocks = x*y
	int block = 0;
	for (int i = 0; i <= this->mapWidth * this->mapHeight; i++){
		if (((i%9 == 1) || (i%9 == 0)) || ((i <= 9) || (i >= 81 - 9))){
			std::cout << i << " a1d 1" << std::endl; // debug
			this->testMap.push_back(1);
		}
		else //if ((i > (this->mapWidth * 2)) && (i < (this->mapWidth * this->mapHeight - this->mapWidth * 2))){
			//	block++;
			//	std::cout << i << " a2d " << block << std::endl; // debug
			//if (block % 2 == 0){
			//	std::cout << i << " a3d 1" << std::endl; // debug
			//	this->testMap.push_back(1);
			//}
			//else{
				std::cout << i << " a4d 0" << std::endl; // debug
				this->testMap.push_back(0);
		//	}
	//	}
	}
}*/