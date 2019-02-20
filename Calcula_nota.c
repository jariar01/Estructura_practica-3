# include <stdio.h>

int main()
{
int num;
printf("Escribe la nota numerica: ");
scanf("%d", &num);
if ((num == 5) || (num == 6)){printf("Aprobado\n");}
else{ if ((num == 7) || (num == 8)){printf("Notable\n");}
      else {if ((num == 9) || (num == 10)){printf("SObresaliente\n");}
            else{printf("Suspenso\n");}
}
}return 0;
}
