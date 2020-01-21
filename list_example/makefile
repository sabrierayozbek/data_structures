hepsi: derle calistir

derle:
	g++ -I "include" -c ./src/Node.cpp -o ./lib/Node.o
	g++ -I "include" -c ./src/BST.cpp -o ./lib/BST.o
	g++ -I "include" ./src/Test.cpp ./lib/Node.o ./lib/BST.o -o ./bin/Test
calistir:
	./bin/Test