#include <stdio.h>


class TS
{
public:
	       TS(int x = 1000)
	       {
		         nArrya = new int[x];
				 
	       }
		   
		   void Set(int setnArrya);
		   void Get(int getnArrya);



	        ~TS()
	        {
		          delete[] nArrya;    		        
	        }

private:
	        int* nArrya;


};
int main()
{
	        TS ts;



	        for (int i = 0; i < 1000; i++)
	        {
			        ts.Set(i);
	        }
			for (int i = 0; i < 1000; i++)
			{
				    ts.Get(i);
			}
}

void TS::Set(int setnArrya)
{
	nArrya[setnArrya] = setnArrya;
}

void TS::Get(int getnArrya)
{
	printf("%d\n", nArrya[getnArrya]);
}
