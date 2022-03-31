#include<stdio.h>
#include<stdlib.h>
#include"atividadecurso.h"
#include"atividadeunidade.h"

void gravar(){


FILE *arquivo;
//a função fopen e responsavel por criar um arquivo
//este arquivo fica disponivel em memoria ate o fechamento
arquivo = fopen("dados.txt","w");


    //Verificar se o arquivo existe. Se ele não existe, então
    //exibir a mensagem de arquivo não encontrado e sair da 
    //execução do programa

    if(arquivo==NULL){
        printf("Arquivo não encontrado ou não existe");
        exit(1); //encerrar o programa

    }


    curso cur, *pcur;
    unidade  uni, *puni;

    pcur=&cur;
    puni=&uni;


    printf("entre com o nome do curso:\n");
    fgets(pcur->nomedocurso,20,stdin);

    printf("entre com a carga horaria do curso:\n");
    fgets(pcur->cargahoraria,15,stdin);

    printf("entre com a data do inicio do curso:\n");
    fgets(pcur->datainicio,10,stdin);

    printf("entre com a data do termino do curso:\n");
    fgets(pcur->datatermino,10,stdin);

    printf("entre com o preco do curso:\n");
    fgets(pcur->preco,30,stdin);

    printf("entre com o nome da unidade:\n");
    fgets(puni->nomedaunidade,20,stdin);

    printf("entre com o endereco da unidade:\n");
    fgets(puni->enderecodaunidade,30,stdin);

    printf("entre com o horario de funcionamento da unidade:\n");
    fgets(puni->horariodefuncionamento,20,stdin);

    printf("entre com o telefone de contato da unidade:\n");
    fgets(puni->telefonecontato,15,stdin); 



    fprintf(arquivo,pcur->cargahoraria);
    fprintf(arquivo,pcur->nomedocurso);
    fprintf(arquivo,pcur->datainicio);
    fprintf(arquivo,pcur->datatermino);
    fprintf(arquivo,pcur->preco);
    fprintf(arquivo,puni->nomedaunidade);
    fprintf(arquivo,puni->enderecodaunidade);
    fprintf(arquivo,puni->horariodefuncionamento);
    fprintf(arquivo,puni->telefonecontato);
            




    fclose(arquivo);
    
}