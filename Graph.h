#pragma once
#ifndef __GRAPH__
#define __GRAPH__
#include <iostream>
#define SIZE 10

//#include "test.h"


class Graph {
public:
    Graph();
    // добавление вершины
    void addVertex(int vnumber);
    // добавление ребра
    void addEdge(int v1, int v2, int weight);
    // удаление ребра
    void delEdge(int v1, int v2);
    // удаление вершины
    void delVertex(int vnumber);
    // удаление вершины
    void delVertexFromMe(int vnumber);
    //печать матрицы
    void print();
    void mat();
    int getVertexCount() { return vertexCount; }
    int getVertexes(int i) { return vertexes[i]; }
private:
    bool edgeExists(int v1, int v2);
    bool vertexExists(int v);

    int matrix[SIZE][SIZE]; // матрица смежности

    int vertexes[SIZE]; // хранилище вершин
    int vertexCount; // количество добавленных вершин
};
#endif