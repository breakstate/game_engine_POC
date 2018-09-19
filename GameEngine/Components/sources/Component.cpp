#include "Component.hpp"

Component::Component( GameObject *parent, std::string type ): parent(parent), type(type){
	std::cout << type << " constructed" << std::endl;
}

Component::Component( void ){
}

Component::~Component( void ){
	std::cout << type << " destructed" << std::endl;
}

void	Component::run( void ){
	std::cout << type << " run()" << std::endl;
}