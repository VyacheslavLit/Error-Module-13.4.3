#include "Funkc.h"

void delVertexA(Graph g)
{
    int tmp;
    while (true)
    {
        std::cout << "\n������� �������:\n";
        for (int i = 0; i < g.getVertexCount(); ++i)
        {
            std::cout << g.getVertexes(i) << " ";
        }
        std::cout << "�������� ������� ��� ��������:";
        std::cin >> tmp;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "������ �����, ��������� �������.";
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
        std::cout << "����� ������� ���, ��������� ����.\n";
    }
}

void delVertexM(Graph g)
{
    int tmp;
    while (true)
    {
        std::cout << "\n������� �������:\n";
        for (int i = 0; i < g.getVertexCount(); ++i)
        {
            std::cout << g.getVertexes(i) << " ";
        }
        std::cout << "�������� ������� ��� ��������:";
        std::cin >> tmp;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "������ �����, ��������� �������.";
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
        std::cout << "����� ������� ���, ��������� ����.\n";
    }
}

void funkc(Graph g)
{
    int a;
    while (true)
    {
        system("cls");
        std::cout << "     ---  ���� �������� ������  ������� 13.4.3  ---" << std::endl;
        std::cout << "1- ��������� ���������� ������� Matrix ��� �����������.\n";
        std::cout << "2- �������� ������� �� ������������� � ������ ������ �������.\n";
        std::cout << "3- �������� ������� �� ����� ������.\n";
        std::cout << "4- ������ �������\n\n\n";
        std::cout << "�������� ������:";
        std::cin >> a;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "������ �����, ��������� �������.";
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
                std::cout << "\n���� �� ��������, ��������� �����.\n";
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
                    std::cout << "\n���� �� ��������, ��������� �����.\n";
                    system("pause");
                    continue;
                }
        }
        if (a == 4)
        {
            if (g.getVertexCount() > 0) g.print(); else
            {
                std::cout << "\n���� �� ��������, ��������� �����.\n";
                system("pause");
                continue;
            }

        }
        std::cout << "����� �� ���������, ��������� ����.\n";
        system("pause");
    }
}