

#include <iostream>
#include <cstdlib>
#include <ctime>
#define random(x) rand()%(x)
using namespace std;


   /*第1問
    1. 16
    2. 79
    3. 62*/

    /*第2問
    1.510
    2.253
    3.1584
    */

    /*第3問
    char   = 1バイト
    int    = 4バイト
    float  = 4バイト
    double = 8バイト(
    */

    /*第4問
    ①が処理される
    */

    /*第5問
    34回
    */

    /*第6問
    20回
    */

    /*第7問
    4*5 = 20
    */

    /*第8問
     ① = 20
    */

    /*第9問
    int
    */
    

 /*  第10問
     int main()
    {
        int Avec2_x, Avec2_y, Bvec2_x, Bvec2_y,x,y,J;
        	printf("Aのx座標を入力。\n");
        	scanf_s("%d", &Avec2_x);
        	printf("Aのy座標を入力。\n");
        	scanf_s("%d", &Avec2_y);
            printf("Bのx座標を入力。\n");
            scanf_s("%d", &Bvec2_x);
            printf("Bのy座標を入力。\n");
            scanf_s("%d", &Bvec2_y);
            x = Avec2_x - Bvec2_x;
            y = Avec2_x - Bvec2_y;
            J = sqrt(x * x + y * y);
            printf_s("%d",J );
        	
     }
    */

/*
第11問
*/
struct Card
{
private:
    int Num;
    char Bj;
public:
    int GetNum() { return Num; }
    char GetBj() { return Bj; }
    void SetNum  (int setNum) ;
    void SetBj  (int setBj) ;
    
        
};
Card m_card[53];
int main()
{
     int SC();
    int card();  
        std::cout << m_card[SC()].GetBj() << m_card[SC()].GetNum() << "\n";  
}
void Card::SetNum(int setNum)
{
    Num = setNum;
}

void Card::SetBj(int setBj)
{
    Bj = setBj;
}
void card()
{
   
    int  card = 53;
    int suit = -1;
    int temp;
    for (int i = 0; i < card; i++)
    {
        if (i % 13 == 0)
        {
            suit++;
        }
        temp = i % 13;

        if (i > 0 && i <= 13)
        {
            m_card[i].SetBj('hot');
            m_card[i].SetNum(suit);
        }
        else if (i > 13 && i <=26 )
        {
            m_card[i].SetBj('hit');
            m_card[i].SetNum(suit);
        }
        else if (i > 26 && i <= 39)
        {
            m_card[i].SetBj('cah');
            m_card[i].SetNum(suit);
        }
        else if (i > 39 && i <= 52)
        {
            m_card[i].SetBj('fap');
            m_card[i].SetNum(suit);
        }
        else if (i == 53)
        {
            m_card[i].SetBj('w');
        }
    }
}
void SC()
{
    srand( time(NULL));  
    for (int i = 0; i < 1 ; i++)
    {
        cout << random(43) << " ";
    }
 
}