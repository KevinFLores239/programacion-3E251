PROYECTO = primo
LIB := -lftxui-component -lftxui-dom -lftxui-screen
CXX := -std=c++17
SRC := src
INCLUDE := include

BIN := bin
EXE := $(BIN)/$(PROYECTO)

DATOS = datos
TYPE := $(BIN)/$(DATOS)



$(EXE) : $(SRC)/main.cpp
	c++ $< -o $@ $(LIB) $(CXX) -I$(INCLUDE)



run : $(EXE)
	./$<

clean : 
	rm $(BIN)/*


$(TYPE) : $(SRC)/memoria.cpp
	c++ $< -o $@ $(LIB) $(CXX)

ejecutar : $(TYPE)
	./$<



bin/archivo: src/archivo.cpp
	c++ $< -o $@ -I$(INCLUDE)

archivo: bin/archivo
	./$<


bin/binario: src/binario.cpp
	c++ $< -o $@ -I$(INCLUDE)

binario: bin/binario
	./$<