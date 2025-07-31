// #include<stdio.h>
// void reversestring(char str[]){
//     int len =0;
//     int i,j;
//     char temp;
//     while (str[len]!='\0') len++;
//     len = len -1 ;
//     for(i=0,j=len;i<=len/2;i++,j--){
//         temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;
//     }
//     printf("Reverse of the string = %s  ", str);
// }
// int main(){
//     char str[50];
//     printf("Enter the string : ");
//     scanf("%[^\n]", str);
//     reversestring(str);
//     return 0;
// }
// #include <stdio.h>
// #include <math.h>

// int main() {
//     int n;
//     float *p,a[100],sum,mean,var,sd;
//     // float *p;
//     p=a;
//     printf("Enter the number of elements : ");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         printf("Enter data number %d : ",i+1);
//         scanf("%f",& *(p+i));
//         sum+=*(p+i);
//     }
//     mean=sum/(float)n;//n*1.0
//     for(int i=0;i<n;i++){
//         var+=pow(*(p+i)-mean,2);
//     }
//     var = var / (float) n;
//     sd = sqrt(var);
//     printf("Sum = %.2f\n", sum);
//     printf("Mean = %.2f\n",mean);
//     printf("Variance = %.2f\n",var);
//     printf("Standard Deviation = %.2f\n",sd);
//     return 0;
// }
#include <stdio.h>

// Define a structure for student details
// struct Student {
//     char usn[15];
//     char name[50];
//     char paper[20];
//     float marks;
// };

// int main() {
//     // Declare an array of structures to store details of 60 students
//     struct Student students[60];

//     // Read details for each student
//     for (int i = 0; i < 60; ++i) {
//         printf("Enter details for student %d:\n", i + 1);
        
//         printf("USN: ");
//         scanf("%s", students[i].usn);
        
//         printf("Name: ");
//         scanf("%s", students[i].name);

//         printf("Paper: ");
//         scanf("%s", students[i].paper);

//         printf("Marks: ");
//         scanf("%f", &students[i].marks);

//         printf("\n");
//     }

//     // Print details for each student
//     printf("Details of all students:\n");
//     for (int i = 0; i < 60; ++i) {
//         printf("Student %d:\n", i + 1);
//         printf("USN: %s\n", students[i].usn);
//         printf("Name: %s\n", students[i].name);
//         printf("Paper: %s\n", students[i].paper);
//         printf("Marks: %.2f\n", students[i].marks);
//         printf("\n");
//     }

//     return 0;
// }
// #include <stdio.h>

// // Define a structure for employee details
// struct Employee {
//     int ID;
//     char Name[50];
//     float Salary;
// };

// // Function that accepts a structure as a parameter
// void printEmployeeDetails(struct Employee emp) {
//     printf("Employee ID: %d\n", emp.ID);
//     printf("Employee Name: %s\n", emp.Name);
//     printf("Employee Salary: %.2f\n", emp.Salary);
// }

// int main() {
//     // Declare and initialize an instance of the Employee structure
//     struct Employee emp1 = {101, "John Doe", 50000.0};

//     // Call the function and pass the structure as a parameter
//     printf("Details of Employee 1:\n");
//     printEmployeeDetails(emp1);

//     // You can create more instances of the structure and pass them to the function
//     struct Employee emp2 = {102, "Jane Smith", 60000.0};
//     printf("\nDetails of Employee 2:\n");
//     printEmployeeDetails(emp2);

//     return 0;
// }

// #include<stdio.h>
// #define n 60
// struct student {char usn[12];char name[50];int marks; };
// int main(){
//     struct student s[n], temp;
//     for(int  i=0;i<n;i++){
//         printf("Enter usn,name and marks for student %d : ",i+1);
//         scanf("%s%s%d",s[i].usn,s[i].name,&s[i].marks);
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n;j++){
//             if(s[i].marks < s[j].marks){
//                 temp = s[i];
//                 s[i]=s[j];
//                 s[j]=temp;
//             }
//         }
//     }
//     printf("Sorted student records on marks in decending order \n");
//     for(int i=0;i<n;i++){
//         printf("%12s%20s%5d\n"s[i].usn,s[i].name,s[i].marks);
//     }
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     FILE *file;
//     char filename[100];
//     char ch;

//     // Get the filename from the user
//     printf("Enter the filename: ");
//     scanf("%s", filename);

//     // Open the file for reading
//     file = fopen(filename, "r");

//     // Check if the file exists
//     if (file == NULL) {
//         printf("Could not open file %s for reading.\n", filename);
//         return 1; // Return an error code
//     }

//     // Read and display the contents of the file
//     printf("\nContents of the file '%s':\n", filename);
//     while ((ch = fgetc(file)) != EOF) {
//         putchar(ch);
//     }

//     // Close the file
//     fclose(file);

//     return 0;
// }
#include <stdio.h>

int main() {
    FILE *src, *des;
    char srcname[100], desname[100];
    char ch;

    // Get the source filename from the user
    printf("Enter the source filename: ");
    scanf("%s", srcname);

    // Open the source file for reading
    src = fopen(srcname, "r");

    // Check if the source file exists
    if (src == NULL) {
        printf("Could not open source file %s for reading.\n", srcname);
        return 1; // Return an error code
    }

    // Get the destination filename from the user
    printf("Enter the destination filename: ");
    scanf("%s", desname);

    // Open the destination file for writing
    des = fopen(desname, "w");

    // Check if the destination file is opened successfully
    if (des == NULL) {
        printf("Could not open destination file %s for writing.\n", desname);

        // Close the source file before returning
        fclose(src);
        return 1; // Return an error code
    }

    // Copy contents from source to destination
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, des);
    }

    // Close both files
    fclose(src);
    fclose(des);

    printf("Contents copied successfully from %s to %s.\n", srcname, desname);

    return 0;
}
