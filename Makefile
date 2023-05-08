CXX = gcc
CXXFLAGS = -I/usr/local/include/SDL2
LDFLAGS = -L/usr/local/lib
LDLIBS = -lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer

ifeq ($(OS),Windows_NT)
    LDFLAGS += -L/mingw64/lib
    LDLIBS += -lmingw32 -lSDL2main
else
    UNAME_S := $(shell uname -s)
    ifeq ($(UNAME_S),Darwin)
        LDFLAGS += -framework Cocoa
    endif
endif

example: examples/example.c
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ $(LDLIBS) -o build/$@

run: example
	./build/example