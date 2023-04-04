#include <iostream>
#include <vector>
#include <cassert>

using namespace std;
#include "forest.h"

Forest::Forest(int h, int w)
{
	int i, j;
	H = h;
	W = w;

	tab = new int* [H];
	for (j = 0; j < H; j++) {
		tab[j] = new int[W];
		for (i = 0; i < W; i++)
			tab[j][i] = 0;
	}
}
	Forest::~Forest()
	{
		int j;
		for (j = 0; j < H; j++)
			delete tab[j];
		delete tab;

		for (auto t : trees)
			delete t;		// jawnie usuniety obiekt ze sterty

		trees.clear();
	}

	void Forest::AddTree(int h, char s, string c, int y, int x) {
		int i, j;
		Tree* drzewo1 = new Tree(h, s, c);		// jak dodaliœmy * to musimy zmieniæ . na -> to obiekt stworozny na stecie poza funkcj¹
		drzewo1->x = x;
		drzewo1->y = y;

		trees.push_back(drzewo1);

		for (j = 0; j < drzewo1->height; j++)
			for (i = 0; i < drzewo1->width; i++)
				if(drzewo1->tab[j][i])
				tab[j+y][i+x] = drzewo1->tab[j][i] * trees.size();

	}

	void Forest::PrintForest() {
		for (int j = 0; j < H; j++) {
			for (int i = 0; i < W; i++) {
				int k = tab[j][i];
				if (tab[j][i]) {
					cout << trees[k - 1]->color;
					cout << trees[k - 1]->symbol;
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}
		cout << endl << "\033[0m";
	}

