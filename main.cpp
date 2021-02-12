#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int* fill_and_print(int width, int height, int** matrix)
{
    for (int index_1 = 0; index_1 < height; index_1++) {
        for (int index_2 = 0; index_2 < width; index_2++) {
            matrix[index_1][index_2] = rand() % 100;
            cout << matrix[index_1][index_2] << "  ";
        }
        cout << "\n";
    }
}

int main()
{
    int width, height;

    cout << "Enter size of matrix ";
    cin >> height >> width;

    if (width < 1 || height < 1) {
        cout << "Error... You enter wrong matrix size" << '\n';
        return 1;
    }

    int** matrix = new int*[height];
    for (int i = 0; i < height; ++i) {
        matrix[i] = new int[width];
    }

    cout << "Matrix complete " << '\n';

    fill_and_print(width, height, matrix);

    for (int i = 0; i < height; ++i)
        delete[] matrix[i];
    delete[] matrix;
}
