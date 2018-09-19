#ifndef GAMEOBJECT_HPP
# define GAMEOBJECT_HPP

# include <string>
# include <vector>

# include "enumGameObjectState.hpp"
# include "Vector3d.hpp"
# include "Component.hpp"
# include "Powerup.hpp"

class GameObject {
public:
	GameObject( std::string type, Powerup *powerup );
	GameObject( void );
	~GameObject( void );

	//addComponent
	//getComponent

	// model
	// sprite
	//ObjectManager			*OM;
	Vector3d				position;
	float					velocity;
	std::string				type;
	int						id;
	std::vector<*Component>	components;
	eGameObjectState		state;
	//Powerup					*powerup; // think about how bombs are ordered when powerup is active
	//type				currentDirection;

protected:

private:

};

#endif