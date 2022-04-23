/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF 
THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN 
THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE 
INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE 
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
Name: Jiayuan Zhang
*/



#include "lab4.h"
/*This function is used for insert a score for certain student by input student ID*/
void option6(Node **header){
    int id;
    Node *traversePtr = *header;
    int total_std = 0;
    int count = 0;
    int i;
    int sure;
    int which_cat;
    int which_score;
    float newScore;
    printf("Enter student ID #:");
    scanf("%d",&id);
    printf("Hunting for %d\n",id);
    while(traversePtr != NULL){ /*find total student number*/
        traversePtr = traversePtr->next;
        total_std++;
    }
    traversePtr = *header;
    for(i = 0;i<total_std;i++){ /*find which student to insert by ID*/
        if(traversePtr->Student.student_ID == id){
            break;
        }else{
            traversePtr = traversePtr->next;
            count++;
        }
    }
    /*Ask which category and which score to insert, then insert*/
    if(count == total_std){
        printf("\nNo such student\n");
    }else{
        printf("Insert a Score for %s ?  Enter 1, if yes. Enter 2, if no:  ",traversePtr->Student.student_name);
        scanf("%i",&sure);
        if(sure == 1){
            printf("Which category?\n1) Quizzes\n2) Midterms\n3) Homework\n4) Final\n");
            scanf("%i",&which_cat);
            if(which_cat ==1){
                printf("Which score?\nEnter 1, 2, or 3\n");
                scanf("%i",&which_score);
                if(which_score == 1){
                    printf("Enter new score: ");
                    scanf("%f",&newScore);
                    traversePtr->Student.Cat1.score1 = newScore;
                }
                if(which_score == 2){
                    printf("Enter new score: ");
                    scanf("%f",&newScore);
                    traversePtr->Student.Cat1.score2 = newScore;
                }
                if(which_score == 3){
                    printf("Enter new score: ");
                    scanf("%f",&newScore);
                    traversePtr->Student.Cat1.score3 = newScore;
                }
            }
            if(which_cat ==2){
                printf("Which score?\nEnter 1, 2, or 3\n");
                scanf("%i",&which_score);
                if(which_score == 1){
                    printf("Enter new score: ");
                    scanf("%f",&newScore);
                    traversePtr->Student.Cat2.score1 = newScore;
                }
                if(which_score == 2){
                    printf("Enter new score: ");
                    scanf("%f",&newScore);
                    traversePtr->Student.Cat2.score2 = newScore;
                }
                if(which_score == 3){
                    printf("Enter new score: ");
                    scanf("%f",&newScore);
                    traversePtr->Student.Cat2.score3 = newScore;
                }
            }
            if(which_cat == 3){
                printf("Which score?\nEnter 1, 2, or 3\n");
                scanf("%i",&which_score);
                if(which_score == 1){
                    printf("Enter new score: ");
                    scanf("%f",&newScore);
                    traversePtr->Student.Cat3.score1 = newScore;
                }
                if(which_score == 2){
                    printf("Enter new score: ");
                    scanf("%f",&newScore);
                    traversePtr->Student.Cat3.score2 = newScore;
                }
                if(which_score == 3){
                    printf("Enter new score: ");
                    scanf("%f",&newScore);
                    traversePtr->Student.Cat3.score3 = newScore;
                }
            }
            if(which_cat == 4){
                printf("Which score?\nEnter 1, 2, or 3\n");
                scanf("%i",&which_score);
                if(which_score == 1){
                    printf("Enter new score: ");
                    scanf("%f",&newScore);
                    traversePtr->Student.Cat4.score1 = newScore;
                }
                if(which_score == 2){
                    printf("Enter new score: ");
                    scanf("%f",&newScore);
                    traversePtr->Student.Cat4.score2 = newScore;
                }
                if(which_score == 3){
                    printf("Enter new score: ");
                    scanf("%f",&newScore);
                    traversePtr->Student.Cat4.score3 = newScore;
                }
            }
        }
	/*print student*/
        printHeader();
        printStd(&traversePtr);
        printf("Note:  Category Cums, Current Grade and Final Grade have not been recalculated based on the new value entered.");
    }
}
