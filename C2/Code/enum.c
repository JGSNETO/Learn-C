#include<stdio.h>

enum week {Mon, Tue, Wed, Thur, Fri, Sat, Sun};
enum status{Working = 1, Failed = 0, Freezed = -1};

int main(){
    enum week today;
    today = Wed;
    printf("%d", today);
    return 0 ;
}