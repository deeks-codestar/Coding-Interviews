INCLUDE_DIR = -I ../../include/ -I ../../include/linked_list/ -I ../../include/trees/
SRCS = $(wildcard *.c)

OBJ_DIR = ../../obj/main/
OBJS := $(SRCS:%.c=$(OBJ_DIR)%.o)
	    
$(OBJ_DIR)%.o : %.c
	gcc -Werror -pg -c $< -ggdb $(INCLUDE_DIR) -o $@
     
all: $(OBJS)
     
$(OBJS): | $(OBJ_DIR)
 
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -f $(OBJS)
