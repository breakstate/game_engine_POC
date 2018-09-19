#include "GameObject.hpp"

GameObject::GameObject( std::string type, Powerup & powerup ){
	this->type = type;
	this->OM = OM;
	this->powerup = powerup; // can be NULL;
}

GameObject::GameObject( void ){
}

GameObject::~GameObject( void ){
	for (int i = 0; i < components.size(); i++){
		delete components[i];
	}
}
