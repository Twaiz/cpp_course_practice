#include <iostream>

int SizeOfAnArray() {
    int numbers3[5]{1, 2};

    std::cout << sizeof(numbers3) << std::endl;
    std::cout << sizeof(numbers3[0]) << std::endl;
    std::cout << sizeof(numbers3) / sizeof(numbers3[0])
              << std::endl;                         // ������ ��� ������ ����� ������� - 1 �������
    std::cout << std::size(numbers3) << std::endl;  // ������ ��� ������ ����� ������� - 2 �������

    return 0;
}