#ifndef LEVELMANAGER_HPP
# define LEVELMANAGER_HPP

# include <vector>
# include <iostream>
# include <cassert>

# include "LevelManager.hpp"
//# include "GameObject.hpp"

class LevelManager {
public:
	LevelManager( int level );
	LevelManager( void );
	~LevelManager( void );

	void		generateMap( void );
	//void		checkDeadEnds( void );
	//int/*GameObject	**/placeObjects( void ); // may take level int in future;
	void		placeEnemies( void );
	void		placePowerups( void );
	void		placeDoor( void );

	void	debugPrintMap( void ); // debug // test

	static int			level;
	static int			enemies;
	static int			walls;
	int					mapWidth;
	int					mapHeight;
	std::vector<int>	testMap; // map = vector of game objects // breakable walls can "contain" other objects // can have predetermined or drop based on rng

protected:

private:

};

#endif