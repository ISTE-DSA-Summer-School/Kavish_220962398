//Write a C++ program to multiply two matrices and print the result using pointers

#include <iostream>
using namespace std;

void InputMat(int* a, int m, int n) {
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         cin >> *(a + i * n + j);
      }
   }
}

void MultiplyMat(int* a, int* b, int m, int n, int p, int q, int* c) {
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < q; j++) {
         int sum = 0;
         for (int k = 0; k < n; k++) {
            sum += *(a + i * n + k) * *(b + k * q + j);
         }
         *(c + i * q + j) = sum;
      }
   }
}


void PrintMat(int* a, int m, int n) {
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         cout << *(a + i * n + j) << "  ";
      }
      cout << endl;
   }
}

int main()
{
    int m,n,p,q;
    cout << "Enter dimensions of the first matrices:" <<endl;
    cin >> m >> n;
    cout << "Enter dimensions of the second matrices:"<<endl ;
    cin >> p >> q;

    int a[m][n], b[p][q], c[m][q];

    if (p != n) {
        cout << "Matrix multiplication not possible." << endl;
        return 0;
    }

    cout << "Enter elements of the first matrix:" << endl;
    InputMat((int*)a, m, n);

    cout << "Enter elements of the second matrix:" << endl;
    InputMat((int*)b, p, q);

    MultiplyMat((int*)a, (int*)b, m, n, p, q, (int*)c);

    cout << "Product matrix:" << endl;
    PrintMat((int*)c, m, q);

    return 0;
}
