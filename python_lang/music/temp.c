#include<stdio.h>
#include<stdlib.h>
int main(){
    char file[] = "/home/mayank/ubuntu_folders/repos/learning-repos/python_lang/music/Doraemon.mp3";
    char command[256];
    sprintf(command,"mpg123 %s","/home/mayank/ubuntu_folders/repos/learning-repos/python_lang/music/Doraemon.mp3");
    int returnCode = system(command);

    if (returnCode == -1) {
        perror("system"); // Print error message
    } else {
        printf("mpg123 exited with code: %d\n", returnCode);
    }
}