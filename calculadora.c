#include <stdio.h>
#include <stdlib.h>

int main()
{
    float investimento, viewsIniciais, views, viewsMaximas, cliks, compartilhamento, viewsNovas;
    int i = 0;
    printf("Digite o valor do investimento:");
    scanf("%f", &investimento);
    printf("Investimento inicial: %.2f \n", investimento);
    
    viewsIniciais = investimento * 30;
    views = viewsIniciais;
    viewsMaximas = viewsIniciais;
    
    for(i=0; i<4; i++){
        cliks = (views/100)*12;
    
        compartilhamento = (cliks/20)*3;
    
        viewsNovas = compartilhamento*40;
    
        viewsMaximas = viewsMaximas +viewsNovas;
    
        views = viewsNovas;
    }
    
    printf("Engajamento máximo: %.2f", viewsMaximas);

    return 0;
}
