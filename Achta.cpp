#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <ctype.h>


/* DECLARATION DES FONCTIONS DES PROGRAMMES SIMPLES */
void executer_programme_simple1();
void executer_programme_simple2();
void executer_programme_simple3();
void executer_programme_simple4();
void executer_programme_simple5();
void executer_programme_simple6();
void executer_programme_simple7();
void executer_programme_simple8();
void executer_programme_simple9();
void executer_programme_simple10();

/* DECLARATION DES FONCTIONS DES PROGRAMMES COMPLEXES */
void executer_programme_complexe1();
void executer_programme_complexe2();
void executer_programme_complexe3();
void executer_programme_complexe4();
void executer_programme_complexe5();
void executer_programme_complexe6();
void executer_programme_complexe7();
void executer_programme_complexe8();

/* DECLARATIONS DES FONCTIONS ANNEXES */

/*DECLARATIONS DES FONCTIONS ANNENES SIMPLES */
int pgcd(int a, int b);
int ppcm(int a,int b);



/*DECLARACTIONS DES FONCTIONS ANNEXES COMPLEXES */
void fusionner_tableau(int *t1, int taille1, int *t2, int taille2, int **t3, int *taille3);
void supprimer_zeros(int *array, int *size);
int rechercher_binaire(int *array, int size, int key);
int sont_miroirs(char *array1, char *array2);
int est_palindrome(char *arr, int size);
int longue_monotonie_croissante(int arr[], int size);
void carre_matrice(int mat[][3], int result[][3], int n);
int est_diagonal(int mat[][3], int n);

