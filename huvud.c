#include "driv.h"
#include "node.h"
#include <stdlib.h>
#include <stdio.h>

void meny() {
    printf("\n0 exit\n");
    printf("1 printa ut listan\n");
    printf("2 printa ut listans storlek\n");
    printf("3 placera ett helttal i slutet av listan\n");
    printf("4 placera ett helttal pa en valfriplts\n");
    printf("5 radera ett givet tal\n");
    printf("6 radera ett helttal pa valfri plats\n");
    printf("7 tom listan\n");
    printf("8 vand listan\n");
    printf("9 skifta listan ett steg at vanster\n");
    printf("10 skifta listan ett steg at hoger\n");
    printf("11 sortering av listan\n");
    printf("12 printa ut strat adressen\n");
}

void visa(node *huvud) {
    int val;
    meny();
    while (1) {
        printf("var vanlig valj ett alternativ\n");
        scanf("\n%d", &val);
        switch (val) {
            case 0: exit(0);
            case 1: case1(huvud); meny(); break;
            case 2: case2(huvud); meny(); break;
            case 3: huvud = case3(huvud); meny(); break;
            case 4: huvud = case4(huvud); meny(); break;
            case 5: huvud = case5(huvud); meny(); break;
            case 6: huvud = case6(huvud); meny(); break;
            case 7: huvud = case7(huvud); meny(); break;
            case 8: huvud = case8(huvud); meny(); break;
            case 9: huvud = case9(huvud); meny(); break;
            case 10: huvud = case10(huvud); meny(); break;
            case 11: huvud = case11(huvud); meny(); break;
            case 12: case12(huvud); meny(); break;
            default: defaultcase(); meny(); break;
        }
    }
}

int main() {
    node *head;
    head = (node*)malloc(sizeof(struct nodeEl));
    head = NULL;
    visa(head);
}
