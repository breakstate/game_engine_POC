#include "Render.hpp"
/*
Render::Render( GameObject *parent, std::string type ): parent(parent), type(type){
	std::cout << type << " constructed" << std::endl;
}

Render::Render( void ){
}
*/
Render::~Render( void ){
	std::cout << type << " destructed" << std::endl;
}
/*
void	Render::run( void ){
	std::cout << type << " run()" << std::endl;
}
*/