int main() {
    char input[70];
    int choix = 0;
    int validInput = 0;
    system("color 30");
	   system("cls");
		printf("\n\n");
		printf("bonjour\n\n");
		printf("Demarrage de programme...... Veuillez Patienter S\'il Vous Plait\n");
		Sleep(1000);
		printf("\n\n");
		printf(" BIENVENUE\n");Sleep(1000);
	do{
		system("cls");
    printf("|------ MENU GENERAL ---------|\n");
    printf("| 1 - PROGRAMME SIMPLE        |\n");
    printf("| 2 - PROGRAMME COMPLEXE      |\n");
    printf("| 0 - QUITTER                 |\n");
    printf("-------------------------------\n");
    do{
    printf("CHOISIR UNE OPTION : ");
    scanf("%s", &input);
    validInput = 1; 
    // Vérifier chaque caractère de l'entrée pour s'assurer qu'il s'agit d'un chiffre
        for (int i = 0; i < strlen(input); i++) {
            if (!isdigit(input[i])) {
                validInput = 0;
                printf("\nErreur!!!!!\n\n S'il vous plait veuillez entrer un nombre valide.\n\n");
                break;
            }
        }

        if (validInput) {
            // Convertir l'entrée en nombre entier
            sscanf(input, "%d", &choix);
        }
	}
	while(!validInput);
    switch (choix) {
    case 1:
    	system("color 50");
    do {
    printf("\n\n==============MENU PROGRAMMES SIMPLES ======================\n");
    printf("| 1 - SOMME ACQUISE SUR SON COMPTE                              |\n");
    printf("| 2 - SAVOIR SI UN NOMBRE COMPRIS ENTRE 1 ET 50 EST PARFAIT     |\n");
    printf("| 3 - CALCULER LE FACTORIEL                                     |\n");
    printf("| 4 - CALCULER LA PUISSANCE D\'UN NOMBRE                        |\n");
    printf("| 5 - SIMULER L'AFFICHAGE D'UN COMPTE A REBOURS                 |\n");
    printf("| 6 - SAVOIR SI UN NOMBRE EST PREMIER                           |\n");
    printf("| 7 - CALCULER LE PGCD                                          |\n");
    printf("| 8 - CALCULER LE PPMC                                          |\n");
    printf("| 9 - L\'OPERATION                                              |\n");
    printf("| 10- REALISER LE JEU                                           |\n");
    printf("| 0 - RETOUR                                                    |\n");
    printf("================================================================|\n");
    do{
	printf("CHOISIR UN PROGRAMME SIMPLE : "); 
     scanf("%s", &input);
    validInput = 1; 
    // Vérifier chaque caractère de l'entrée pour s'assurer qu'il s'agit d'un chiffre
        for (int i = 0; i < strlen(input); i++) {
            if (!isdigit(input[i])) {
                validInput = 0;
                printf("\nErreur!!!!\n\nVeuillez entrer un nombre valide.\n\n");
                break;
            }
        }

        if (validInput) {
            // Convertir l'entrée en nombre entier
            sscanf(input, "%d", &choix);
        }
	}
	while(!validInput);
    switch (choix) {
    case 1:
    executer_programme_simple1();
    break;
    case 2:
    executer_programme_simple2();
    break;
    case 3:
    executer_programme_simple3();
    break;
    case 4:
    executer_programme_simple4();
    break;
    case 5:
    executer_programme_simple5();
    break;
    case 6:
    executer_programme_simple6();
    break;
    case 7:
    executer_programme_simple7();
    break;
    case 8:
    executer_programme_simple8();
    break;
    case 9:
    executer_programme_simple9();
    break;
    case 10:
    executer_programme_simple10();
    break;
    case 0:
    break;
    default:
    printf("Le choix est invalide\n");
    break;
    }
    } while (choix != 0);
    break;
    case 2:
    	system("color 40");
    do {
    printf("\n\n============== MENU PROGRAMMES COMPLEXES ======================\n");
    printf("| 1 - FUSION ET TRIE DE DEUX TABLEAUX                              |\n");
    printf("| 2 - COMPTER ET SUPPRIMER LES VALEURS NULLES D\'UN TABLEAU        |\n");
    printf("| 3 - RECHERCHE DICHOTOMIQUE D\'UN NOMBRE DANS UN TABLEAU          |\n");
    printf("| 4 - VERIFACATION DE TABLEAUX MIROIR                              |\n");
    printf("| 5 - VERIFICATION DE TABLEAUX PALINDROME                          |\n");
    printf("| 6 - LA TAILLE DE LA PLUS LONGUES MONOTONIE CROISSANTE            |\n");
    printf("| 7 - CARRE MATRICE                                                |\n");
    printf("| 8 - LA MATRICE DIAGONAL                                          |\n");
    printf("| 0 - RETOUR                                                       |\n");
    printf("===================================================================\n");
    do{
	printf("CHOISIR UN PROGRAMME COMPLEXE : ");
     scanf("%s", &input);
    validInput = 1; 
    // Vérifier chaque caractère de l'entrée pour s'assurer qu'il s'agit d'un chiffre
        for (int i = 0; i < strlen(input); i++) {
            if (!isdigit(input[i])) {
                validInput = 0;
                printf("\nNombre n'existe pas!!!\n\nVeuillez entrer un nombre valide.\n");
                break;
            }
        }

        if (validInput) {
            // Convertir l'entrée en nombre entier
            sscanf(input, "%d", &choix);
        }
	}
	while(!validInput);
    switch (choix) {
    case 1:
		executer_programme_complexe1();
    	break;
    case 2:
    	executer_programme_complexe2();
    	break;
    case 3:
    	executer_programme_complexe3();
    	break;
    case 4:
    executer_programme_complexe4();
    break;
    case 5:
    executer_programme_complexe5();
    break;
    case 6:
    executer_programme_complexe6();
    break;
    case 7:
    executer_programme_complexe7();
    break;
    case 8:
    executer_programme_complexe8();
    break;
    case 0:
    break;
    default:
    printf("Le choix est invalide\n");
    break;
    }
    } while (choix != 0);
    break;
    case 0:
    exit(0);
    default:
    printf("Le choix est invalide\n");
    break;
    }
    } while (1);

    return 0;
}



