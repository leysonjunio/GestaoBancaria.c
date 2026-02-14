#include <stdio.h>

typedef struct{
    int id, telefone;
    char nome[50], email[30], cpf[12];
}person;

void criarConta(){
    FILE * infile;

    infile = fopen("person.dat", "wb+");
    if(infile){
        person cliente1 = {1, 34413333, "joao vitor", "joao@email.com", "01010101"}; 
        fwrite(&cliente1, sizeof(person), 1, infile);
        fclose(infile);
    }

}
int trasferencia(){return 0;}
int saldoDaConta(){return 0;}
int login(){return 0;}


int main(){
    criarConta();
    return 0;
}