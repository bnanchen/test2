//
//  main.c
//  Serie01
//
//  Created by Bastian Nanchen on 24/02/16.
//  Copyright © 2016 Bastian Nanchen. All rights reserved.
//

#include <stdio.h>

int main(void) {
    printf("Quel âge avez-vous monsieur? \n");
    int age = 0;
    scanf("%d", &age);
    int annee = 2016 - age;
    printf("L'année de naissance est %d \n", annee);
    return 0;
}
