#include <stdio.h>


class TS
{
public:
	       TS(int x = 1000)
	       {
		         nArrya = new int[x];
				 
	       }



	        ~TS()
	        {
		          delete[] nArrya;    		        
	        }

public:
	        int* nArrya;


};
int main()
{
	        TS ts;



	        for (int i = 0; i < 1000; i++)
	        {
		          ts.nArrya[i] = i * 1;
		          printf("%d\n",ts.nArrya[i]);
	        }
}