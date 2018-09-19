#include "Move.hpp"
/*
Move::Move( GameObject *parent, std::string type ): parent(parent), type(type){
	std::cout << type << " constructed" << std::endl;
}

Move::Move( void ){
}
*/
Move::~Move( void ){
	std::cout << type << " destructed" << std::endl;
}
/*
void	Move::run( void ){
	std::cout << type << " run()" << std::endl;
}
*/