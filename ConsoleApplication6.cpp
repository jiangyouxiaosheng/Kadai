#include <stdio.h>


class TS
{
public:
	       TS()
	        {
		         newArray = new int[1000];
	        }
	        ~TS()
	         {
		          delete[] newArray;
		          newArray = nullptr;
		          printf("%p\n", newArray);
	        }

public:
	        int* newArray;


};
int main()
{
	        TS ts;



	        for (int i = 0; i < 1000; i++)
	        {
		          ts.newArray[i] = i * 1;
		          printf("%d\n",ts.newArray[i]);
	        }
}