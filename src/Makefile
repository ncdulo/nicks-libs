all: nicks-libs

nicks-libs: Game.o Input.o Output.o
	g++ Game.o Input.o Output.o -o nicks-libs
	
Game.o: Game.cpp
	g++ -c Game.cpp

Input.o: Input.cpp
	g++ -c Input.cpp

Output.o: Output.cpp
	g++ -c Output.cpp

clean:
	rm -rf *.o nicks-libs
