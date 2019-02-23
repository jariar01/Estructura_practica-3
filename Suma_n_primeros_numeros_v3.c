# include <stdio.h>
int main(int argc, char const *argv[])
{
	int num, Total, i;
	printf("Escribe cuantos numeros quieres sumar: ");
	scanf("%d", &num);
	Total=0;
	i=1;
	if(num>=1)	
	{
	for(num>=1;num>=i;i++)
	{Total=Total + i;}
	printf("La suma es de: %d\n", Total);
	}
	else	
		{
		printf("El numero ha de ser mayor o igual a 1\n");
		}
	return 0;
}
