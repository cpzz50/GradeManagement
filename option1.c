/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF 
THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN 
THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE 
INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE 
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
Name: Jiayuan Zhang
*/



#include "lab4.h"
/*This function is used for select sudent and print their grade*/
void option1(Node **header){
    Node *traversePtr = *header;
    int id;
    int total_std = 0;
    int count = 0;
    int i;
    printf("Enter student ID #:");
    scanf("%d",&id);
    printf("Hunting for %d",id);
    while(traversePtr != NULL){ /*find total student number*/
        traversePtr = traversePtr->next;
        total_std++;
    }
    traversePtr = *header;
    for(i = 0;i<total_std;i++){ /*find which student with sprcified id*/
        if(traversePtr->Student.student_ID == id){
            break;
        }else{
            traversePtr = traversePtr->next;
            count++;
        }
    }
    
    if(count == total_std){
        printf("\nNo such student\n");
    }else{
        printHeader(); /*print student if found*/
        printStd(&traversePtr);
    }
}
