#include <stdio.h>
#include <ctype.h>



int main()
{
    char questoes[][100] = {"1. Qual dessas opções não é uma linguagem de programação?: ",
                            "2. Qual dessas linguagens não é originária de C?:",
                            "3. Qual dessas opções não é um framework ?: ",
                            "4. Qual linguagem é usada para desenvolvimento de aplicações mobile ?: "
    };
                            
    char opcoes[][100] = {"A. SCSS", "B. JAVA", "C. C#", "D. ELIXIR",
                          "A. PYTHON", "B. JAVA", "C. C", "D. JAVASCRIPT",
                          "A. ANGULAR.JS", "B. SPRING", "C. EMBER", "D. C#",
                          "A. FAST", "B. JAVA", "C. RUBY", "D. C#"
    };

    char resposta[4] = {'A', 'D', 'D', 'C'};
    
    int numeroDQuestoes = sizeof(questoes)/sizeof(questoes[0]);

    char chute;
    int pontos = 0;
    
    printf("QUIZ GAME\n");
    
    for(int i = 0; i < numeroDQuestoes; i++ ){
        printf("****************\n");
        printf("%s\n",questoes[i]);
        printf("****************\n");

    for(int j = (i * 4); j < (i * 4) + 4; j++)
    {
        printf("%s\n", opcoes[j]);
    }
    
    printf("chute: ");
    scanf("%c",&chute);
    scanf("%*c");
    
    chute = toupper(chute);
    
    if(chute == resposta[i])
      {
         printf("CORRECT!\n");
         pontos++;
      }
      else
      {
         printf("WRONG!\n");
      }
     }
     
   printf("*********************\n");
   printf("FINAL SCORE: %d/%d\n", pontos, numeroDQuestoes);
   printf("*********************\n");
    
    return 0;
}