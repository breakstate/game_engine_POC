#ifndef COMPONENT_HPP
# define COMPONENT_HPP

# include <string>

# include "GameObject.hpp"

class Component {
public:
	Component( GameObject *parent );
	Component( void );
	~Component( void );
	void run( void ); // input param?

	std::string	type;
	GameObject	*parent;

protected:

private:

};

#endif