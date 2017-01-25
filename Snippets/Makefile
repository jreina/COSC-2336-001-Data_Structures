

jan23: jan23.o func1.o func2.o
	g++ -o jan23 jan23.o func1.o func2.o

jan23.o: jan23.cpp func1.h
	g++ -c jan23.cpp

func1.o: func1.cpp func1.h
	g++ -c func1.cpp

func2.o: func2.cpp
	g++ -c func2.cpp

clean:
	rm -f jan23 jan23.o func1.o func2.o
