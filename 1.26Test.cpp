// ConsoleApplication9.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <list>
#include <vector>
using namespace std;

//1.
//class Point
//{
//public:
//    Point()
//    {
//        x = 0;
//        y = 0;
//    }
//private:
//    int x;
//    int y;
//
//};
//int main()
//{
//    Point point;
//    printf("Default x = %f, y = %f\n", point);
//}


//2.
// int main()
//{
//   
//    int* newInt = new int(3);
//
//
//    printf("newInt1 = %d\n", *newInt);
//
//    delete newInt;
//    newInt = nullptr;
//
//
//
//    //-----------------------------------------------------------------------------
//
//
//
//    char* pArray = new char[1024]; 
//    for (int i = 0; i = 1024; i++) 
//    { 
//        pArray[i] = i; 
//    }
//    printf("newInt2 = %s\n", *pArray);
//    delete[] pArray; 
//    pArray = NULL;
//}
//






// 
// 3.
// class Test
//{
//public:
//    Test()
//    {
//        printf("Test\n");
//    }
//    ~Test()
//    {
//        printf("~Test\n");
//    }
//};
//class Test2 : public Test
//{
//public:
//    Test2()
//    {
//        printf("Test2\n");
//    }
//    ~Test2()
//    {
//        printf("~Test2\n");
//    }
//};
//int main()
//{
//    Test2* t;
//    t = new Test2();
//
//    delete t;
//    return 0;
//}
// 
// 
// 
// 





//
// 4.
//template<typename Test>
//Test Calc(Test a, Test b, int type)
//{
//    Test ans = 0;
//    switch (type)
//    {
//    case 0:
//        ans = a + b;
//        break;
//    case 1:
//        ans = a - b;
//        break;
//    case 2:
//        ans = a * b;
//        break;
//    case 3:
//        ans = a / b;
//        break;
//    }
//
//    return ans;
//}
//int main()
//{
//    int ans1;
//    float ans2;
//    char ans3;
//
//    ans1 = Calc<int>(2, 5, 0);
//    ans2 = Calc<float>(10.0f, 2.5f, 3);
//    ans3 = Calc<char>(10, 4, 2);
//
//    return 0;
//}
//


//int main()
//{
//    std::list<int> lst;
//    for (int i = 0; i <= 50; ++i)
//    {
//       if (i % 10 == 0)
//        {
//        lst.push_front(i);
//        }
//    }
//
//    for (std::list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it)
//    {
//      //if (*it == 30)
//      printf("num = %d\n", *it);
//    }
//
//    
//}
int main()
{
    std::vector<int> vec;
    for (int i = 0; i < 5; ++i)
    {
        vec.push_back(60 - (i + 1) * 10);
    }
    for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it)
    {
        if (*it == 30)
            printf("num = %d\n", *it);
        else
            vec.erase(it);
    }
}