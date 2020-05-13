/* hw8_11b */
#include <stdio.h>
#include <stdlib.h>

int find(int);

int main(void)
{
	int n1=5,n2=7;
	
	printf("孫子問題：有一堆東西不知道有幾個，三個三個數它剩兩個；五個五個數它剩三個；七個七個數它剩兩個；問這堆東西有幾個。\n");
	printf("孫子問題的第%d個數是%d\n",n1,find(n1));
	printf("孫子問題的第%d個數是%d\n",n2,find(n2));
	
	system("pause");
	return 0;
}

int find(int n)
{
	int cont=0,i=1;
	
	while(cont!=n)
	{
		if(i%3==2&&i%5==3&&i%7==2)
			cont+=1;
		
		i++;
	}
	
	return i-1;
}


/*

孫子問題：有一堆東西不知道有幾個，三個三個數它剩兩個；五個五個數它剩三個；七個七個數它剩兩個；問這堆東西有幾個。
孫子問題的第5個數是443
孫子問題的第7個數是653
Press any key to continue . . .

*/
