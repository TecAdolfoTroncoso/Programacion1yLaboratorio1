#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Info
{
    char name[100];
    char tel[32];
    int age;
};
typedef struct Info info;

#define size 100

int person = 0;

void welcome()
{
    system("cls");
    printf("\n\n\n");
    printf("\t\t****************************************\n");
    printf("\t\t****************************************\n");
    printf("\t\t             welcome....\n");
    printf("\t\t****************************************\n");
    printf("\t\t****************************************\n");
    sleep(1);
}

void menu()
{
    system("cls");
    printf("\n\n\n");
    printf("\t\t****************************************\n");
    printf("\t\t****************************************\n");
    printf("\t\t   1.add         2.change\n");
    printf("\t\t   3.search      4.delete\n");
    printf("\t\t   5.show        6.exit\n");
    printf("\t\t****************************************\n");
    printf("\t\t****************************************\n");
}

void addinfo(info *i)
{
    char name[100] = {0};
    char tel[32] = {0};
    int age = 0;

    printf("Please input name,telephone and age.\n");
    scanf("%s%s%d",name, tel, &age);

    strcpy(i[person].name, name);
    strcpy(i[person].tel, tel);
    i[person].age = age;
    person++;
}

void modifyinfo(info *i)
{
    char name[32] = {0};
    char tel[32] = {0};
    int age = 0;
    int n;

    printf("Input number of person you want to change\n");
    scanf("%d",&n);
    printf("Input name,telephone and age\n"); 
    scanf("%s%s%d",name, tel, &age);

    strcpy(i[n - 1].name, name);
    strcpy(i[n - 1].tel, tel);
    i[n - 1].age = age;

}

void searchinfo(info *i)
{
    char type[32];
    char name[32] = {0};
    char tel[32] = {0};
    int age;
    int j, tmp = 0;
    printf("Input type:name tel or age\n");
    scanf("%s",type);
    
    if(strcmp(type,"name") == 0)
    {
        tmp = 1;
    }
    
    if(strcmp(type,"tel") == 0)
    {
        tmp = 2;
    }
    if(strcmp(type,"age") == 0)
    {
        tmp = 3;
    }

    switch(tmp)
    {
        case 1:
            printf("Input name:\n");
            scanf("%s",name);
            for (j = 0; j < person; j++)
            {
                if(strcmp(name, i[j].name) == 0)
                {
                    printf("%d.%s %s %d\n",j+1, i[j].name, i[j].tel, i[j].age);
                }
            }

            sleep(2);
            break;
        case 2:
            printf("Input telephone:\n");
            scanf("%s",tel);
            for (j = 0; j < person; j++)
            {
                if(strcmp(tel, i[j].tel) == 0)
                {
                    printf("%d.%s %s %d\n",j+1, i[j].name, i[j].tel, i[j].age);
                }
            }
        
            sleep(2);
            break;
        case 3:
            printf("Input age:\n");
            scanf("%d",&age);
            for (j = 0; j < person; j++)
            {
                if (age == i[j].age)
                {
                    printf("%d.%s %s %d\n",j+1, i[j].name, i[j].tel, i[j].age);
                }
            
            }

            sleep(2);
            break;
        default:
            printf("Error\n");
            
            sleep(2);
            break;
    }
}

void deleteinfo(info *i)
{
    int tmp, j;

    printf("Input number you want to delete:\n");
    scanf("%s",&tmp);
    
    for(j = tmp - 1; j <= person; j++ )
    {
        strcpy(i[j].name, i[j + 1].name);
        strcpy(i[j].tel, i[j + 1].tel);
        i[j].age = i[j + 1].age;
    }
    person--;
}

void showinfo(info *i)
{
    int j;

    for (j = 0; j < person; j++)
    {
        printf("%d.%s %s %d a%cos\n",j+1, i[j].name, i[j].tel, i[j].age,164);
    }

    sleep(2);
}

int main()
{
    int choice;
    info in[size] = {0};

    welcome();

    while(1)
    {
        menu();
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addinfo(in);
                break;
            case 2:
                modifyinfo(in);
                break;
            case 3:
                searchinfo(in);
                break;
            case 4:
                deleteinfo(in);
                break;
            case 5:
                showinfo(in);
                break;
            case 6:
                exit(0);
            default:
                printf("Error\n");
        }
    }

    return 0;
}