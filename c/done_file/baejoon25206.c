/*
        치훈이의 전공평점을 계산해주는 프로그램을 작성해보자.
        전공평점은 전공과목별 (학점 × 과목평점)의 합을 학점의 총합으로 나눈 값이다.
        인하대학교 컴퓨터공학과의 등급에 따른 과목평점은 다음 표와 같다.
        P/F 과목의 경우 등급이 P또는 F로 표시되는데, 등급이 P인 과목은 계산에서 제외해야 한다.
        과연 치훈이는 무사히 졸업할 수 있을까?
*/
/*
 치훈이의 전공평점을 출력한다.
정답과의 절대오차 또는 상대오차가
\(10^{-4}\) 이하이면 정답으로 인정한다.
 */
/*
    1 ≤ 과목명의 길이 ≤ 50
    과목명은 알파벳 대소문자 또는 숫자로만 이루어져 있으며, 띄어쓰기 없이 주어진다. 입력으로 주어지는 모든 과목명은 서로 다르다.
    학점은 1.0,2.0,3.0,4.0중 하나이다.
    등급은 A+,A0,B+,B0,C+,C0,D+,D0,F,P중 하나이다.
    적어도 한 과목은 등급이 P가 아님이 보장된다.
 */
#include <stdio.h>
#include <string.h>
#include <unistd.h>

double change_grade_to_double(char *grade) {
    //sleep(1);
    // printf("E: %f\n", (double)'E');
    // printf("grade[0]: %f\n", (double)grade[0]);
    // printf("grade[1] == '+': %d\n", grade[1]=='+');
    
    return 'E' - grade[0] + (grade[1] == '+') * 0.5;
}

int main() {
    char subject[50];
    char grade[10];
    
    double subject_score;
    double total = 0;
    double total_grade_score = 0;

    while (0 < fscanf(stdin, "%s %lf %s\n", subject, &subject_score, grade)) {
        switch (grade[0]){
            case 'A' :
            case 'B' : 
            case 'C' :
            case 'D' : 
                total_grade_score += subject_score * change_grade_to_double(grade);
                [[fallthrough]];
            case 'F' : 
                total += subject_score; 
            case 'P' : continue;
        }
    }

    printf("%lf", total_grade_score / total);

    return 0;
}