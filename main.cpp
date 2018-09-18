#include "GameEngine/LevelManager/LevelManager.hpp"

int		main()
{
	LevelManager LM(1);
	LM.generateMap();
	LM.debugPrintMap();
	return (0);
}