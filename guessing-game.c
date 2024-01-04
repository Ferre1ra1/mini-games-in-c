#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 1;
    const int MAX = 100;
    int guess, guesses, answer;

    srand(time(0));

    answer = (rand() % MAX) + MIN;

    do
    {
        printf("De um chute: ");
        scanf("%d", &guess);
        if (guess > answer)
        {
            printf("E um valor menor!\n ");
        }
        else if (guess < answer)
        {
            printf("E um valor maior!\n ");
        }
        else if (guess == answer)
        {
            printf("Voce acertou!!!!\n ");
        }
        guesses++;
    } while (guess != answer);

    printf("********************\n");
    printf("Resposta: %d\n", answer);
    printf("Numero de tentativas: %d\n", guess);
    printf("********************");

    return 0;
}