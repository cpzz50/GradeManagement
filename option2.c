/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF 
THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN 
THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE 
INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE 
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
Name: Jiayuan Zhang
*/



#include "lab4.h"
/*This function is used for print certain students' score by search last name*/
void option2(Node **header){
    Node *traverse = *header;
    char name[40];
    Node **candidate;
    int count_std = 0;
    int count_name = 0;
    int i = 0;
    int choice = 0;
    while(traverse->next != NULL){ /*find how much student in total*/
        traverse = traverse->next;
        count_std++;
    }
    traverse = *header;
    candidate = malloc(count_std * sizeof(Node));
    printf("Enter the Student's Last Name:");
    scanf("%s", name);
    printf("Hunting for %s\n", name);
    while(traverse != NULL){ /*put multiple student Node into a ptr*/
        if(strstr(traverse->Student.student_name, name) != NULL){
            *(candidate+count_name) = malloc(sizeof(Node));
            *(candidate+count_name) = traverse;
            count_name++;
        }
        traverse = traverse->next;
    }
    
    if(count_name == 0){
        printf("No name indicated as %s ", name);
    }
    traverse = *header;
    if(count_name == 1){ /*if only one student matched, print the student*/
        printHeader();
        while(traverse->Student.student_ID != (*candidate)->Student.student_ID){
            traverse = traverse->next;
        }
        printStd(&traverse);
    }
    traverse = *header;
    if(count_name > 1){ /*if more than one student matched, choose one to print*/
        printf("There is more than one student by that name.\n");
        for(i = 0; i< count_name; ++i){
            printf("\t%i) %s\n",i+1,(*(candidate+i))->Student.student_name);
        }
        printf("Please indicate which student you want: ");
        scanf("%i",&choice);
        printHeader();
        printStd(candidate+choice-1);
    }
    
}
