#include<stdio.h>
#include<conio.h>

float fmedia(float n1, float n2) //Função
{
      float m = 0;
      m = (n1 + n2)/2;
      return m;
}
 main()
 {
     float num1 = 0, num2 = 0;

      printf("Digite a nota 1 do aluno: ");
      scanf("%f", &num1);
      printf("Digite a nota 2 do aluno: ");
      scanf("%f", &num2);
      
      printf("\n\n A media do aluno foi %6.2f", fmedia(num1, num2));
      
            getch();
            }