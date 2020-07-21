#include<stdio.h>
#include<stdlib.h>
void input();
void lexical_analysis_and_parsing();
void expansion();
void command_execution();
int exit_status();

struct  Student
{
    int age;
    char name[22];
    float marks;
    char roll[22];
};
struct NumList
{
    int num;
    struct NumList* next; 
};
//working with char

struct CharList
{
    char *word;
   
    struct CharList* next; 
};
struct NumList *head=NULL;
struct CharList *start=NULL;


void addNum(int num)
{
struct NumList  *node,*temp;
 node = (struct NumList*)malloc(sizeof(struct NumList));
 node->num=num;
    if(head==NULL)
    {
        head=node;
        head->next=NULL;
        
        return;
    }
    else{
        temp=head;
        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        printf("creating new node");
        //newNode(num1,num); //create a node
       
        
        node->next=NULL;

        temp->next=node;
        printf("\nnew node created successfully");

    }

}
//add string number
void addword(char num[])
{
  struct CharList  *node,*temp;
  
 node = malloc(sizeof(struct CharList));
 node->word=(char*)malloc(10*sizeof(char));
 node->word=num;
    if(start==NULL)
    {
        start=node;
        start->next=NULL;
        
        return;
    }
    else{
        temp=start;
        while(temp->next != NULL)
        {
            temp=temp->next;
        }
       // printf("creating new node");
        //newNode(num1,num); //create a node
       
        
        node->next=NULL;

        temp->next=node;
       // printf("\nnew node created successfully");

    }

}
void traverse()
{
    struct Numlist *temp;
  
    if(temp==NULL)
    {
        printf("Empty");
        return;
    }
    while (head->next != NULL)
        {
           printf("%d\n",head->num);
           head=head->next;
        }
        printf("%d",head->num);
    
}
//traversing words
void traverseW()
{
    if(start==NULL)
    {
        printf("Empty");
        return;
    }
    while (start->next != NULL)
        {
           printf("%s ",start->word);
           start=start->next;
        }
        printf("%s",start->word);
    
}
void inputStuctPrac()
{
//struct Student std1;
    //    printf("usama@usama-Vostro-14-3468:~/Documents/SEMESTER 6/WEB$ ");
    //    //fgets(message,sizeof(message),stdin);
    //    printf("Enter Name  : ");
    //    fgets(std1.name,sizeof(std1.name),stdin);
    //    printf("Enter age : ");
    //    scanf("%d",&std1.age);
    //    printf("Enter Marks : ");
    //    scanf("%f",&std1.marks);
    //    printf("Enter Roll No : ");
    //    scanf("%s",std1.roll);
    //    display(std1);

       

       //strcpy(output,puts(message));
}
void display(struct Student student)
{
    printf("\ndisplaying________________________\n");
    printf("\nYour Name is :%s\nYour age is :%d\nYour marks is :%f\nYour Roll no is :%s",student.name,student.age,student.marks,student.roll);

}
void test(char str[])
{
    printf("string is : %s",str);

}

void input()
{
       printf("\033[1;32m");
      
       printf("usama@usama-Vostro-14-3468:");
       printf("\033[1;35m");
       printf("~/Documents/SEMESTER/WEB$ ");
       addword("Usama");
       addword("Naseer");
       addword("Baig");
       //   addNum(21);
    //   addNum(22);
    //   addNum(23);
    //   addNum(24);
}
void lexical_analysis_and_parsing()
{
    return;
}
void expansion()
{
    return;
}
void command_execution()
{
    traverseW();
    return;
}
int exit_status()
{

    return 0;
}
void main()
{
    do
   {
       
       
       input();
       lexical_analysis_and_parsing();
       expansion();
       command_execution();
       exit_status();
      
    } while (exit_status());
   
    
}