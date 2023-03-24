#include "Funkc.h"

void delVertexA(Graph g)
{
    int tmp;
    while (true)
    {
        std::cout << "\nИмеются вершины:\n";
        for (int i = 0; i < g.getVertexCount(); ++i)
        {
            std::cout << g.getVertexes(i) << " ";
        }
        std::cout << "Выберите вершину для удаления:";
        std::cin >> tmp;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Ошибка ввода, повторите попытку.";
            system("pause");
            continue;
        }
        g.print();
        for (int i = 0; i < g.getVertexCount(); ++i)
        {
            if (tmp == g.getVertexes(i))
            {
                g.delVertex(tmp);
                g.print();
                system("pause");
            return;
            }

        }
        std::cout << "Такой вершины нет, повторите ввод.\n";
    }
}

void delVertexM(Graph g)
{
    int tmp;
    while (true)
    {
        std::cout << "\nИмеются вершины:\n";
        for (int i = 0; i < g.getVertexCount(); ++i)
        {
            std::cout << g.getVertexes(i) << " ";
        }
        std::cout << "Выберите вершину для удаления:";
        std::cin >> tmp;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Ошибка ввода, повторите попытку.";
            system("pause");
            continue;
        }
        g.print();
        for (int i = 0; i < g.getVertexCount(); ++i)
        {
            if (tmp == g.getVertexes(i))
            {
                g.delVertexFromMe(tmp);
                g.print();
                system("pause");
                return;
            }
        }
        std::cout << "Такой вершины нет, повторите ввод.\n";
    }
}

void funkc(Graph g)
{
    int a;
    while (true)
    {
        system("cls");
        std::cout << "     ---  Меню описания ошибки  Задания 13.4.3  ---" << std::endl;
        std::cout << "1- системное заполнение матрицы Matrix для наглядности.\n";
        std::cout << "2- удаление вершины по рекомендациям и методы автора задания.\n";
        std::cout << "3- удаление вершины по моему методу.\n";
        std::cout << "4- печать матрицы\n\n\n";
        std::cout << "Выберите раздел:";
        std::cin >> a;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Ошибка ввода, повторите попытку.";
            system("pause");
            continue;
        }
        if (a == 1)
        {
            g.mat();
            continue;
        }
        if (a == 2) {
            if (g.getVertexCount() > 0)
            {
                delVertexA(g);
                continue;
            } else
            {
                std::cout << "\nГраф не заполнен, повторите выбор.\n";
                system("pause");
                continue;
            }
        }
        if (a == 3)
        {
            if (g.getVertexCount() > 0)
            {
                delVertexM(g);
                continue;
            }
            else
                {
                    std::cout << "\nГраф не заполнен, повторите выбор.\n";
                    system("pause");
                    continue;
                }
        }
        if (a == 4)
        {
            if (g.getVertexCount() > 0) g.print(); else
            {
                std::cout << "\nГраф не заполнен, повторите выбор.\n";
                system("pause");
                continue;
            }

        }
        std::cout << "Выбор не определен, повторите ввод.\n";
        system("pause");
    }
}