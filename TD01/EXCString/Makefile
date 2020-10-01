run: Exo6
	./Exo6
	
Exo6: Exo6.o CString.o CString.h Definition.o Definition.h
	g++ -o Exo6 Exo6.o CString.o CString.h Definition.o Definition.h
	
Exo6.o: Exo6.cc CString.h Definition.h
	g++ -c Exo6.cc CString.h Definition.h
	
CString.o: CString.cc CString.h
	g++ -c CString.cc CString.h
	
Definition.o: Definition.cc Definition.h
	g++ -c Definition.cc Definition.h

clean:
	rm *.o
	rm *.h.gch
	rm Exo6
