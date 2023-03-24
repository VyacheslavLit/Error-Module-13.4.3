#include "graph.h"


void Graph::delVertex(int vnumber)
{
    // обнуляем столбец и строку матрицы
    for (int i = 0; i < SIZE; i++)
    {
        matrix[i][vnumber] = 0;
        matrix[vnumber][i] = 0;
    }
    // удаляем вершину из списка вершин
    int foundIndex = -1;
    for (int i = 0; i < vertexCount; i++)
    {
        if (vertexes[i] == vnumber)
            foundIndex = i;
    }
    vertexCount--;
    for (int i = foundIndex; i < vertexCount; i++)
    {
        vertexes[i] = vertexes[i + 1];
    }
}

void Graph::delVertexFromMe(int vnumber)
{
    // удаляем вершину из списка вершин
    int foundIndex = -1;
    for (int i = 0; i < vertexCount; i++)
    {
        if (vertexes[i] == vnumber)
            foundIndex = i;
    }
    vertexCount--;
    for (int i = foundIndex; i < vertexCount; i++)
    {
        vertexes[i] = vertexes[i + 1];
    }
    // обнуляем столбец и строку матрицы
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = foundIndex; j < vertexCount; j++)matrix[i][j] = matrix[i][j + 1];
        for (int j = foundIndex; j < vertexCount; j++) matrix[j][i] = matrix[j + 1][i];
    }
}

void Graph::mat()
{
    for (int i = 0; i < vertexCount; i++)
        for (int j = 0; j < vertexCount; j++)
            matrix[i][j] = 100 + i * 10 + j;

}

