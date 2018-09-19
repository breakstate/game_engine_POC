#ifndef FACTORY_HPP
# define FACTORY_HPP

# include <string>

# include "Factory.hpp"
# include "GameObject.hpp"
# include "Powerup.hpp"

class Factory {
public:
	Factory( void );
	~Factory( void );

	GameObject	*getObject( std::string type, Powerup *powerup);
	GameObject	*getMove( void );
	GameObject	*getBomb( void );
	GameObject	*getRender( void );

protected:

private:

};

#endif