#include <pthread.h>
#include <stdio.h>
#define NUM_THREADS 10

int saldo;

// typedef struct threadData{ //crea un número para un hilo con alias char
//     int threadId;
//     char name[20];
// } ThreadData;
// typedef char character;

// void * holaMundo(void *arg){ // void * es un apuntador a la nada
//     ThreadData *myData = (ThreadData *)arg;
//     printf("Hola desde el hilo, id %d\n", myData->threadId);
//     pthread_exit(NULL); // avisa al main que concluyó el hilo
//     //return NULL;
// }

int main(){
    ThreadData threadData[NUM_THREADS];
    for (int i = 0; i < NUM_THREADS; i++){ //realiza 100 veces el mismo hilo
        pthread_t threadId;
        threadData[i].threadId = i;
        pthread_create(&threadId, NULL, holaMundo, (void *) &threadData[i]); //void * le hace un cast de tipo 
    }
    pthread_exit(NULL); // termina código
    printf("Nunca llega aqui");
}