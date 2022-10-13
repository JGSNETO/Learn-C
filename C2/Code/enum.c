// #include<stdio.h>

// enum week {Mon, Tue, Wed, Thur, Fri, Sat, Sun};
// enum status{Working = 1, Failed = 0, Freezed = -1};

// int main(){
//     enum week today;
//     today = Wed;
//     printf("%d", today);
//     return 0 ;
// }

#include<stdio.h>

enum day{sun, mon, tue, wed, thu, fri, sat};
typedef enum day day;

void print_day(day d){
    switch (d)
    {
    case sun: printf(" sunday "); break;
    case sun: printf(" monday "); break;
    case sun: printf(" tuesday "); break;
    case sun: printf(" wednesday "); break;
    case sun: printf(" thursday "); break;
    case sun: printf(" friday "); break;
    case sun: printf(" saturday "); break;
    default: printf("%d is an error", d); 
    }
}

day next_day(day d){
    return(d + 1 % 7);
}

int main(){

    return 0; 
}