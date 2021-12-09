                                                                                   
tipo8: tipo8.o
        g++ -nostartfiles -o tipo8 tipo8.o

tipo8.o: tipo8.s
         as -g -o tipo8.o tipo8.s

clean:
        rm tipo8 tipo8.o

