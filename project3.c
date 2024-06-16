#include<stdio.h>
#include<stdlib.h>

int choice, age, years, marks = 0;
char marital_status, academic_status,ch;
char name[50];
char id[15];
char city[20];
char gender[10];
char fName[20];

void getUserChoice();
int managerialPost();
int executivePost();
int supervisorPost();
int designingPost();
int laborPost();
void printOutput();

void main(){
    FILE *fp;

    printf("Enter Your Name: ");
    scanf("%s", &name);

    printf("Enter Your NIC No: ");
    scanf("%s", &id);

    printf("Enter Your Gender: ");
    scanf("%s", &gender);

    printf("Enter Your City: ");
    scanf("%s", &city);

    printf("\nEnter file name to create (Format :- 'YourName'Info) :");
    scanf("%s",&fName);

    //creating (open) a file
    fp=fopen(fName,"w");

    //check file created or not
    if(fp==NULL)
    {
        printf("\nFile does not created!!!");
        exit(1); //exit from program
    }

    printf("\nFile created successfully.\n");

    printf("\n\t** Job Vacancies of the Garment Factory ** \n");
    printf("\nIf you are willing to apply for,\n\n\tManagerial post -  Enter 1\n\tExecutive post - Enter 2\n\tSupervisor post - Enter 3\n\tDesigning post - Enter 4\n\tLabor post - Enter 5\n\n");

    getUserChoice();

    fprintf(fp, "Name: %s\nNIC No: %s\nGender: %s\nCity: %s\nAge: %d\n", name, id, gender, city, age);

    printf("\nData written successfully.\n");

    fclose(fp);

    printf("\n**** Your Information **** \n\n");

    //again open file to read data
    fp=fopen(fName,"r");
    if(fp==NULL)
    {
        printf("\nCan't open file!!!");
        exit(1);
    }

    while(1){
        ch = fgetc(fp);
        if(ch==EOF)
            break;
        printf ("%c", ch);
    }

    fclose(fp);

    printOutput();

}

void getUserChoice(){

    printf("\nEnter your Choice : ");
    scanf("%d", &choice);

    switch(choice){
    case 1:
        managerialPost();
        break;
    case 2:
        executivePost();
        break;
    case 3:
        supervisorPost();
        break;
    case 4:
        designingPost();
        break;
    case 5:
        laborPost();
        break;
    default:
        printf("Invalid choice. \n");
        getUserChoice();
    }
}

int managerialPost(){

    //get age
    printf("\nEnter your Age: ");
    scanf("%d", &age);

    //check age
    if(age>=30 && age <=45){
        if(age>=30 && age<=35){
            marks = marks + 10;
        }else if(age>35 && age<=40){
            marks = marks + 5;
        }else{
            marks = marks + 3;
        }
    }else{
        printf("Invalid Input \n");
        marks = 0;
        getUserChoice();
        return 0;
    }

    //get working Experience
    printf("Enter How many Years of Working Experience: ");
    scanf("%d", &years);

    //check working Experience
    if(years<= age - 18){
        if(years >= 5){
            marks = marks + 10;
        }else{
            marks = marks + 5;
        }
    }else{
        printf("Invalid Input\n");
        marks = 0;
        getUserChoice();
        return 0;
    }

    //get marital_status
    printf("Enter your Marital Status (if married enter - m or unmarried enter - s): ");
    scanf("%s", &marital_status);

    //check working marital status
    if(marital_status == 's'){
        marks = marks + 10;
    }else if(marital_status == 'm'){
        marks = marks + 5;
    }else{
        printf("Invalid Input \n");
        marks = 0;
        getUserChoice();
        return 0;
    }

    //get academic_status
    printf("Enter your Academic Status (if graduated enter - g or masters enter - m or master with another degree / diploma enter - e): ");
    scanf("%s", &academic_status);

    //check working academic status
    if(academic_status == 'e'){
        marks = marks + 10;
    }else if(academic_status == 'm'){
        marks = marks + 5;
    }else if (academic_status == 'g'){
        marks = marks + 3;
    }else{
        printf("Invalid Input \n");
        marks = 0;
        getUserChoice();
        return 0;
    }
}

int executivePost(){

    //get age
    printf("\nEnter your Age: ");
    scanf("%d", &age);

    //check age
    if(age>=25 && age <=40){
        if(age>=25 && age<=30){
            marks = marks + 10;
        }else if(age>30 && age<=35){
            marks = marks + 5;
        }else{
            marks = marks + 3;
        }
    }else{
        printf("Invalid Input \n");
        marks = 0;
        getUserChoice();
        return 0;
    }

    //get working Experience
    printf("Enter How many Years of Working Experience: ");
    scanf("%d", &years);

    //check working Experience
    if(years<= age - 18){
        if(years>=5){
            marks = marks + 10;
        }else{
            marks = marks + 3;
        }
    }else{
        printf("Invalid Input\n");
        marks = 0;
        getUserChoice();
        return 0;
    }

    //get marital_status
    printf("Enter your Marital Status (if married enter - m or unmarried enter - s): ");
    scanf("%s", &marital_status);

    //check working marital status
    if(marital_status == 's'){
        marks = marks + 10;
    }else if(marital_status == 'm'){
        marks = marks + 5;
    }else{
        printf("Invalid Input \n");
        marks = 0;
        getUserChoice();
        return 0;
    }

    //get academic_status
    printf("Enter your Academic Status (if graduated enter - g or diploma enter - d): ");
    scanf("%s", &academic_status);

    //check working academic status
    if(academic_status == 'g'){
        marks = marks + 10;
    }else if(academic_status == 'd'){
        marks = marks + 5;
    }else{
        printf("Invalid Input \n");
        marks = 0;
        getUserChoice();
        return 0;
    }
}

