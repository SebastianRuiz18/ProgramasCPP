subrut1: subrut1.o
        g++ -nostartfiles -o subrut1 subrut1.o

subrut1.o: subrut1.s
         as -g -o subrut1.o subrut1.s

clean:
        rm subrut1 subrut1.o