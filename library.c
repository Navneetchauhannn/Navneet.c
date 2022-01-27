#include<stdio.h>
#include<string.h>

typedef struct library
{
    char bn[30];
    char an[30];
    int id;
    int tq;
    int rq;
}book;
book b[5];
 void display(){

     for (int i = 1; i < 4; i++)
     {
         printf("\nbook title: %s",b[i].bn);
         printf("\nauthor: %s",b[i].an);
         printf("\nbook id: %d",b[i].id);
         printf("\ntotal copys of book is: %d",b[i].tq);
         printf("\nremaining copys of book is: %d\n",b[i].rq);
     }
 }
 void search(){
     strcpy(b[3].bn,"data struct");
     strcpy(b[3].an,"yz");
     int n,i;
     printf("Enter book id:");
     scanf("%d",&n);
    
    for(i=1;i<4;i++){
        if(n==b[i].id){
            printf("\nbook title: %s",b[i].bn);
            printf("\nauthor: %s",b[i].an);
            printf("\nbook id: %d",b[i].id);
            printf("\ntotal copys of book is: %d",b[i].tq);
            printf("\nremaining copys of book is: %d",b[i].rq);
            break;
        }
    }
    
 }

 void ar(){
     int i;
      for(i=1;i<4;i++){
        if(b[i].rq > 0){
            printf("\nbook title: %s",b[i].bn);
            printf("\nauthor: %s",b[i].an);
            printf("\nbook id: %d",b[i].id);
            printf("\ntotal copys of book is: %d",b[i].tq);
            printf("\nremaining copys of book is: %d",b[i].rq);
            printf("\n");
        }
    }

 }



int main()
{
    int a;
    b[1].id = 133;
     b[1].tq = 10;
     b[1].rq = 0;
     strcpy(b[1].bn,"data struct");
     strcpy(b[1].an,"xy");

     b[2].id = 134;
     b[2].tq = 10;
     b[2].rq = 5;
     strcpy(b[2].bn,"dbms");
     strcpy(b[2].an,"xyz");

     b[3].id = 135;
     b[3].tq = 10;
     b[3].rq = 7;
     strcpy(b[3].bn,"data struct");
     strcpy(b[3].an,"yz");
     printf("************************************************");
    printf("\n************************************************");
    printf("\n\t\twelcome to Library");
    printf("\t\t\n************************************************");
    printf("\n************************************************"); 
    do{
    printf("\n1. display all record of library.\n");
    printf("2. search book.\n");
    printf("3. display all record of the available books of library.\n");
    printf("4.exit\n");
    printf("\n");
    printf("Enter which number of statement you want to go!\n");
    scanf("%d",&a);
    switch(a){
        case 1:display();
        break;
        case 2:search();
        break;
        case 3:ar();
        break;
    }
    }while(a != 4);
    return 0;
}