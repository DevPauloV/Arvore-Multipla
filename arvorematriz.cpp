#include <iostream>
using namespace std;

const int SIZE = 20;

void initializeMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix[i][j] = 0;
        }
    }
}

void insN(int matrix[SIZE][SIZE]) {
    int linha, coluna, n;
    cout << "Informe X e Y para inserir o numero: ";
    cin >> linha >> coluna;
    cout << "valor de N:";
    cin >> n;

    if (linha >= 0 && linha < SIZE && coluna >= 0 && coluna < SIZE) {
        matrix[linha][coluna] = n;
        cout << "N inserido com sucesso!" << endl;
    } else {
        cout << "Posicao invalida!" << endl;
    }
}

void MostrarMatriz(const int matrix[SIZE][SIZE]) {
    cout << "Matriz:" << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void delN(int matrix[SIZE][SIZE]) {
    int linha, coluna;
    cout << "Informe X e Y do número a ser excluido: ";
    cin >> linha >> coluna;

    if (linha >= 0 && linha < SIZE && coluna >= 0 && coluna < SIZE) {
        matrix[linha][coluna] = 0;
        cout << "N excluido com sucesso!" << endl;
    } else {
        cout << "Posição invalida!" << endl;
    }
}

int main() {
    int matrix[SIZE][SIZE];
    initializeMatrix(matrix);

    int choice;
    while (true) {
        cout << "Menu" << endl;
        cout << "1. Inserir n" << endl;
        cout << "2. Mostrar matriz" << endl;
        cout << "3. Excluir n" << endl;
        cout << "4. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> choice;

        switch (choice) {
            case 1:
                insN(matrix);
                break;
            case 2:
                MostrarMatriz(matrix);
                break;
            case 3:
                delN(matrix);
                break;
            case 4:
                return 0;
            default:
                cout << "Opção inválida!" << endl;
        }

        cout << endl;
    }

    return 0;
}
