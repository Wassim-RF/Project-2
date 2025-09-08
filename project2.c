#include <stdio.h>
#include <stdlib.h>

int main() {
    int i , j;
    char charactere;
    char mot[] = {'h' , 'e' , 'l' , 'l' , 'o' , '\0'};
    char tire[] = {'_' , '_' , '_' , '_' , '_' , '\0'};
    for (i = 0 ; i <= 5 ; i++) {
        printf("Entrer un lettre : ");
        scanf("%c" , &charactere);
        getchar();
        for (j = 0 ; j  < 5 ; j++) {
            if (charactere == mot[j]) {
                tire[j] = mot[j];
            } 
        }
        printf("%s\n" , tire);
        if (charactere != mot[0] && charactere != mot[1] && charactere != mot[2] && charactere != mot[3] && charactere != mot[4]) {
            printf("Mauvaise reponse.\n");
        }
    } 
    if (tire[0] == mot[0] && tire[1] == mot[1] && tire[2] == mot[2] && tire[3] == mot[3] && tire[4] == mot[4]) {
        printf("Congratulation.\n");
    } else  {
        printf("Game Over.\n");
    }
    return 0;
}