#include "Factory.hpp"

Factory::Factory( void ){
	std::cout << "Factory constructed" << std::endl;
}

Factory::~Factory( void ){
	std::cout << "Factory destructed" << std::endl;
}

GameObject	*Factory::getObject( std::string type, Powerup *powerup ){
	GameObject *Object = new GameObject( type, powerup );
	if (type == "Player"){
		Object->components.push_back(this->getMove());
		Object->components.push_back(this->getRender());
	}
	else if (type == "Enemy"){
		Object->components.push_back(this->getMove());
		Object->components.push_back(this->getRender());
	}
	else if (type == "SolidWall"){
		Object->components.push_back(this->getRender());
	}
	else if (type == "Wall"){
		Object->components.push_back(this->getRender());
	}
	else if (type == "SolidWall"){

	}

}

GameObject	*Factory::getMove( void ){

}

GameObject	*Factory::getBomb( void ){

}

GameObject	*Factory::getRender( void ){

}
