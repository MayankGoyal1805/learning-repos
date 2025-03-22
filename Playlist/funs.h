#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node {
    struct node* prev;
    struct node* next;
    char duration[10];
    // char date [20];
    char artist[50];
    char title[100];
    // char playlist[100];
    int songNum;
} node;

node* createNode(){
    node *song =  (node*)malloc(sizeof(node));
    song->next = song;
    song->prev = song;
    return song;
}

node *createPlaylist(){
    int songNumber;
    printf("Enter the number of songs: ");
    scanf("%d",&songNumber);
    while ((getchar()) != '\n');
    if(songNumber==0) return NULL;
    node *tail=NULL;

    node*head = createNode();
    printf("\nEnter the title of the song no.1: ");
    fgets(head->title,100,stdin);
    printf("Enter the artist name: ");
    fgets(head->artist,50,stdin);
    printf("Enter the duration of the song: ");
    fgets(head->duration,10,stdin);
    head->songNum = 1;
    // printf("Enter the release date of the song: ");
    // fgets(head->date,20,stdin);

    node *temp=head;

    for(int i=1;i<songNumber;i++){
        node *newNode = createNode();
        printf("\n");
        printf("Enter the title of the song no.%d: ",i+1);
        fgets(newNode->title,100,stdin);
        printf("Enter the artist name: ");
        fgets(newNode->artist,50,stdin);
        printf("Enter the duration of the song: ");
        fgets(newNode->duration,10,stdin);
        newNode->songNum = i+1;
        // printf("Enter the release date of the song: ");
        // fgets(newNode->date,20,stdin);
        newNode->prev = temp;
        temp->next = newNode;
        temp = newNode;   
    }
    tail = temp;
    tail->next = head;
    return tail;
}

void *printPlaylist(node *tail){
    node *ptr = tail->next;
    do{ printf("\n");
        printf("Title: %s",ptr->title);
        printf("Artist: %s",ptr->artist);
        printf("Duration: %s",ptr->duration);
        printf("Sr.No.:  %d\n",ptr->songNum);
        // printf("Release date: %s",ptr->date);
        ptr=ptr->next;
    } while(ptr!=tail->next);
}
