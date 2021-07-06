// KaDai.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>



 //<summary>
 //第1問
 //x,y座標を持つ構造体Vector2を、
 //作ってください。
 //x, yはpublicで作成し、外部で値を設定して、
 //値が表示されることを確認してください。
 //</summary>
//struct Kadai
//{
//public:
//	int vec2_x;
//	int vec2_y;
//	
//private:
//};
//int main()
//{
//	int vec2_x, vec2_y;
//	Kadai kadai;
//	printf("x座標を入力。\n");
//	scanf_s("%d", &vec2_x);
//	printf("y座標を入力。\n");
//	scanf_s("%d", &vec2_y);
//	kadai.vec2_x = vec2_x;
//	kadai.vec2_y = vec2_y;
//	printf_s("x%d,y %d", kadai.vec2_x,kadai.vec2_y);
//}

/*
第２問
x,y座標を持つ構造体Vector2を、
作ってください。
x,yはprivateで作成し、関数を介して値を設定できるようにして、
値が表示されることを確認してください。
*/

//
//struct  Kadai2
//{
//public:
//void setX(int x)
//{
//	vec2_x = x;
//}
//void setY(int y)
//{
//	vec2_y = y;
//}
//	int getX()
//	{
//		return vec2_x;
//	}
//	int getY()
//	{
//		return vec2_y;
//	}
//private:
//	int vec2_x;
//	int vec2_y;
//};
//int main()
//{
//	Kadai2 kd2;
//	kd2.setX(2);
//	kd2.setY(2);
//	printf_s("kd2: %d, %d", kd2.getX(), kd2.getY());
//}


struct  Kadai3
{
public:
	void setX(int x)
	{
		vec3_x = x;
	}
	void setY(int y)
	{
		vec3_y = y;
	}
	void setZ(int z)
	{
		vec3_z = z;
	}
	int getX()
	{
		return vec3_x;
	}
	int getY()
	{
		return vec3_y;
	}
	int getZ()
	{
		return vec3_z;
	}
private:
	int vec3_x;
	int vec3_y;
	int vec3_z;
};
int main()
{
	Kadai3 kd3;
	kd3.setX(2);
	kd3.setY(2);
	kd3.setZ(2);
	printf_s("kd2: %d, %d", kd3.getX(), kd3.getY(),kd3.getZ());
}

