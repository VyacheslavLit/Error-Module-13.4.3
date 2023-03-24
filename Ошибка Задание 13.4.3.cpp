#include <iostream>
#include <Windows.h>
#include "Funkc.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Graph g;

    // добавляем вершины
    g.addVertex(0);
    g.addVertex(1);
    g.addVertex(2);
    g.addVertex(3);
    g.addVertex(4);
    g.addVertex(5);
    g.addVertex(6);
    g.addVertex(7);
    g.addVertex(8);

    // добавляем ребра
    g.addEdge(0, 1, 4);
    g.addEdge(1, 4, 8);
    g.addEdge(4, 7, 5);
    g.addEdge(7, 6, 3);
    g.addEdge(6, 8, 9);
    g.addEdge(8, 5, 4);
    g.addEdge(5, 2, 8);
    g.addEdge(2, 0, 5);
    g.addEdge(0, 3, 3);
    g.addEdge(3, 4, 9);
    g.addEdge(3, 7, 8);
    g.addEdge(3, 6, 5);
    g.addEdge(3, 8, 3);
    g.addEdge(3, 5, 9);


    funkc(g);
//    g.mat();
 //   g.print();

 ////   g.delVertex(1);
 //   g.delVertexFromMe(1);

 //   g.print();
    return 0;
}
