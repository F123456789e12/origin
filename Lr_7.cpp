#include <iostream>
#include <climits> // Для INT_MAX

using namespace std;

int main() {
  const int ROWS = 3; // Количество строк
  const int COLS = 3; // Количество столбцов

  int matrix[ROWS][COLS] = {
    {5, 2, 8},
    {9, 1, 4},
    {3, 6, 7}
  };

  // Предполагаем, что первый элемент диагонали является минимальным
  int minDiagonal = matrix[0][0];

  // Находим минимум на главной диагонали
  for (int i = 1; i < ROWS; ++i) {
    if (matrix[i][i] < minDiagonal) {
      minDiagonal = matrix[i][i];
    }
  }

  // Выводим матрицу
    cout << "Матрица:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

  // Выводим результат
  cout << "Минимум на главной диагонали: " << minDiagonal << endl;

  return 0;
}
