#include <stdio.h>

int main() {
    int user,jav_1 = 0, jav_2 = 0,s = 0;
    scanf("%d",&user);
    if(user%3==0 && user <=13 ){
        printf("0 %d ",user/3);
        return 0;
    }
    while(s < user){
    s+=5;
    jav_1++;
    if((user - (jav_1 * 5)) % 3==0   &&   (user - (jav_1 * 5)) % 5!=0 && (user - (jav_1 * 5) < 20)){
        jav_2 = (user - (jav_1 * 5))/3;
        s+=jav_2 * 3;
    }
    }
    printf("%d %d",jav_1,jav_2);
    return 0;
}