# Starter Makefile
# add .cpp and .h files as specified in each task. 

main: main.o reservoir.o
	g++ -o main main.o reservoir.o

main.o: main.cpp reservoir.h
	g++ -c main.cpp

reservoir.o: reservoir.cpp reservoir.h
	g++ -c reservoir.cpp
clean:
	rm -f main.o reservoir.o





# This is a comment (like Python comments)
# If you just type "make" the top most
# target is run.
# You can also specify by typing "make main"
# "make help" etc.
help:
	@echo "This is a help screen"
	@echo "You can make main"
	@echo "or or make clean"
	@echo "or make help"

chain: chain2 chain3
	@echo "Chain was called"

chain2: 
	@echo "Chain 2 was called"

chain3:
	@echo "chain 3 was called"
	@ls