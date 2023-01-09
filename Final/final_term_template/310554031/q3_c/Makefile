CXX = g++
BIN_NAME:= term_ans_3c
SRC_DIR := src
OBJ_DIR := obj

EXE := $(BIN_NAME)

C_SRC = $(wildcard $(SRC_DIR)/*.c)
CPP_SRC = $(wildcard $(SRC_DIR)/*.cpp)

OBJ := $(CPP_SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o) $(C_SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

CPPFLAGS := -Iinclude
CFLAGS   := -Wall
LDFLAGS  := 
LDLIBS   := 

.PHONY: all clean

all: $(EXE)

$(EXE): $(OBJ)
	$(CXX) $(LDFLAGS) $^ $(LDLIBS) -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c* | $(OBJ_DIR) 
	$(CXX) $(CPPFLAGS) $(CFLAGS) -c $< -o $@
    
$(OBJ_DIR):
	mkdir $@

clean:
	DEL *.exe
	RMDIR /s /Q $(OBJ_DIR)

-include $(OBJ:.o=.d)