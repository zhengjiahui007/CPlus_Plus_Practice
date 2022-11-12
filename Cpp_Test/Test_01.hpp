#include<stdio.h>
#include<memory>
#include<iostream>
#include<vector>
#include<chrono>
#include<functional>
#include<iostream>
#include<string>
#include<tuple>


class GY_Test
{
    public:
        GY_Test(int para = 1);
        ~GY_Test();


    protected:

    public: 
        int gy_flag;
        int gy_test;


};

int gy_test_funcparamter(std::string gy_str,int k);