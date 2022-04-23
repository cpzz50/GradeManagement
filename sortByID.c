/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF 
THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN 
THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE 
INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE 
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
Name: Jiayuan Zhang
*/



#include "lab4.h"
/*This function is used for sort the student in order based on their ID numbers*/
void sortByID(Node **header){
    Node *temp1;
    Node *traverse = *header;
    Node temp2;

    while(traverse->next != NULL) {
        temp1 = traverse->next;
        while(temp1 != NULL) {
            if(traverse->Student.student_ID > temp1->Student.student_ID) {
                temp2 = *traverse;
                *traverse = *temp1;
                *temp1 = temp2;
                temp2.next = traverse->next;
                traverse->next = temp1->next;
                temp1->next = temp2.next;
            }
            temp1 = temp1->next;
        }
        traverse = traverse->next;
    }
}
