INCLUDE_DIR = -I ../../include/ -I ../../include/linked_list/ -I ../../include/trees/

SRCS = ll_basic_util.c

OBJ_DIR = ../../obj/ll/
OBJS := $(SRCS:%.c=$(OBJ_DIR)%.o)
	    
$(OBJ_DIR)%.o : %.c
	gcc -Werror -c $< -ggdb $(INCLUDE_DIR) -o $@
     
all: $(OBJS)
     
$(OBJS): | $(OBJ_DIR)
 
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -f $(OBJS)
