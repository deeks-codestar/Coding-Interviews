TOP = $(shell pwd)
UNAME_S := $(shell uname -s)


LL = src/linked_list
MAIN = src/main
OBJ_DIR = obj/ll/* obj/main/* 


$(BIN): ll main 
	gcc -ggdb $(OBJ_DIR) 

ll:	
	cd $(LL) && $(MAKE) 

main:
	cd $(MAIN) && $(MAKE) 

clean: ll main 
	gcc -ggdb $(OBJ_DIR) -o coding	
	
