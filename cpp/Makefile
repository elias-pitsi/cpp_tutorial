CC = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -Werror -Wconversion -fsanitize=address -fsanitize=undefined -g
SRC_DIR = src
HEADER_DIR = headers
TRGT_DIR = target
SRC_FILES = $(SRC_DIR)/main.cpp
OBJ_FILES = $(TRGT_DIR)/main.o
TARGET = $(TRGT_DIR)/main

# Default target: build the executable
all: $(TARGET)

# Link the object files to create the executable
$(TARGET): $(OBJ_FILES)
	$(CC) $(OBJ_FILES) -o $(TARGET) $(CXXFLAGS)

# Compile source files into object files
$(TRGT_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CC) -c $< -o $@ $(CXXFLAGS) -I$(HEADER_DIR)

# Run the target executable
run: $(TARGET)
	./$(TARGET)

# Clean up build artifacts
clean:
	rm -f $(TARGET) $(OBJ_FILES)
