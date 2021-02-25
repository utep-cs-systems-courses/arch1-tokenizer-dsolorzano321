

OBJS = tokenizer.o UI.o 
CFLAGS =-g -O3 

all: tokenizer

tokenizer: $(OBJS)
	cc -o tokenizer $(CFLAGS) $(OBJS)
$(OBJS): UI.c

clean:
	rm -f *.o tokenizer
run:tokenizer
	./tokenizer




