#include<stdio.h>

main(){

    int idade, tempoServico;

    printf("Digite a idade");
    scanf("%d", &idade);
    printf("Digite o tempo de serviço");
    scanf("%d", &tempoServico);

    if(idade >= 65 || tempoServico >= 30 || (idade >= 60 && tempoServico >=25)){
        printf("Pode se aponsentar");
    }else{
        printf("Nao pode se aponsentar ");
    }

}