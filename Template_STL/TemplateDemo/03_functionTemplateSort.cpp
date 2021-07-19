//
// Created by FHang on 2021/7/9 14:01
//
#include <iostream>
#include <cstring>

using namespace std;

template <class T>
void swap_T(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <class T>
void sort_T(T arr[], int length)
{
    for (int i = 0; i < length; ++i)
    {
        // 假设最大值的下标，后面进行比较
        int max = i;
        for (int j = i + 1; j < length; ++j)
        {
            // 将假设的下标对应的值和后面的值，比较
            if (arr[max] < arr[j])
            {
                max = j;
            }
        }
        // 上面的循环结束后，检查一开始假设的下标，是否是循环检查出的最大值下标
        if (max != i)
        {
            swap_T(arr[max], arr[i]);
        }
    }
}

template <class T>
void print_T(T arr, int length)
{
    cout << "从大到小排序后：";
    for (int i = 0; i < length; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortCharDemo()
{
    char c_Array[26];
    int c_Length;

    cout << "输入字符(a - z) >> ";
    cin >> c_Array;
    // 实际的字符后面有一个 `\0`收尾,这获取长度方法不好
    //c_Length = (sizeof(c_Array) / sizeof(char));

    // strlen() 获取长度，读到`\0`，就不读，适合这个项目的需求
    // 需要包含 <cstring>
    c_Length = strlen(c_Array);

    sort_T(c_Array, c_Length);
    print_T(c_Array, c_Length);
}

void sortIntDemo()
{
    int i_Array[10];
    int i = 0;
    int i_Length;

    cout << "输入数字(0 - 9) >> ";
    while (cin.peek() != '\n')
    {
        cin >> i_Array[i++];
        i_Length = i;
    }

    sort_T(i_Array, i_Length);
    print_T(i_Array, i_Length);
}

int main()
{
    sortCharDemo();
    // sortIntDemo();
    return 0;
}