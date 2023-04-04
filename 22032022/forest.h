
#include "tree.h"

class Forest {
private:
    int H, W;
    vector <Tree*>trees;           // pojemnik na obiekty typu drzewa
    int** tab;

public:
    Forest(int H, int W);
    ~Forest();
    void AddTree(int h, char s, string c, int y, int x);
    void PrintForest(); 
};