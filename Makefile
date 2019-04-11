all: exe

exe: rectangle_search.cc
	 g++ *.o -o main.exe

obj:
	 g++ -c *.cc

clean:
	 rm *.o *.exe