#include "funs.h"

int main(){
    node *tail=createPlaylist();
    node *head=tail->next;
    printPlaylist(tail);
}