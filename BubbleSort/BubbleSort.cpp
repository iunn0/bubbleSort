#include <iostream>

void arrayFiller(int* arr, int size)
{
    /*for (size_t i = 0; i < size; ++i)
    {
        std::cout << "Write el #" << i << std::endl;
        std::cin >> arr[i];
    }*/
    for (size_t i = 0; i < size; ++i)
    {
        arr[i] = 1 + rand() % 100;
    }

}

void arrayShow(const int* arr, int size)
{
    for (size_t i = 0; i < size; ++i)
    {
        std::cout << "Element #" << i << " is " << arr[i] << std::endl;
    }
}

void bubbleSort(int* arr, int size)
{
    for (size_t i = 1; i < size; i++) 
        for (size_t j = 0; j < size - i; j++)
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }       
}

int main()
{
    srand(static_cast<unsigned>(time(nullptr)));

    int size;
    std::cout << "How many elements?" << std::endl;
    std::cin >> size;

    if (size <= 0)
    {
        std::cout << "Error";
        return 0;
    }

    int* arr = new int[size];

    arrayFiller(arr, size);
    arrayShow(arr, size);

    bubbleSort(arr, size);
    arrayShow(arr, size);

    delete[] arr;

    return 0;
}