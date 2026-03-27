#include<stdio.h>
#include<memory>
#include<iostream>
#include<vector>
#include<chrono>
#include<functional>
#include<iostream>
#include<string>
#include<tuple>
#include "Test_01.hpp"
#include <ranges>
using namespace std;

typedef enum gy_colour_e
{
    GY_YELLOW = 0,
    GY_GREEN  = 1,
    GY_RED    = 1,
    GY_BLACK  = 4,
    GY_BLUE   = 5,

}GY_Colour_e;

//构造函数初始化列表是在定义的时候使用的，不是声明的时候
GY_Test :: GY_Test(int para):gy_flag(para),gy_test(3)
{
    std::cout << __FUNCTION__ << " line : "<< __LINE__ << " " << std::endl;
}

GY_Test :: ~GY_Test()
{
    std::cout << __FUNCTION__ << " line : "<< __LINE__ << " " << std::endl;
}

//默认参数只需要在函数定义或是声明的时候出现一次
int gy_test_funcparamter(std::string gy_str,int k = 0)
{
    std::cout << __FUNCTION__ << " line : "<< __LINE__ << " " << gy_str << std::endl;

    return 0;
}

// 使用C++20的ranges特性
void print_even_numbers(const std::vector<int>& numbers) {
    auto even_numbers = numbers | std::ranges::views::filter([](int n) { return n % 2 == 0; });
    for (int n : even_numbers) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
}

std::optional<std::string> find_name_by_id(int id) {
    if (id == 1) {
        return "Alice";
    } else if (id == 2) {
        return "Bob";
    } else {
        return std::nullopt; // 表示没有找到
    }
}

int main(void)
{
    std::cout << __FUNCTION__ << " line : "<< __LINE__ << " " << (0 == GY_YELLOW) << std::endl;
    if(1 == GY_YELLOW)
    {
        printf("Hello World  %d !\n",GY_YELLOW);
    }
    else
    {
        printf("Hello Earth %d !\n",GY_YELLOW);
    }

    GY_Test gy_tt(3);

    gy_test_funcparamter("Garry");

    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Even numbers: ";
    print_even_numbers(numbers);
    // Lambda
    // [capture](parameters)->return-type{body}
    auto l_da_f = [](int x, int y) -> int { int z = x + y; return z + x; };
    std::cout << "l_da_f = " << l_da_f(3, 4) << std::endl;
    int id = 1;
    auto name = find_name_by_id(id);

    if (name) {
        std::cout << "Found name: " << *name << std::endl;
    } else {
        std::cout << "Name not found for id: " << id << std::endl;
    }
    return 0;
}




