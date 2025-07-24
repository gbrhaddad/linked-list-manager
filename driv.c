#include "node.h"
#include "driv.h"
#include "list.h"
#include <stdlib.h>
#include <stdio.h>

void case1(node *huvud) {
    if (huvud != NULL) {
        skrivut(huvud);
    } else {
        printf("listan ar tyvarr tom :(\n");
    }
}

void case2(node *huvud) {
    int lista_storlek = hitta_storlek(huvud);
    if (huvud != NULL) {
        printf("%d", lista_storlek);
    } else {
        printf("listan ar tyvarr tom :(\n");
    }
}

node *case3(node *huvud) {
    printf("var vanlig ange heltalet du vill lagga till\n");
    int mata;
    scanf("%d", &mata);
    huvud = addera_sist(huvud, mata);
    return huvud;
}

node *case4(node *huvud) {
    int mata, lista_storlek, plats;
    if (huvud != NULL) {
        lista_storlek = hitta_storlek(huvud);
        printf("var vanlig ange vilket helttal du vill lagga till i listan :)\n");
        scanf("%d", &mata);
        printf("var vanlig ange vilken placering i listan helttalet du ha anget ska ha\n");
        scanf("%d", &plats);
        if (plats == 1) {
            huvud = addera_forst(huvud, mata);
        } else if (plats == lista_storlek + 1) {
            huvud = addera_sist(huvud, mata);
        } else if (plats < 0 || plats > lista_storlek + 1) {
            printf("palceringen du vill ha ar ej mojlig\n");
        } else {
            addera_heltal(huvud, plats - 1, mata);
        }
    } else {
        printf("listan ar tyvarr tom :(\n");
    }
    return huvud;
}

node* case5(node* huvud) {
    int lista_storlek = hitta_storlek(huvud);
    int mata;
    if (huvud != NULL) {
        printf("var vanlig ange det nummret du vill ta bort:)\n");
        scanf("%d", &mata);
        huvud = radera(huvud, mata);
        int nyStorlek = hitta_storlek(huvud);
        if (nyStorlek == lista_storlek) {
            printf("talet existerar tyvarr inte i listan\n");
        } else {
            printf("Talet du angett togs bort\n");
        }
    } else {
        printf("listan ar tyvarr tom\n");
    }
    return huvud;
}

node* case6(node* huvud) {
    int lista_storlek, plats;
    if (huvud != NULL) {
        printf("ange vilken placering pa talet du vill ta bort\n");
        scanf("%d", &plats);
        lista_storlek = hitta_storlek(huvud);
        if (plats == 1) {
            huvud = tabort_forsta(huvud, plats);
        } else if (plats < 1 || plats > lista_storlek) {
            printf("platsen existerar tyvarr inte\n");
        } else if (huvud == NULL) {
            printf("listan ar tyvarr tom");
        } else {
            tabort_valfri(huvud, plats - 1);
        }
    }
    return huvud;
}

node* case7(node* huvud) {
    if (huvud != NULL) {
        huvud = tom(huvud);
    } else {
        printf("listan ar tyvarr tom\n");
    }
    return huvud;
}

node* case8(node* huvud) {
    if (huvud != NULL) {
        huvud = vand(huvud);
    } else {
        printf("listan ar tyvarr tom\n");
    }
    return huvud;
}

node* case9(node* huvud) {
    if (huvud == NULL) {
        printf("listan ar tyvarr tom\n");
    } else if (hitta_storlek(huvud) == 1) {
        printf("det gar ej att skifta lista pga att den har bara en enda node\n");
    } else {
        huvud = v_skift(huvud);
    }
    return huvud;
}

node* case10(node* huvud) {
    if (huvud == NULL) {
        printf("listan ar tyvarr tom\n");
    } else if (hitta_storlek(huvud) == 1) {
        printf("det gar ej att skifta lista pga att den har bara en enda node\n");
    } else {
        huvud = h_skift(huvud);
    }
    return huvud;
}

node* case11(node* huvud) {
    if (huvud != NULL) {
        huvud = sortera(huvud);
    } else {
        printf("listan ar tyvarr tom\n");
    }
    return huvud;
}

void case12(node* huvud) {
    printf("stratadress: %p\n", &huvud);
}

void defaultcase() {
    printf("felaktig inmatning:(\n");
}
