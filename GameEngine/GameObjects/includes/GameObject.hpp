#ifndef GAMEOBJECT_HPP
# define GAMEOBJECT_HPP

# include <string>
# include <vector>

# include "enumGameObjectState.hpp"
# include "enumGameObjectType.hpp"
# include "Vector3d.hpp"

class GameObject {
public:
	GameObject( eGameObjectType type, Vector3d position );
	GameObject( void );
	~GameObject( void );

	//addComponent
	//getComponent

	std::string				modelPath;
	std::string				spritePath;
	Vector3d				position;
	float					velocity;
	eGameObjectState		state;
	eGameObjectType			eType;
	std::string				strType;
	float					currentDirection;
	int						hitPoints;
	bool					mortal;
	//Powerup					*powerup; // think about how bombs are ordered when powerup is active

protected:

private:

};

#endif