void executer_programme_simple1() {
	char rep;
	do{
	    float  c,x;
	    const int a =100;
	    int b;
	    x= a;
	    for (b = 1; b <= 20; b++) {
		c = (x* 2.25) / 100;
	    x= x+c;
	
	    printf("L'interet pour la %d e annee est de %.2f\n",b, c);
	
	
	    printf("Le montant dans le compte a la %d e annee est %.2f\n", b,x);
	    }
	    
		printf("Continuer ? O/N : ");
    	scanf(" %c", &rep);
    } while (rep != 'n' && rep != 'N');
	    
}

void executer_programme_simple2(){
    int a, b;
    char rep;
    /* Nombre Parfait */
    printf("SAVOIR SI UN NOMBRE COMPRIS ENTRE 1 ET 50 EST PARFAIT");
    do {
	    do {
	    printf("Saisir un nombre entre 1 et 50 : ");
	    scanf("%d", &a);
	    } while (a < 1 || a > 50);
    b = 0;
    int i;
    for (i = 1; i <= a / 2; i++)
	{
    if (a % i == 0) {
    	b += i;
    }
    }
    if (b == a) {
    printf("Le nombre est parfait\n");
    } else {
    puts("Le nombre n\'est pas parfait\n");
    } 
    printf("Continuer ? O/N : ");
    scanf(" %c", &rep);
    } while (rep != 'n' && rep != 'N');
}

void executer_programme_simple3(){
    int a, b;
    char rep;
    /* Factoriel D'un Nombre */
    printf("CALCULER LE FACTORIEL ");
    do {
    printf("Saisir un nombre : ");
    scanf("%d", &a);
    if (a == 0 || a == 1) {
    printf("Le factoriel est 1\n");
    } else if (a < 0) {
    printf("ERREUR\n");
    } else {
    b = 1;
    int i;
    for (i = a; i > 1; i--)
    b *= i;
    printf("%d factoriel est egal a %d\n", a, b);
}
    printf("Continuer ? O/N : ");
    scanf(" %c", &rep);
    } while (rep != 'n' && rep != 'N');
}
void executer_programme_simple4() {
   	int n,p,i,k;
   	char rep;
   	do{
		do{
			printf("entrez l'entier: ");
			scanf("%d",&n);
		}while(n<=1);
		do
		{
		printf("entre la puissance: ");
		scanf("%d",&p);
		}while(p<0);
		if(p==0)
		k=1;
		else
		k=1;
		for(i=1;i<=p;i+=1)
		k=k*n;
	
		printf("%d de la puissance %d est egal a %d",n,p,k);
	
		printf("\nContinuer ? O/N : ");
    	scanf(" %c", &rep);
    } while (rep != 'n' && rep != 'N');
}

void executer_programme_simple5() {
    int sec,min;
    char rep;
    do{
		do
		{
			printf("entre le nombre de minute ");
			scanf("%d",&min);
		}while(min<0||min>59);
		do
		{
			printf("entre le nombre de seconde ");
			scanf("%d",&sec);
		}while(sec<0|| min>59);
		while(min!=0||sec!=0)
		{
			if(sec!=0)
			sec=sec-1;
			else{
				sec=59;
				min-=1;
			}
			printf("%d:%d\n",min,sec);
		}
		getchar();
    	printf("\nContinuer ? O/N : ");
    	scanf(" %c", &rep);
    } while (rep != 'n' && rep != 'N');
    
}

void executer_programme_simple6() {
	int n,i=2;
	bool premier=true;
	char rep;
	do{
		puts("saisir un nombre \n");
		scanf("%d",&n);
		while(i<=n/2 && premier==true)
		{
			if(n%i==0){
				premier =false;
				i++;	
			}
		}
		if(premier==true)
		printf("%d est premier\n",n);
		else
		printf("%d n\'est pas premier\n",n);
		getchar();
		
    	printf("\nContinuer ? O/N : ");
    	scanf(" %c", &rep);
    } while (rep != 'n' && rep != 'N');
}

void executer_programme_simple7() {
    int nombre1, nombre2;
    char rep;

    do {
        /* Demander à l'utilisateur de saisir les nombres */
        printf("Entrez le premier nombre : \n");
        scanf("%d", &nombre1);
        printf("Entrez le deuxieme nombre : \n");
        scanf("%d", &nombre2);
        
        /* calculer et afficher le PGCD */
        printf("Le PGCD de %d et %d est : %d\n", nombre1, nombre2, pgcd(nombre1, nombre2));
        
        printf("\nContinuer ? O/N : ");
        scanf(" %c", &rep);
    } while (rep != 'n' && rep != 'N');
}

