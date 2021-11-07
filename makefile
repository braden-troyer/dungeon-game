

main : main.o game.o entity.o enemies.o spritesheet.o background.o
	g++ -o main $^ -lsfml-graphics -lsfml-window -lsfml-system

main.o : src/main.cpp include/game.hpp src/game.cpp
	g++ -c src/main.cpp -Iinclude

game.o : src/game.cpp include/game.hpp include/spritesheet.hpp src/spritesheet.cpp include/macros.hpp include/enemies.hpp src/enemies.cpp
	g++ -c src/game.cpp -Iinclude

entity.o : src/entity.cpp include/entity.hpp 
	g++ -c src/entity.cpp -Iinclude

enemies.o : src/enemies.cpp include/enemies.hpp include/entity.hpp src/entity.cpp
	g++ -c src/enemies.cpp -Iinclude

spritesheet.o : src/spritesheet.cpp include/spritesheet.hpp include/macros.hpp
	g++ -c src/spritesheet.cpp -Iinclude

background.o : src/background.cpp include/background.hpp include/spritesheet.hpp src/spritesheet.cpp include/macros.hpp
	g++ -c src/background.cpp -Iinclude