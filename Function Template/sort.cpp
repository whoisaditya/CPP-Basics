#include <iostream>
using namespace std;

template <class T>

void Sort(T *arr) // The first letter needs to be capitalized.
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; i < 4; i++)
        {
            if (arr[j] > arr[j+1])
            {
                T temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ,";
    }
    cout << "\n";
}

int main()
{
    int i[] = {5, 4, 3, 2, 1};
    float f[] = {5.5, 5.4, 5.3, 5.2, 5.1};
    char c[] = {'E', 'D', 'C', 'B', 'A'};

    cout << "Sorted" << endl;
    Sort(i);

    Sort(f);

    Sort(c);

    return 0;
}