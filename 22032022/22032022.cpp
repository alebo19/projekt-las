// 22032022.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
// 
// FOREST

#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

#include "Forest.h"

int main()
{
	int i, j;
	//Tree drzewko(5, '*', "green");
	//drzewko.printTree();
	Forest las = Forest(15, 60);

	las.AddTree(5, '*', "green", 1, 1);
	las.AddTree(8, 'x', "red", 3, 20);
	las.AddTree(10, '*', "yellow", 5, 25);


	las.PrintForest();
}

/*for (j = 0; j < las.H; j++) {
	for (i = 0; i < las.W; i++)
		cout << las.tab[j][i];
	cout << endl;
}*/

		/*Forest f;
	Tree* drzewko1 = new Tree(5, 'J', "red");
	Tree* drzewko2 = new Tree(5, '2', "green");
	Tree* drzewko3 = new Tree(5, '3', "red");
	drzewko1->printTree();
	drzewko2->printTree();
	drzewko3->printTree();
	f.AddTree(drzewko1);
	f.AddTree(drzewko2);
	f.AddTree(drzewko3);
	delete(drzewko1);
	delete(drzewko2);
	delete(drzewko3);*/

	// KOLORY
	/*cout << "\033[1;31m 00000000000000000000000000000000000000000000000000000000000000000000000000 \033[0m \n";
	cout << "\033[1;32m 00000000000000000000000000000000000000000000000000000000000000000000000000 \033[0m \n";
	cout << "\033[1;33m 00000000000000000000000000000000000000000000000000000000000000000000000000 \033[0m \n";
	cout << "\033[1;34m 00000000000000000000000000000000000000000000000000000000000000000000000000 \033[0m \n";
	cout << "\033[1;35m 00000000000000000000000000000000000000000000000000000000000000000000000000 \033[0m \n";
	cout << "\033[1;36m 00000000000000000000000000000000000000000000000000000000000000000000000000 \033[0m \n";*/



