CC=g++

station: Afficheur.o Carburant.o Pompe.o main.o
	$(CC) -o $@ $^

Afficheur.o: Afficheur.cpp Afficheur.hpp
	$(CC) -c $@ Afficheur.cpp

Carburant.o: Carburant.cpp Carburant.hpp
	$(CC) -c $@ Carburant.cpp

Pompe.o: Pompe.cpp Pompe.hpp
	$(CC) -c $@ Pompe.cpp

main.o: main.cpp
	$(CC) -c $@ $^

clean:
	rm -r *.o