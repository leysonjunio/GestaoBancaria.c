#include <stdio.h>

void criarConta(){}
int trasferencia(){return 0;}
int saldoDaConta(){return 0;}
int login(){return 0;}

typedef struct{
    int id, telefone;
    char nome[50], email[30], cpf[12];
}person;

int main(){
    FILE * infile;

    infile = fopen("person.dat", "wb+");
    if(infile){
        person cliente1 = {1, 34413333, "joao vitor", "joao@email.com", "01010101"}; 
        fwrite(&cliente1, sizeof(person), 1, infile);
        fclose(infile);
    }

    return 0;
}