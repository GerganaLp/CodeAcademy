CC=gcc
COMPILE=$(CC) -g
CFILES=$(dir \s *.c*) 
OBJECT=game.o main.o 
TARGET=gameExe
$(TARGET):$(OBJECT)
	$(COMPILE) -o $@ $(OBJECT)
.c:.o
	$(COMPILE) -c $< -o $@
clean:
	del $(TARGET).exe $(OBJECT)