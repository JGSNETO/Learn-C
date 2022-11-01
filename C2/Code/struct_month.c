#include<stdio.h>


typedef enum month {Jan, Feb, Mar, Apr, May, June, July, Aug, Sept, Oct, Nov, Dec} month;

typedef struct date{
    month m;
    int d;
} date;

char *getMonth(int m){

    switch(m){
        case 0: return "Jan";
        case 1: return "Feb";
        case 2: return "Mar";
        case 3: return "Apr";
        case 4: return "May";
        case 5: return "June";
        case 6: return "July";
        case 7: return "Aug";
        case 8: return "Sept";
        case 9: return "Oct";
        case 10: return "Nov";
        default: return "Dec";

    }
}

void nextDay(date dt){
    int m = dt.m;
    int day = dt.d;

    if(m==1){
        if(day==28){
            printf("Mar 1\n");
        }else{
            printf("Mar %d\n", day+1);
        }
    }else if(m==3 || m == 5 || m==8 || m==10){
        if(day==30){
            char *str = getMonth(m+1);
            printf("%s 1\n", str);
        }else{
            printf("%s %d\n(", getMonth(m), day+1);
        }
    }else if(m==11){
        if(day==31){
            printf("Jan 1\n");
        }else{
            printf("Dec %d\n", day+1);
        }
    }else {
        if(day==31){
            char *str = getMonth(m+1);
            printf("%s 1\n", str);
        }else{
            printf("%s %d\n", getMonth(m), day+1);
        }
    }
}

int main(){

    date dt;
    dt.m=Dec;
    dt.d = 31;

    nextDay(dt);
    return 0;
}