void executer_programme_simple8() {
	/*Fonction pour calculer le PPCM (plus petit commun multiple) */
	
	char rep;
	do{
	    int num1, num2;
	    printf("Entrez le premier nombre : ");
	    scanf("%d", &num1);
	
	    printf("Entrez le deuxième nombre : ");
	    scanf("%d", &num2);
	
	    int resultat = ppcm(num1, num2);
	
	    printf("Le PPCM de %d et %d est : %d\n", num1, num2, resultat);
	    
	    printf("\nContinuer ? O/N : ");
	    scanf(" %c", &rep);
    } while (rep != 'n' && rep != 'N');
}



void executer_programme_simple9() {
    int a, b;
    char rep;
    /* SIGNE D'UN PRODUIT */
    printf("SIGNE D'UN PRODUIT");
    do {
    printf("\nSaisir deux nombres : ");
    scanf("%d %d", &a, &b);

    if ((a < 0 && b < 0) || (a > 0 && b > 0)) {
    puts("Le produit est positif");
    } else if (a == 0 || b == 0) {
    puts("Le produit est nul");
    } else {
    puts("Le produit est negatif");
    }
    printf("Continuer ? O/N : ");
    scanf(" %c", &rep);
    } while (rep != 'n' && rep != 'N');
}
 
void executer_programme_simple10()  {
    int nordi, nessai, nuser;
    char rep;

    do {
        srand(time(NULL));
        nordi = rand() % 100 + 1;
        nessai = 0;

        do {
            puts("Devinez le nombre : ");
            scanf("%d", &nuser);
            if (nuser != 0) {
                nessai++;
                if (nuser == nordi) {
                    printf("Vous avez gagné en %d essais\n", nessai);
                } else if (nuser > nordi) {
                    puts("Votre saisie est trop grande");
                } else {
                    puts("Votre saisie est trop petite");
                }
            }
        } while (nessai < 10 && nuser != nordi && nuser != 0);

        if (nuser == 0) {
            puts("Au revoir !!!");
        } else if (nessai == 10 && nuser != nordi) {
            puts("Vous avez perdu. Bye");
        } else if (nuser != nordi && nessai < 10) {
            printf("Vous avez perdu apres %d tentatives. Bye\n", nessai);
        }

        printf("\nContinuer ? O/N : ");
        scanf(" %c", &rep);
    } while (rep != 'n' && rep != 'N');
}


/* Definition des fonctions des programmes complexe */
void executer_programme_complexe1() {
	char rep;
	
	 do{
		int t1[] = {1, 2, 3, 4, 5, 7, 8, 9, 10, 12, 20};
	    int t2[] = {3, 4, 6};
	    int taille1 = sizeof(t1) / sizeof(t1[0]);
	    int taille2 = sizeof(t2) / sizeof(t2[0]);
	    
	    int *t3;
	    int taille3;
	    printf("tableau1: ");
	    int j;
	    for (j = 0; j< taille1; j++) {
	    printf("%d ", t1[j]);
	    }
	    printf("\n");
	    printf("tableau2: ");
	    int k;
	    for (k = 0; k < taille2; k++) {
	    printf("%d ", t2[k]);
	    }
	    printf("\n");
	    fusionner_tableau(t1, taille1, t2, taille2, &t3, &taille3);
	    
	    printf("Tableau fusionne: ");
	    int i;
	    for (i = 0; i < taille3; i++) {
	    printf("%d ", t3[i]);
	    }
	    printf("\n");
	    
	    free(t3);
    printf("\nContinuer ? O/N : ");
    scanf(" %c", &rep);
    } while (rep != 'n' && rep != 'N');
}

