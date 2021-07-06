// KaDai.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>



/// <summary>
/// 第1問
/// x,y座標を持つ構造体Vector2を、
/// 作ってください。
/// x, yはpublicで作成し、外部で値を設定して、
/// 値が表示されることを確認してください。
/// </summary>
//struct Kadai
//{
//public:
//	int SetVec2_x;
//	int SetVec2_y;
//	int GetVec2_x() { return SetVec2_x; };
//	int GetVec2_y() { return SetVec2_y; };
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
//	kadai.SetVec2_x = vec2_x;
//	kadai.SetVec2_y = vec2_y;
//	printf_s("x%d,y %d", kadai.SetVec2_x,kadai.SetVec2_y);
//}

/*
第２問
x,y座標を持つ構造体Vector2を、
作ってください。
x,yはprivateで作成し、関数を介して値を設定できるようにして、
値が表示されることを確認してください。
*/

//struct  Kadai2
//{
//public:
//	
//	void SetVec2_x(int setVec2_x);
//	void SetVec2_y(int setVec2_y);
//private:
//	int vec2_x;
//	int vec2_y;
//};
//int main()
//{
//	int vec2_x, vec2_y;
//	Kadai2  kadai2;
//	printf("x座標を入力。\n");
//	scanf_s("%d", &vec2_x);
//	printf("y座標を入力。\n");
//	scanf_s("%d", &vec2_y);
//	kadai2.SetVec2_x(vec2_x);
//	kadai2.SetVec2_y(vec2_y);
//	printf_s("x%d,y %d", vec2_x, vec2_y);
//}
//
//void Kadai2::SetVec2_x(int setVec2_x)
//{
//	vec2_x = setVec2_x;
//}
//
//void Kadai2::SetVec2_y(int setVec2_y)
//{
//	vec2_y = setVec2_y;
//}
struct  Kadai3
{
public:
	void SetVec3_x(int setVec3_x);
	void SetVec3_y(int setVec3_y);
	void SetVec3_z(int setVec3_z);
private:
	int vec3_x;
	int vec3_y;
	int vec3_z;
};
int main()
{
	int vec3_x, vec3_y, vec3_z;
	Kadai3 kadai3;
	printf("x座標を入力。\n");
	scanf_s("%d", &vec3_x);
	printf("y座標を入力。\n");
	scanf_s("%d", &vec3_y);
	printf("z座標を入力。\n");
	scanf_s("%d", &vec3_z);
	kadai3.SetVec3_x(vec3_x);
	kadai3.SetVec3_y(vec3_y);
	kadai3.SetVec3_z(vec3_z);
	printf_s("x%d,y%d,z %d", vec3_x,vec3_y,vec3_z);
}

void Kadai3::SetVec3_x(int setVec3_x)
{
	vec3_x = setVec3_x;
}

void Kadai3::SetVec3_y(int setVec3_y)
{
	vec3_x = setVec3_y;
}

void Kadai3::SetVec3_z(int setVec3_z)
{
	vec3_x = setVec3_z;
}
