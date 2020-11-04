#include <stdio.h>

int a[6];
int Positivos() {

  int cont;

  printf("Digite apenas números maiores que zero:\n");

  for(cont=0; cont<6; cont++){

    do{
      scanf("%d", &a[cont]);
      if(a[cont]<=0){
        printf("Digite apenas números maiores que zero\n");
      }
    } while (a[cont]<=0);
  }
  return 0;
}

int Media3(){

  int cont, cont3 = 0;
  float soma3 = 0;
    
    for(cont=0; cont<6; cont++){
      if(a[cont]%3==0){
        soma3=soma3+a[cont];
        cont3=cont3+1;
      }
    }
    if(cont3==0){
      printf("Não foi digitado nenhum múltipo de 3\n");
    } else {
      printf("A média dos números multiplos de 3 contidos no vetor A e %.2f",soma3/cont3);
  
    }
  return 0;
}

int main() {
    Positivos();
    Media3();
  
}