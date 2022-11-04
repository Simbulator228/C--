#include <iostream> // cout, cin

using namespace std; // знаю, что это говно, но мне так удобнее

//Папочка
class SortStrategy {   //pure absrtact class
public:
    virtual void sort(int *arr, int size) = 0;// что-то pure abstract function или что-то такое
    ~SortStrategy() {
        cout << "Обормот мусороглот" << endl;// Это из Рика и Морти прикол
    }
};


//У всех наследников надо реализовать ОБЯЗАТЕЛЬНО функцию сорт, иначе работать не будет, не помню как называется, ты так показывал
class BubbleSortStrategy : public SortStrategy {
public:
    void sort(int *arr, int size) {
        arr = new int[size]; // место выделяем под массив

        for (int i = 0; i < size; i++) {  // заполняем массив
            cin >> arr[i];
        }
        int swap;

        for (int i = 0; i < size - 1; i++) {
            for (int a = 0; a < size - i - 1; a++) {
                if (arr[a] > arr[a + 1]) {
                    swap = arr[a];
                    arr[a] = arr[a + 1];
                    arr[a + 1] = swap;
                }
            }
        }
        for (int i = 0; i < size; i++) {  // принтим, это просто для проверки было
            cout << arr[i] << ' ';
        }

    }


};

class InsertionSortStrategy : public SortStrategy {
public:
    void sort(int *arr, int size) {
        for (int i = 0; i < size; i++) {  // заполняем массив
            cin >> arr[i];
        }
        for (int i = 1; i < size; i++) {
            for (int j = i; arr[j - 1] > arr[j] && j >= 0; j--) {
                int swap = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = swap;
            }
        }
        for (int i = 0; i < size; i++) {  // принтим, это просто для проверки было
            cout << arr[i] << ' ';
        }
    }
};

class SelectionSortStrategy : public SortStrategy {
public:
    int min;

    void sort(int *arr, int size) {
        for (int i = 0; i < size; i++) {  // заполняем массив
            cin >> arr[i];
        }
        for (int i = 0; i < size; i++) {
            min = i;
            for (int j = i + 1; j < size; j++) {
                if (arr[j] < arr[min]) {
                    min = j;
                }
                if (min != i) {
                    int swap = arr[i];
                    arr[i] = arr[min];
                    arr[min] = swap;
                }
            }
        }
        for (int i = 0; i < size; i++) {  // принтим, это просто для проверки было
            cout << arr[i] << ' ';
        }
    }
};



class BogoSortStrategy : public SortStrategy { //Даже не знал, что такая сортировка есть, ну и тупая
public:
    void sort(int *arr, int size) {
        for (int i = 0; i < size; i++) {  // заполняем массив
            cin >> arr[i];
        }
        while (isSorted(arr, size) == false) {
            arr = shuffleElements(arr, size);
        }
    }

private:
    bool isSorted(int *arr, size) {

        for (int i = 0; i < size - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                return false;
            }
            return true;
        }
    }

    int *shuffleElements(int *arr, int size) {
        while (size > 1) {
            int random = rand() % size;
            size -= 1;
            swap(arr[random], arr[size]);
        }

        return arr;
    }

    void swap(int &var1, int &var2) {
        int temp = var1;
        var1 = var2;
        var2 = temp;
    }
};


int main() {
    SelectionSortStrategy b;
    int size;
    cin >> size;
    int *kal = new int[size];
    b.sort(kal, size);
}