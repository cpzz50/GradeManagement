/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF 
THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN 
THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE 
INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE 
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
Name: Jiayuan Zhang
*/



#include "lab4.h"
/*This function is used for calculate final grades*/
void option7(Node **header){
    Node *traverse = *header;
    float total_score = 0;
    float class_avg_quiz = 0.0;
    int quiz_count = 0;
    float class_avg_mid = 0.0;
    int mid_count = 0;
    float class_avg_hw = 0.0;
    int hw_count = 0;
    float class_avg_final = 0.0;
    int final_count = 0;
    float class_avg_cfinal = 0.0;
    int cfinal_count = 0;
    printHeader();
    while(traverse != NULL){ /*calculate grade for final and print grades out*/
        if(traverse->Student.Cat1.Cumulative != -1){
            total_score += traverse->Student.Cat1.Cumulative * 0.15;
        }
        if(traverse->Student.Cat2.Cumulative != -1){
            total_score += traverse->Student.Cat2.Cumulative * 0.3;
        }
        if(traverse->Student.Cat3.Cumulative != -1){
            total_score += traverse->Student.Cat3.Cumulative * 0.2;
        }
        if(traverse->Student.Cat4.Cumulative != -1){
            total_score += traverse->Student.Cat4.Cumulative * 0.35;
        }
        traverse->Student.Final_Grade = total_score;
        
        printStd(&traverse,1);
        total_score = 0;
        printf("\n");
        traverse = traverse->next;
        
    }

    /*Calculate for class average grade*/
    traverse = *header;
    while(traverse != NULL){
        if(traverse->Student.Cat1.Cumulative != -1){
            quiz_count++;
            class_avg_quiz += traverse->Student.Cat1.Cumulative;
        }else{
            quiz_count++;
        }
        if(traverse->Student.Cat2.Cumulative != -1){
            mid_count++;
            class_avg_mid += traverse->Student.Cat2.Cumulative;
        }else{
            mid_count++;
        }
        if(traverse->Student.Cat3.Cumulative != -1){
            hw_count++;
            class_avg_hw += traverse->Student.Cat3.Cumulative;
        }else{
            hw_count++;
        }
        if(traverse->Student.Cat4.Cumulative != -1){
            final_count++;
            class_avg_final += traverse->Student.Cat4.Cumulative;
        }else{
            final_count++;
        }
        if(traverse->Student.Current_Grade != -1){
            cfinal_count++;
            class_avg_cfinal += traverse->Student.Current_Grade;
        }else{
            cfinal_count++;
        }
        traverse = traverse->next;
    }
    
    class_avg_quiz /= quiz_count;
    class_avg_hw /= hw_count;
    class_avg_mid /= mid_count;
    class_avg_final /= final_count;
    class_avg_cfinal /= cfinal_count;
    /*print class grade*/
    printf("Class Averages for Quizzes: %.2f, Midterms: %.2f, Homework: %.2f, Final: %.2f Current Grade  %.2f",class_avg_quiz,class_avg_mid,class_avg_hw,class_avg_final,class_avg_cfinal);
    
}
