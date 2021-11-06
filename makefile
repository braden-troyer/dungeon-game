
main : main.o game.o entity.o enemies.o spritesheet.o background.o
	g++ -o main $^ -lsfml-graphics -lsfml-window -lsfml-system

main.o : src/main.cpp include/game.hpp
	g++ -c src/main.cpp -Iinclude

game.o : src/game.cpp include/game.hpp
	g++ -c src/game.cpp -Iinclude

entity.o : src/entity.cpp include/entity.hpp
	g++ -c src/entity.cpp -Iinclude

enemies.o : src/enemies.cpp include/enemies.hpp
	g++ -c src/enemies.cpp -Iinclude

spritesheet.o : src/spritesheet.cpp include/spritesheet.hpp
	g++ -c src/spritesheet.cpp -Iinclude

background.o : src/background.cpp include/background.hpp
	g++ -c src/background.cpp -Iinclude