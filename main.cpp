#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int *fill(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;

        cout << arr[i] << endl;
    }
}

int *fill2(int **arr, int columns, int rows)
{
    for (int i = 0; i < columns; i++)
    {
        for (int i = 0; i < rows; i++)
        {
            arr[columns][rows] = rand() % 100;
            cout << arr[columns][rows] << endl;
        }
    }
}

int *test(int width, int height, int ** matrix)
{
    for (int index_1 = 0; index_1 < height; index_1++)
    {
        for (int index_2 = 0; index_2 < width; index_2++)
        {
            matrix[index_1][index_2] = rand() % 100;
            cout << matrix[index_1][index_2] << "  ";
        }
        cout << "\n";
    }
}

int main()
{
    int width, height;

    cout << "Введите размер матрицы: ";
    cin >> height >> width;

    /* Проверка */
    if (width < 1 || height < 1)
    {
        std::cout << "Ошибка. Матрица такой не может быть" << '\n';
        return 1;
    }

    int ** matrix = new int*[height];
    for(int i = 0; i < height; ++ i)
        matrix[i] = new int[width];

    std::cout << "Введите данные для этой матрицы" << std::endl;

    for (int index_1 = 0; index_1 < height; index_1++)
    {
        for (int index_2 = 0; index_2 < width; index_2++)
        {
            std::cin >> matrix[index_1][index_2];
        }
    }

    std::cout << "Матрица получилась: " << '\n';

    test(width, height, matrix);

    for(int i = 0; i < height; ++ i)
        delete[] matrix[i];
    delete[] matrix;

}