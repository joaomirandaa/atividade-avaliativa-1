QUESTAO 1
int main() {
    int A, B, C, D, DIFERENCA;

    // Lê os valores de A, B, C e D
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    printf("Digite o valor de C: ");
    scanf("%d", &C);
    printf("Digite o valor de D: ");
    scanf("%d", &D);

    DIFERENCA = A * B - C * D;

    printf("DIFERENCA = (%d * %d - %d * %d)\n", A, B, C, D);
    printf("DIFERENCA = (%d)\n", DIFERENCA);

    return 0;
}

QUESTAO 2
#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distancia;

    printf("Digite as coordenadas do ponto p1 (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Digite as coordenadas do ponto p2 (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Distancia = %.4f\n", distancia);

    return 0;
}

QUESTAO 3

#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main()
{

    double raio, volume, area;

    scanf("%lf", &raio);

    volume = (4.0 * PI * (raio * raio * raio)) / 3;
    area = 4 * PI * (raio * raio);

    printf("VOLUME = %.3f\n", volume);
    printf("AREA = %.3f\n", area);

    system("pause");

    return 0;
}


QUESTAO 4
int main() {
	
    float x, y;

    printf("Digite as coordenadas do ponto (x, y): ");
    scanf("%f %f", &x, &y);

    if (x == 0 && y == 0) {
        printf("Origem\n");
    } else if (x == 0) {
        printf("Eixo Y\n");
    } else if (y == 0) {
        printf("Eixo X\n");
    } else if (x > 0 && y > 0) {
        printf("Quadrante 1\n");
    } else if (x < 0 && y > 0) {
        printf("Quadrante 2\n");
    } else if (x < 0 && y < 0) {
        printf("Quadrante 3\n");
    } else {
        printf("Quadrante 4\n");
    }

    return 0;
}

QUESTAO 5
#include <stdio.h>
#include <math.h>

int main() {
    int num;

    printf("Digite um numero positivo: ");
    scanf("%d", &num);

    printf("Os divisores do numero %d sao: ", num);

    for (int i = 1; i <= sqrt(num); i++) {
        if (num % i == 0) {
            printf("%d ", i);

            if (i != sqrt(num)) {
                printf("%d ", num/i);
            }
        }
    }

    printf("\n");

    return 0;
}

QUESTAO 6
#include <stdio.h>

int main()
{
    int i, n;

    printf("Informe um numero inteiro");
    scanf("%i", &i);

    for (i = 0; i <= n; i++)
    {
        if (n % 3 == 0)
        {
            printf("\n %i -numero multiplo de 3", i);
        }
        if (n % 5 == 0)
        {
            printf("\n %i -numero multiplo de 5", i);
        }
        else
        {
            printf("\n %i nao e multiplo de 3 e 5", i);
        }
    }
    return 0;
}

QUESTAO 7
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;                        
    int seq = 1, seqA = 0, seqAux; 

    printf("Quantos termos da sequencia de Fibonacci deseja ver? ");
    scanf("%d", &n);

    printf("\n0 ");
    n--;

    while (n)
    {
        printf("%d ", seq);
        seqAux = seq;
        seq += seqA;
        seqA = seqAux;
        n--;
    }

    printf("\n\n");

    return 0;
}
QUESTAO 8

#include <stdio.h>
#include <stdlib.h>

int main()

{

    int num = 0, mai = -1, men = 1000, n;

    do

    {

        printf("\nDigite um numero:\n");

        scanf("%d", &n);

        if (n > mai)

        {

            mai = n;
        }

        if (n < men)

        {

            men = n;
        }

        num = n;

    } while (num >= 0);

    printf("\n\n-=-=-=-[ Maior numero digitado ]-=-=-=-\n%d\n\n-=-=-=-[ Menor numero digitado ]-=-=-=-\n%d", mai, men);

    return 0;
}

QUESTAO 9

#include <stdio.h>
#include <stdlib.h>
int main(){
	char v [8];
	int quantabacaxi;
	int quantmaca;
	int quantpera;
	float calc;
	
	    do{ printf("======MENU FRUTAS======\n"); 
	        printf("1 => ABACAXI-- 5,00 a unidade\n");
	        printf("2 => MACA -- 1,00 a unidade\n");
	        printf("3 => PERA -- 4,00 a unidade\n");
	
	        printf("Indique a quantidade de cada fruta. Se nao quiser determinada fruta, digite 0:\n");
	        printf("ABACAXI: ");
	        scanf("%d",&quantabacaxi);
	        printf("MACA: ");
	        scanf("%d",&quantmaca);
	        printf("PERA: ");
	        scanf("%d",&quantpera);
	        calc = quantabacaxi*5.0 + quantmaca*1.0 + quantpera*4.0;
	        printf("O valor total da compra foi: %.2f\n",calc);
	
	        printf("Digite 'voltar' para retornar ao menu: ");
	        scanf("%s",&v);
	        system("cls");
	}while( v[8] = 'voltar');
	
	    return 0; 
}

QUESTAO 10

#include <stdio.h>
int main()
{
    int numero, guarda_maior, guarda_menor;
    int i;

    printf("Entre com o 1o numero inteiro: ");
    scanf("%i", &numero);

    guarda_maior = numero;
    guarda_menor = numero;

    for (i = 1; i < 10; i++)
    {
        printf("\nEntre com o %do numero inteiro: ", i + 1);
        scanf("%i", &numero);

        if (numero > guarda_maior)
            guarda_maior = numero;
        else if (numero < guarda_menor)
            guarda_menor = numero;
    }

    printf("\nO menor numero entrado e: %d", guarda_menor);
    printf("\nO maior numero entrado e: %d", guarda_maior);
    
    return 0;
}