void executer_programme_complexe2(){
	char rep;
	
	do{
		int array[] = {0, 1, 0, 2, 3, 0, 4, 5, 0, 6};
	    int size = sizeof(array) / sizeof(array[0]);
	    
	    printf("tableau d\'origine: ");
	    int i;
	    for (i = 0; i < size; i++) {
	    printf("%d ", array[i]);
	    }
	    printf("\n");
	    supprimer_zeros(array, &size);
	    
	    printf("Apres suppression des valeurs nulles: ");
	    for (i = 0; i < size; i++) {
	    printf("%d ", array[i]);
	    }
	    printf("\n");
    printf("\nContinuer ? O/N : ");
    scanf(" %c", &rep);
    } while (rep != 'n' && rep != 'N');
}
    
void executer_programme_complexe3() {
	char rep;
	do{
	 	int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	    int taille = sizeof(tab) / sizeof(tab[0]);
	    int cible;
	    printf("tableau:");
	    int z;
	    for(z=0; z<taille;z++){
	    	printf("%d ", tab[z]);
		}
	    printf("\nEntre le nombre a rechercher: ");
	    scanf("%d", &cible);
	
	    int result = rechercher_binaire(tab, taille, cible);
	
	    if (result != -1) {
	    printf("Element trouve a la position %d\n", result);
	    } else {
	    printf("Element non trouve\n");
	    }
	    
    printf("\nContinuer ? O/N : ");
    scanf(" %c", &rep);
    } while (rep != 'n' && rep != 'N');
}

void executer_programme_complexe4(){
	char arr1[] = "abcd";
    char arr2[] = "dcba";
    int taille1 = sizeof(arr1) / sizeof(arr1[0]);
    int taille2 = sizeof(arr2) / sizeof(arr2[0]);
    char rep;
    
    do{
	
    
     printf("tableau1: ");
	    int i;
	    for (i = 0; i < taille1; i++) {
	    printf("%d ", arr1[i]);
	    }
	    
	 printf("\ntableau2: ");
	    int j;
	    for (j= 0; j < taille2; j++) {
	    printf("%d ", arr2[j]);
	    }
    if (sont_miroirs(arr1, arr2)) {
    	printf("\nles tableaux sont des tableaux miroir.");
    } 
	else {
    	printf("\nles tableaux ne sont pas des tableaux miroir.");
    }
    printf("\nContinuer ? O/N : ");
    scanf(" %c", &rep);
    } while (rep != 'n' && rep != 'N');
}
 void executer_programme_complexe5(){
 	char arr[] = "radar";
    int size = strlen(arr);
    char rep;
	do{
		printf("tableau: ");
	    int i;
	    for (i = 0; i < size; i++) {
	    printf("%d ", arr[i]);
	    }
	    printf("\n");
	    if (est_palindrome(arr, size)) {
	    	printf("le tableau est palindrome.\n");
	    } else {
	    	printf("le tableau n\'est pas palindrome.\n");
	    }
	    printf("\nContinuer ? O/N : ");
	    scanf(" %c", &rep);
    } while (rep != 'n' && rep != 'N');
}

