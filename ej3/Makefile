# Nombre del ejecutable (en la raíz del proyecto)
TARGET = main

# Compilador y flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Iheaders

# Carpetas
SRC_DIR = src
OBJ_DIR = obj
INC_DIR = headers
EXAMPLES_DIR = examples

# Archivos fuente y objetos
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))

# Archivo main
MAIN = $(EXAMPLES_DIR)/main.cpp

# Regla principal
$(TARGET): $(OBJS) $(MAIN)
	$(CXX) $(CXXFLAGS) $(OBJS) $(MAIN) -o $(TARGET)

# Compilar archivos .cpp a .o
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpiar archivos generados
.PHONY: clean
clean:
	rm -rf $(OBJ_DIR) $(TARGET)

