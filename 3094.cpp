//Memory Time 
//224K   16MS 

#include<iostream>
#include<cstring>
using namespace std;

int value[91];

void value_alphabet(void)
{
	int i,j;
	for(i='A',j=1;i<='Z';i++,j++)
		value[i]=j;
	value[' ']=0;
	return;
}


int main(void)
{
	char input[10000];
	for(;;)
	{
		value_alphabet();

		gets(input);
		if(!strcmp(input,"#"))
			return 0;

		const int length=strlen(input);
		int i,quicksum;
		for(i=0,quicksum=0;i<length;i++)
		    quicksum+=(i+1)*value[input[i]];
		cout<<quicksum<<endl;
	}
	return 0;
}
