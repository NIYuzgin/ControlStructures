

#include <iostream>


using namespace std;




int main()
{
    setlocale(LC_ALL, "ru");

   
    return 0;
}



// #include <stdlib.h>
// #include <time.h>

 //}


//void InputArray(int* arr, int size, int start, int end) {
//    for (int i = 0; i < size; i++) {
//        *(arr + i) = start + rand() % (end - start);
//    }
//}
//
//void PrintArray(int* arr, int size) {
//    for (int i = 0; i < size; i++) {
//        cout << *(arr + i) << "  ";
//    }
//}
//
//void CopyArray(int* arr_1, int* arr_2, int size) {
//    for (int i = 0, j = 0; i < size; i++, j++) {
//        *(arr_2 + j) = *(arr_1 + i);
//    }
//}
//
//void ChangeOrderArray(int* arr, int size) {
//    for (int i = 0; i < size / 2; i++) {
//        int temp;
//        temp = *(arr + i);
//        *(arr + i) = *(arr + size - i - 1);
//        *(arr + size - i - 1) = temp;
//    }










//srand(time(NULL));

    //int size;
    //int start;
    //int end;
    //int* arr_1;
    //int* arr_2;
    //int* arr_3;

    //cout << "������� ����������� �������" << endl;
    //cin >> size;
    //cout << "������� �������� ����� ������� ���������" << endl;
    //cin >> start;
    //cout << "������� �������� ������ ������� ���������" << endl;
    //cin >> end;

    //while (end <= start) {
    //    cout << "������ ������� ������ ���� �� ������: " << start + 1 << ".  ������� �������� ������ ������� ���������" << endl;
    //    cin >> end;
    //}

    //arr_1 = new int[size];
    //InputArray(arr_1, size, start, end);
    //cout << "�������� ������:" << endl;
    //PrintArray(arr_1, size);
    //cout << endl << "----------------" << endl;

    //arr_2 = new int[size];
    //CopyArray(arr_1, arr_2, size);
    //cout << "������������� ������ (������� 1):" << endl;
    //PrintArray(arr_2, size);
    //cout << endl << "----------------" << endl;

    //ChangeOrderArray(arr_1, size);
    //cout << "�������� ������ � ��������������� �������� ���������� (������� 2):" << endl;
    //PrintArray(arr_1, size);
    //cout << endl << "----------------" << endl;

    //arr_3 = new int[size];
    //CopyArray(arr_1, arr_3, size);
    //cout << "������������� ������ � ��������������� �������� ���������� (������� 3):" << endl;
    //PrintArray(arr_3, size);
    //cout << endl << "----------------" << endl;

    //// arr_1 = nullptr;
    //delete[] arr_1;
    //// arr_2 = nullptr;
    //delete[] arr_2;
    //// arr_3 = nullptr;
    //delete[] arr_3;