void executer_programme_complexe6(){
	
  	int arr[] = {5, 2, 3, 5, 9, 1, 4, -4, -5, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    char rep;
    do{
    	printf("tableau: ");
	    int i;
	    for (i = 0; i < size; i++) {
	    printf("%d ", arr[i]);
	    }
	    printf("\n");

	    int result = longue_monotonie_croissante(arr, size);
	
	    printf("la taille de la plus longue monotonie croissante est %d\n", result);
	    printf("\nContinuer ? O/N : ");
	    scanf(" %c", &rep);
    } while (rep != 'n' && rep != 'N');
}
void executer_programme_complexe7(){
 	int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int result[3][3];
    int n = 3;
    char rep;
    do{
	    printf("MATRICE D\'ORIGINE: ");
		    int i;
		    int j;
		    for (i = 0; i <3;  i++) {
		    	for(j=0; j<3; j++){
		    		printf("%d ", mat[i][j]);
				}
				printf("\n");
			}
	
	    carre_matrice(mat, result, n);
	
	    printf("carre matrice:\n");
	    for (i = 0; i < n; i++) {
	    for (j = 0; j < n; j++) {
	    printf("%d ", result[i][j]);
	    }
	    printf("\n");
	    }
	    printf("\nContinuer ? O/N : ");
	    scanf(" %c", &rep);
    } while (rep != 'n' && rep != 'N');
}
void executer_programme_complexe8(){
    int mat[3][3] = {{1, 0, 0}, {0, 2, 0}, {0, 0, 3}};
    int n = 3;
    int i;
    int j;
    char rep;
    do{
    	 printf("matrice d\'origine:\n");
	    for (i = 0; i < n; i++) {
	    for (j = 0; j < n; j++) {
	    printf("%d ", mat[i][j]);
	    }
	    printf("\n");
	}
	    if (est_diagonal(mat, n)) {
	    printf("la matrice est diagonal.\n");
	    } else {
	    printf("la matrice n\'est pas diagonal.\n");
	    }
	    printf("\nContinuer ? O/N : ");
	    scanf(" %c", &rep);
    } while (rep != 'n' && rep != 'N');
}



/* DEFINITIONS DES FONCTIONS ANNEXES SIMPLES */
int pgcd(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int ppcm(int a, int b) {
	    return (a * b) / pgcd(a, b);
	}


 	
 
 
  


/*Definition des fonctions annexes du programme complexe */
void fusionner_tableau(int *t1, int taille1, int *t2, int taille2, int **t3, int *taille3) {
    *taille3 = taille1 + taille2;
    *t3 = (int *)malloc(*taille3 * sizeof(int));
    
    int i = 0, j = 0, k = 0;
    while (i < taille1 && j < taille2) {
    if (t1[i] < t2[j]) {
    (*t3)[k++] = t1[i++];
    } else {
    (*t3)[k++] = t2[j++];
    }
    }
    while (i < taille1) {
    (*t3)[k++] = t1[i++];
    }
    while (j < taille2) {
    (*t3)[k++] = t2[j++];
    }
}

void supprimer_zeros(int *array, int *size) {
    int count = 0;
    int i;
    for (i = 0; i < *size; i++) {
    if (array[i] != 0) {
    array[count++] = array[i];
    }
    }
    *size = count;
}

int rechercher_binaire(int *array, int size, int key) {
	int left = 0;
    int right = size - 1;
    
    while (left <= right) {
    	int mid = left + (right - left) / 2;
        
	    if (array[mid] == key) {
	    	return mid;
    	} else if (array[mid] < key) {
    		left = mid + 1;
    	} else {
    		right = mid - 1;
    	}
    }
    
    return -1;
}



int sont_miroirs(char *array1, char *array2) {
    int len1 = strlen(array1);
    int len2 = strlen(array2);

    if (len1 != len2) {
    return 0;
    }
    int i;
    for (i = 0; i < len1; i++) {
    if (array1[i] != array2[len2 - 1 - i]) {
    return 0;
    }
    }
    
    return 1;
}

int est_palindrome(char *arr, int size) {
	int i;
    for (i = 0; i < size / 2; i++) {
    	if (arr[i] != arr[size - i - 1]) {
    		return 0;
    	}
    }
    return 1;
}

int longue_monotonie_croissante(int arr[], int size) {
    int max_len = 1, current_len = 1;
    int i;
    for (i = 1; i < size; i++) {
    if (arr[i] > arr[i - 1]) {
    current_len++;
    if (current_len > max_len) {
    max_len = current_len;
    }
    } else {
    current_len = 1;
    }
    }
    return max_len;
}
void carre_matrice(int mat[][3], int result[][3], int n) {
	int i;
	int j;
    for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
    result[i][j] = 0;
    int k;
    for (k = 0; k < n; k++) {
    result[i][j] += mat[i][k] * mat[k][j];
 	}
    }
    }
}
int est_diagonal(int mat[][3], int n) {
	int i;
	int j;
    for (i = 0; i < n; i++) {
    	for (j = 0; j < n; j++) {
    		if (i != j && mat[i][j] != 0) {
    			return 0;
    		}
    	}
    }
    return 1;
}







