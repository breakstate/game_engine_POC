#ifndef GAMEOBJECT_HPP
# define GAMEOBJECT_HPP

# include <string>
# include <vector>

# include "enumGameObjectState.hpp"

class GameObject {
public:
	GameObject( ObjectManager & OM, std::string type );
	GameObject( void );
	~GameObject( void );

	//addComponent
	//getComponent

	ObjectManager			*OM;
	vector3d				position;
	float					velocity;
	std::string				type;
	int						id;
	std::vector<Component>	components;
	eGameObjectState		state;
	Powerup					*powerup; // think about how bombs are ordered when powerup is active
	//type				currentDirection;

protected:

private:

};

#endif