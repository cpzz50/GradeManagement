/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF 
THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN 
THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE 
INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE 
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
Name: Jiayuan Zhang
*/



#include "lab4.h"
/*This function is used for delete a certain student*/
void option9(Node **header){
    int id;
    int total_std = 0;
    Node *traverse = *header;
    Node *del;
    int count = 0;
    int i;
    int sure;
    printf("Please enter the student ID  number you wish to delete, followed by enter.\n");
    scanf("%i",&id);
    while(traverse != NULL){ /*Find total student number*/
        traverse = traverse->next;
        total_std++;
    }
    traverse = *header;
    while(traverse!=NULL){ /*Find which student to delete by input student ID*/
        if(traverse->Student.student_ID == id){
            break;
        }else{
            count++;
            traverse = traverse->next;
        }
    }
    if(total_std == count){
        printf("No such student");
    }else{
    /*Double check if wanted to delete chosen student*/
        printf("Do you really want to delete student ID number %i, %s ?",id,traverse->Student.student_name);
        printf("If yes, enter 1.  If no, enter 2:  ");
        scanf("%i",&sure);
        if(sure == 1){
            traverse = *header;
/*delete chosed student, different approaches apply based on which position the student is located in the linked list*/
            for(i = 0; i<count-1;i++){ 
                traverse = traverse->next;
            }
            if(count == 0){
                del = traverse;
                *header = traverse->next;
            }
            if(count>0){
                del = traverse->next;
                traverse->next = traverse->next->next;
            }
            if(count == total_std){
                del = traverse->next;
                traverse->next = 0x0;
            }
            printf("student ID number %i, %s  has been deleted.",id,del->Student.student_name);
	    free(del);
        }
    }
}
