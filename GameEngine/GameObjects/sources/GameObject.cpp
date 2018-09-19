#include "GameObject.hpp"

GameObject::GameObject( eGameObjectType type, Vector3d position ) : eType(type), position(position){
	this->eType = type;
}

GameObject::GameObject( void ){
}

GameObject::~GameObject( void ){
}
