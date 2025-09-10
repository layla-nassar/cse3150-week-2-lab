CXX := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -Wpedantic -Iinclude

APP := parser_app
SRC := $(wildcard src/*.cpp)
OBJ := $(SRC:.cpp=.o)

all: $(APP)

$(APP): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJ)

src/%.o: src/%.cpp include/parser.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(APP)

.PHONY: all clean
test: all
	python3 -m pytest -q
