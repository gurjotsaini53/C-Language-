#include <stdio.h>
int main(){

    // make  a program to input student information from a user & enter it to  a file
     FILE *fptr ; 
     fptr = fopen("problem2.txt","w");
      char name[100];
      int age ; 
       float cgpa ; 



      printf("Enter Name: "); 
      scanf("%s",&name);
      printf("Enter age: "); 
      scanf("%d",&age);

      printf("Enter CGPA: "); 
      scanf("%f",&cgpa);
     

     // writing into file
     fprintf(fptr,"%s\t",name);
     fprintf(fptr,"%d\t",age);
     fprintf(fptr,"%f\t",cgpa);

    fclose(fptr);
    return 0;
}