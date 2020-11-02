run: main
	./main
	rm main
	rm *.o

main: main.o PointColor.o Point.o Point.h PointColor.h
	g++ -o main main.o Point.o PointColor.o
	
PointColor.o: PointColor.cpp PointColor.h
	g++ -c PointColor.cpp

Point.o: Point.cpp Point.h
	g++ -c Point.cpp

main.o: main.cpp PointColor.h Point.h
	g++ -c main.cpp
