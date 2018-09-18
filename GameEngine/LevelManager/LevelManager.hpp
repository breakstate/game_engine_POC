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