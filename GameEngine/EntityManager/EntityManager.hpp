#ifndef ENTITYMANAGER_HPP
# define ENTITYMANAGER_HPP

# include "EntityManager.hpp"
# include "GameObject.hpp"

class EntityManager {
public:
	EntityManager( void ); // may need reference to playstate
	~EntityManager( void );

	void	update(eControl key, double deltaTime);
	void	canMove(GameObject *GameObject, eControl key); // returns direction // or void and calls move directly
	void	checkCollision( void );

	GameObject	*gameObjects[];

protected:

private:

};

#endif