// ConsoleApplication4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>


  /* 第一问 1.1000001
          2.1011111
   第二问 1.129
          2.191
   第三问 char 0-255
           int -2147483648-2147483647
         float -3.40E+38 - 3.40E+38
         double -1.7E308-1.7E308
   第四问 

   第五问 ②
   第六问  */
//int main()
//{
//    int  x, y, i,j;
//    printf("1番目に入力された値。\n");
//    scanf_s("%d", &x);
//    printf(" 2番目に入力された値。\n");
//    scanf_s("%d", &y);
//    if (x % 2 == 0)
//    {
//       printf("1番目が偶数なので引き算");
//       i = x / y;
//       printf("=%d", i);
//    }
//    else
//    {
//        printf("1番目が奇数なので足し算");
//        j = x * y;
//        printf("=%d", j);
//    }  
//}

//int main()
//{
//    
//    while (true)
//    {
//
//        char x, y;
//        int  i, j;
//        
//            printf("1番目に入力された値。\n");
//            scanf_s("%d", &x);
//            if (x = 'end')
//            {
//                break;
//            }
//            printf(" 2番目に入力された値。\n");
//            scanf_s("%d", &y);
//            
//             if (x % 2 == 0)
//             {
//                    printf("1番目が偶数なので引き算");
//                    i = x / y;
//                    printf("=%d \n", i);
//             }
//             else
//             {
//                    printf("1番目が奇数なので足し算");
//                    j = x * y;
//                    printf("=%d \n", j);
//             }
//
// 
//        
//    }
//}
class Point
{
public:
     Point() { Clear(); }

    void Clear()
    {
        x = 0;
        y = 0;
        z = 0;
    }
    
    
public:
    int x, y, z;
    
    
};
int main()
 {
    Point point;
    Point nextPoint;

    nextPoint.x = 100;
    nextPoint.y = 30;

    while (1)
    {
        if (point.x < nextPoint.x)
        {
            point.x++;
        }
        else if (point.x > nextPoint.x)
        {
            point.x--;
        }

        if (point.y < nextPoint.y)
        {
            point.y++;
        }
        else if (point.y > nextPoint.y)
        {
            point.y--;
        }
        printf("pointX = %d\n", point.x);
        printf("pointY = %d\n", point.y);

        if (point.x == nextPoint.x &&
            point.y == nextPoint.y)
        {
            break;
        }
    }
}

    

 




