
#include "list.h"
#include <stdio.h>
#include <stdlib.h>

void skrivut(node* huvud) {
    do {
        printf("%d\t", huvud->el);
        huvud = huvud->next;
    } while (huvud != NULL);
}

int hitta_storlek(node* huvud) {
    int lista_storlek = 0;
    if (huvud == NULL) {
        return 0;
    } else {
        do {
            huvud = huvud->next;
            lista_storlek++;
        } while (huvud != NULL);
        return lista_storlek;
    }
}

node *getNode(node *head, int plats) {
    node *n = head;
    for (int i = 0; i < plats; i++)
        n = n->next;
    return n;
}

node *addera_sist(node *head, int mata) {
    node *newNode = (node*)malloc(sizeof(node));
    newNode->next = NULL;
    newNode->el = mata;
    if (head == NULL) {
        head = newNode;
    } else {
        node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = NULL;
    }
    return head;
}

node *addera_forst(node *huvud, int mata) {
    node *newNode = (node*)malloc(sizeof(node));
    newNode->el = mata;
    newNode->next = huvud;
    huvud = newNode;
    return huvud;
}

node *addera_heltal(node *head, int plats, int mata) {
    node *prev = getNode(head, plats - 1);
    node *newNode = (node*)malloc(sizeof(node));
    newNode->el = mata;
    newNode->next = prev->next;
    prev->next = newNode;
    return head;
}

node *radera(node *head, int mata) {
    int counter = 0;
    node *r = head;
    while (r->el != mata && r->next != NULL) {
        r = r->next;
        counter++;
    }
    if (r->el == mata) {
        if (counter == 0) {
            node *n = head;
            head = n->next;
            free(n);
        } else {
            node *prev = getNode(head, counter - 1);
            node *n = prev->next;
            prev->next = n->next;
            free(n);
        }
    }
    return head;
}

node *tabort_forsta(node *head, int plats) {
    node *n = head;
    head = n->next;
    free(n);
    return head;
}

node *tabort_valfri(node *head, int plats) {
    node *prev = getNode(head, plats - 1);
    node *n = prev->next;
    prev->next = n->next;
    free(n);
    return head;
}

node *tom(node*head) {
    do {
        node *n = head;
        head = n->next;
        free(n);
    } while (head != NULL);
}

node *vand(node *head) {
    node *n, *next, *prev = NULL;
    n = head;
    do {
        next = n->next;
        n->next = prev;
        prev = n;
        n = next;
    } while (n != NULL);
    head = prev;
    return head;
}

node *v_skift(node *head) {
    int plats = hitta_storlek(head);
    node *n1 = head;
    node *ns = getNode(head, plats - 1);
    head = n1->next;
    n1->next = NULL;
    ns->next = n1;
    return head;
}

node *h_skift(node *head) {
    int plats = hitta_storlek(head);
    node *ns1 = getNode(head, plats - 2);
    node *ns = ns1->next;
    ns1->next = NULL;
    ns->next = head;
    head = ns;
    return head;
}

node *sortera(node *head) {
    node *n1 = head, *n2;
    int temp;
    while (n1 != NULL) {
        n2 = n1->next;
        while (n2 != NULL) {
            if (n1->el > n2->el) {
                temp = n1->el;
                n1->el = n2->el;
                n2->el = temp;
            }
            n2 = n2->next;
        }
        n1 = n1->next;
    }
    return head;
}
