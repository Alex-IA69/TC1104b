#include <stdio.h>
#include <signal.h>
#include <unistd.h>

// indica qué señal recibe el programa

int x = 1;

void hola(int signalNumb){
    printf("Recibi la senal %d\n", signalNumb);
    if(signalNumb == 12){
        x = 0;
    }
}

int main(){
    signal(2, hola);
    signal(12, hola);
    while(x){
        printf("trabajando\n");
        sleep(1);
    }
    printf("aqui nunca llega\n");
    return 0;
}