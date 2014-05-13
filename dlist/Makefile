CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.cpp CDList.cpp CDNode.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=dlist

all: $(SOURCES) $(EXECUTABLE)
		
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm *.o
