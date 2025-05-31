# Nombre del ejecutable
TARGET = main

# Compilador y flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Iheaders

# Carpetas
SRC_DIR = implements
OBJ_DIR = obj

# Archivos fuente
SRCS = $(wildcard $(SRC_DIR)/*.cpp) main.cpp
OBJS = $(patsubst %.cpp, $(OBJ_DIR)/%.o, $(notdir $(SRCS)))

# Regla principal
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Regla para compilar archivos fuente de implements/
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para compilar main.cpp
$(OBJ_DIR)/examples/main.o: main.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpiar archivos generados
.PHONY: clean
clean:
	rm -rf $(OBJ_DIR) $(TARGET)
