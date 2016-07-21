#include <stdio.h>
#include <stdlib.h>

/* declaration of the functions (prototype)
The first function is used to enter the correct password to start the program.
The Second One is used to search for the employee name you need.
*/
void enterPassword(unsigned int password); /*return no outputs, it includes one input which is the password you will enter.*/
void searchName(char name[]); /*return no outputs , it includes one input which is the name you are searching for.*/

/*Main Entry*/
int main(void)
{
    unsigned int pass;
    /*Calling the Function */
    enterPassword(pass);
    return 0;
}

/*Defining the Function*/
void enterPassword(unsigned int password)
{
    unsigned char i , count = 3;
    char name[15];
    /*you have 3 trials to enter the correct password*/
    for(i = 0; i < count; i++)
    {
        puts("please , enter the correct password");
        scanf("%d" , &password);
        if(password == 4444)
        {
            /*Calling the Function*/
            searchName(name);
        }
        else
            puts("wrong password!\n\n");

    }
}

void searchName(char name[])
{
    while(1)
            {
                char employeeNames [5][15] = {"Ahmed","Rania","Mostafa","Talaat","Rasha"};
                int employeeSalary [5] = {1500,1800,1650,2000,1200};
                char name[15];
                int i , test , index = -1;
                puts("please , enter the name of the employee you are searching for");
                /*request name from user*/
                scanf("%s" , name);
                for(i = 0; i < 5; i++)
                {
                    test = strcmp(name , employeeNames[i]);
                    if(test == 0) /* name == employeeNames[]*/
                    {
                        index = i;
                        break;
                    }
                }
                if(index == -1) /* Name is not found*/
                    puts("This name is not Found\n\n");
                else /* Name is found*/
                    printf("The Salary of %s is %d \n" , employeeNames[index] , employeeSalary[index]);
            }
}
