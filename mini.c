#include <stdio.h>
#include <string.h>

int main() {
    const int max = 100;
    char titre[max][30];
    char auteur[max][30];
    float prix[max];
    int quantite[max], opt;
    int stock = 0;

    printf("***************** MENU *****************\n");
    do {
        printf("veuillez choisir une option :\n");
        printf("1 - Ajouter un livre au stock\n");
        printf("2 - Afficher tous les livres disponibles\n");
        printf("3 - Rechercher un livre par son titre\n");
        printf("4 - Mettre a jour la quantite d'un livre\n");
        printf("5 - Supprimer un livre du stock\n");
        printf("6 - Afficher le nombre total de livres en stock\n");
        printf("7 - Quitter\n");
        printf("Option: ");
        scanf("%d", &opt);

        switch(opt) {
            case 1:
                if (stock < max) {
                    printf("veuillez entrer le titre du livre: ");
                    scanf("%s", titre[stock]);

                    printf("veuillez entrer l'auteur du livre: ");
                    scanf("%s", auteur[stock]);

                    printf("veuillez entrer le prix du livre: ");
                    scanf("%f", &prix[stock]);

                    printf("veuillez entrer la quantite en stock: ");
                    scanf("%d", &quantite[stock]);

                    stock++;
                    printf("Livre ajoute avec succes !\n");
                } else {
                    printf("Stock plein, impossible d'ajouter plus de livres.\n");
                }
                break;

            case 2:
                printf("Liste des livres disponibles :\n");
                for (int i = 0; i < stock; i++) {
                    printf("Livre %d:\n", i+1);
                    printf("Titre: %s\n", titre[i]);
                    printf("Auteur: %s\n", auteur[i]);
                    printf("Prix: %.2f\n", prix[i]);
                    printf("Quantite: %d\n\n", quantite[i]);
                }
                break;

            case 3: {
                char recherche[30];
                printf("veuillez entrez le titre du livre à rechercher: ");
                scanf("%s", recherche);

                int found = 0;
                for (int i = 0; i < stock; i++) {
                    if (strcmp(titre[i], recherche) == 0) {
                        printf("Livre trouve :\n");
                        printf("Titre: %s\n", titre[i]);
                        printf("Auteur: %s\n", auteur[i]);
                        printf("Prix: %.2f\n", prix[i]);
                        printf("Quantite: %d\n", quantite[i]);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Livre non trouve\n");
                }
                break;
            }

            case 4: {
                char recherche[30];
                printf("veuillez entrez le titre du livre a mettre a jour: ");
                scanf("%s", recherche);

                int found = 0;
                for (int i = 0; i < stock; i++) {
                    if (strcmp(titre[i], recherche) == 0) {
                        printf("veuillez entrez la nouvelle quantite: ");
                        scanf("%d", &quantite[i]);
                        printf("Quantite mise a jour avec succes !\n");
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Livre non trouve\n");
                }
                break;
            }

            case 5: {
                char recherche[30];
                printf("veuillez entrez le titre du livre a supprimer: ");
                scanf("%s", recherche);

                int found = 0;
                for (int i = 0; i < stock; i++) {
                    if (strcmp(titre[i], recherche) == 0) {
                        for (int j = i; j < stock - 1; j++) {
                            strcpy(titre[j], titre[j + 1]);
                            strcpy(auteur[j], auteur[j + 1]);
                            prix[j] = prix[j + 1];
                            quantite[j] = quantite[j + 1];
                        }
                        stock--;
                        printf("Livre supprime avec succes !\n");
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Livre non trouve\n");
                }
                break;
            }

            case 6: {
                int total = 0;
                for (int i = 0; i < stock; i++) {
                    total += quantite[i];
                }
                printf("Nombre total de livres en stock : %d\n", total);
                break;
            }

            case 7:
                printf("Fermeture du programme.\n");
                break;

            default:
                printf("Option invalide, veuillez reessayer.\n");
        }
    } while(opt != 7);

    return 0;
}
