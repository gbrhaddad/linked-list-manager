#include "node.h"

void case1(node *head); //pre: om listan ar ej tom //post: listan ar utskriven
void case2(node*head); //pre: om listan ej ar tom //post: listans storlek returnerad
node *case3(node * head); //pre: True //post: talet(noden) ar tillgad
node *case4(node * head); //pre: om ratt placering ar inmatad //post: talet(noden) ar tillagd
node *case5(node* huvud); //pre: ifall talet existerar i en pafylld lista //post: talet raderades och head ruturnerad
node *case6(node *huvud); //pre: ifall talet och platsen existerar i en pafylld lista //post: talet raderades och head ruturnerad
node *case7(node *huvud); //pre: ifall listan ar pafylld //post: listan tomdes och head returnerades
node *case8(node*huvud); //pre: om listan ej ar tom //post: listan ar omvand nu och head returnerades
node *case9(node * huvud); //pre: om listan ej bestar av endast en nod && listan ej tom //post: listan ar skiftad ett steg at vanster och head returnerades
node *case10(node *huvud); //pre: om listan ej bestar av endast en nod && listan ej tom //post: listan ar skiftad ett steg at hoger samt head returnerades
node *case11(node *huvud); //pre: om listan ej ar tom //post: listan ar storterad samt head returnerades
void case12(node *huvud); //pre: true //post: listans startadress utskriven
void defaultcase();
