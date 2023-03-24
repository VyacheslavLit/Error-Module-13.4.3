#include "graph.h"

Graph::Graph() {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            matrix[i][j] = 0;
    vertexCount = 0;
}
// добавление вершины
void Graph::addVertex(int vnumber)
{
    vertexes[vertexCount] = vnumber;
    vertexCount++;
}
// добавление ребра
void Graph::addEdge(int v1, int v2, int weight)
{
    matrix[v1][v2] = weight;
    matrix[v2][v1] = weight;
}
// проверка существования ребра
bool Graph::edgeExists(int v1, int v2)
{
    return matrix[v1][v2] > 0;
}
// проверка существования вершины
bool Graph::vertexExists(int v)
{
    for (int i = 0; i < vertexCount; i++)
        if (vertexes[i] == v)
            return true;
    return false;
}


void Graph::delEdge(int v1, int v2)
{
    matrix[v1][v2] = 0;
    matrix[v2][v1] = 0;
}


void Graph::print()
{
    std::cout << std::endl<<"     ";
    for (int i = 0; i < vertexCount; ++i) 
    {
        std::cout << vertexes[i] << " ";
        if (matrix[0][0] >= 100)std::cout << "  ";
    }
        std::cout << std::endl<<std::endl;
    for (int i = 0; i < vertexCount; ++i)
    {
        std::cout << vertexes[i] << ".   ";
        for (int j = 0; j < vertexCount; ++j)
            std::cout << matrix[i][j] << " ";
        std::cout << std::endl;
    }
    std::cout << std::endl;
}