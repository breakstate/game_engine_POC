#include "Bomb.hpp"
/*
Bomb::Bomb( GameObject *parent, std::string type ): parent(parent), type(type){
	std::cout << type << " constructed" << std::endl;
}

Bomb::Bomb( void ){
}
*/
Bomb::~Bomb( void ){
	std::cout << type << " destructed" << std::endl;
}
/*
void	Bomb::run( void ){
	std::cout << type << " run()" << std::endl;
}
*/