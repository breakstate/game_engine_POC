#ifndef COMPONENT_HPP
# define COMPONENT_HPP

# include <string>
# include <iostream>

# include "GameObject.hpp"

class Component {
public:
	Component( GameObject *parent, std::string type );
	Component( void );
	~Component( void );
	void run( void ); // input param?

	std::string	type;
	GameObject	*parent;

protected:

private:

};

#endif