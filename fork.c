#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main(){
    int pid = fork();
    if(pid == 0){
        printf("Soy el proceso hijo.\n");
        //execl("/workspace/TC1104b/holi", "holi", NULL); //requiere ruta
        execlp("holi", "holi", NULL);
        sleep(5);
        printf("Mamasti, no se ejectuó nada\n");
    }else{
        printf("Soy el proceso padre.\n");
        wait(NULL);
    }
}