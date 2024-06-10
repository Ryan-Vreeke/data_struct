CC=g++
EXECUTABLE= ../../lib/libquadtree.a

$(EXECUTABLE): boundry.o quad_tree.o
	ar rcs $(EXECUTABLE) boundry.o quad_tree.o

boundry.o:
	$(CC) -c boundry.cpp -o boundry.o

quad_tree.o:
	$(CC) -c quad_tree.cpp -o quad_tree.o

clean:
	rm *.o $(EXECUTABLE)

run: all
	./$(EXECUTABLE)
