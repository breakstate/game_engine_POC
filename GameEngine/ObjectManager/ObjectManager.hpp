#ifndef OBJECTMANAGER_HPP
# define OBJECTMANAGER_HPP

# include "ObjectManager.hpp"
# include "GameObject.hpp"

class ObjectManager {
public:
	ObjectManager( void ); // may need reference to playstate
	~ObjectManager( void );

	void	update(eControl key, double deltaTime);
	void	canMove(GameObject *GameObject, eControl key); // returns direction // or void and calls move directly
	void	checkCollision( void );

	GameObject	*gameObjects[];

protected:

private:

};

#endif