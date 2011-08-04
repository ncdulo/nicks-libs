CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=Game.cpp Input.cpp Output.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=nick-libs

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *.o $(EXECUTABLE)