int supervisorPost(){

    //get age
    printf("\nEnter your Age: ");
    scanf("%d", &age);

    //check age
    if(age>=25 && age <=40){
        if(age>=25 && age<=30){
            marks = marks + 10;
        }else if(age>30 && age<=35){
            marks = marks + 5;
        }else{
            marks = marks + 3;
        }
    }else{
        printf("Invalid Input \n");
        marks = 0;
        getUserChoice();
        return 0;
    }

    //get working Experience
    printf("Enter How many Years of Working Experience: ");
    scanf("%d", &years);

    //check working Experience
    if(years<= age - 18){
        if(years>=5){
            marks = marks + 10;
        }else{
            marks = marks + 3;
        }
    }else{
        printf("Invalid Input\n");
        marks = 0;
        getUserChoice();
        return 0;
    }

    //get marital_status
    printf("Enter your Marital Status (if married enter - m or unmarried enter - s): ");
    scanf("%s", &marital_status);

    //check working marital status
    if(marital_status == 's'){
        marks = marks + 10;
    }else if(marital_status == 'm'){
        marks = marks + 5;
    }else{
        printf("Invalid Input \n");
        marks = 0;
        getUserChoice();
        return 0;
    }

    //get academic_status
    printf("Enter your Academic Status (if diploma enter - d or A/L enter - a): ");
    scanf("%s", &academic_status);

    //check working academic status
    if(academic_status == 'd'){
        marks = marks + 10;
    }else if(academic_status == 'a'){
        marks = marks + 5;
    }else{
        printf("Invalid Input \n");
        marks = 0;
        getUserChoice();
        return 0;
    }
}

int designingPost(){

    //get age
    printf("\nEnter your Age: ");
    scanf("%d", &age);

    //check age
    if(age>=25 && age <=40){
        if(age>=25 && age<=30){
            marks = marks + 10;
        }else if(age>30 && age<=35){
            marks = marks + 5;
        }else{
            marks = marks + 3;
        }
    }else{
        printf("Invalid Input \n");
        marks = 0;
        getUserChoice();
        return 0;
    }

    //get working Experience
    printf("Enter How many Years of Working Experience: ");
    scanf("%d", &years);

    //check working Experience
    if(years<= age - 18){
        if(years>=5){
            marks = marks + 10;
        }else{
            marks = marks + 3;
        }
    }else{
        printf("Invalid Input\n");
        marks = 0;
        getUserChoice();
        return 0;
    }

    //get marital_status
    printf("Enter your Marital Status (if married enter - m or unmarried enter - s): ");
    scanf("%s", &marital_status);

    //check working marital status
    if(marital_status == 's'){
        marks = marks + 10;
    }else if(marital_status == 'm'){
        marks = marks + 5;
    }else{
        printf("Invalid Input \n");
        marks = 0;
        getUserChoice();
        return 0;
    }

    //get academic_status
    printf("Enter your Academic Status (if graduate enter - g or diploma enter - d): ");
    scanf("%s", &academic_status);

    //check working academic status
    if(academic_status == 'g'){
        marks = marks + 10;
    }else if(academic_status == 'd'){
        marks = marks + 5;
    }else{
        printf("Invalid Input \n");
        marks = 0;
        getUserChoice();
        return 0;
    }
}

int laborPost(){

    //get age
    printf("\nEnter your Age: ");
    scanf("%d", &age);

    //check age
    if(age>=18 && age <=40){
        if(age>=18 && age<=25){
            marks = marks + 10;
        }else if(age>25 && age<=30){
            marks = marks + 8;
        }else if (age>30 && age<=35){
            marks = marks + 5;
        }else{
            marks = marks + 3;
        }
    }else{
        printf("Invalid Input \n");
        marks = 0;
        getUserChoice();
        return 0;
    }

    //get working Experience
    printf("Enter How many Years of Working Experience: ");
    scanf("%d", &years);

    //check working Experience
    if(years<= age - 18){
        if(years>=5){
            marks = marks + 10;
        }else{
            marks = marks + 3;
        }
    }else{
        printf("Invalid Input\n");
        marks = 0;
        getUserChoice();
        return 0;
    }

    //get marital_status
    printf("Enter your Marital Status (if married enter - m or unmarried enter - s): ");
    scanf("%s", &marital_status);

    //check working marital status
    if(marital_status == 's'){
        marks = marks + 10;
    }else if(marital_status == 'm'){
        marks = marks + 5;
    }else{
        printf("Invalid Input \n");
        marks = 0;
        getUserChoice();
        return 0;
    }

    //get academic_status
    printf("Enter your Academic Status (if A/L enter - a or O/L enter - o): ");
    scanf("%s", &academic_status);

    //check working academic status
    if(academic_status == 'a'){
        marks = marks + 10;
    }else if(academic_status == 'o'){
        marks = marks + 5;
    }else{
        printf("Invalid Input \n");
        marks = 0;
        getUserChoice();
        return 0;
    }
}

void printOutput(){
    if(marks>=25){
        printf("\n--- Congratulations ---\n\nYour Marks: %d/40\n\n** you can apply for the job **\n", marks);
    }else{
        printf("\n--- Oops ---\n\nYour Marks: %d/40\n\n** you can not apply for the job **\t** Try for another Post **", marks);
    }
}
