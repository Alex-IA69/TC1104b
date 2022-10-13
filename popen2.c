#include <stdio.h>

int main(){
    // popen corre un programa 
    // en este caso lee un archivo y escribe el otro
    FILE *lsOutput;
    FILE *tomayIntput;
    char readBuffer[80];
    lsOutput = popen("ls | wc", "r"); // read a este archivo
    tomayIntput = popen("./tomay", "w"); // write a este archivo
    while(fgets(readBuffer, 80, lsOutput)){ // lee una cadena de archivos del read buffer, tamaño 80 (c) y lo lee de lsOutput
        fputs(readBuffer, tomayIntput); // escribe una cadena de archivos del readBuffer a tomayIntput
    }
    pclose(lsOutput);
    pclose(tomayIntput);
}