#pragma once
#ifndef __GRAPH__
#define __GRAPH__
#include <iostream>
#define SIZE 10

//#include "test.h"


class Graph {
public:
    Graph();
    // ���������� �������
    void addVertex(int vnumber);
    // ���������� �����
    void addEdge(int v1, int v2, int weight);
    // �������� �����
    void delEdge(int v1, int v2);
    // �������� �������
    void delVertex(int vnumber);
    // �������� �������
    void delVertexFromMe(int vnumber);
    //������ �������
    void print();
    void mat();
    int getVertexCount() { return vertexCount; }
    int getVertexes(int i) { return vertexes[i]; }
private:
    bool edgeExists(int v1, int v2);
    bool vertexExists(int v);

    int matrix[SIZE][SIZE]; // ������� ���������

    int vertexes[SIZE]; // ��������� ������
    int vertexCount; // ���������� ����������� ������
};
#endif