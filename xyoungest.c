#include<stdio.h>
void main(){
    int number_of_people,age,check;
    printf("no of people\n");
    scanf("%d",&number_of_people);
    if(number_of_people<=0){
        printf("invalid number of people\n");
    }
    else{
    printf("enter the age 1\n");
    scanf("%d",&check);
    age=check;

    for(int i=2;i<=number_of_people;i++)
    {
        printf("enter the age %d\n",i);
        scanf("%d",&check);
        
        if(age>check)
        {
            age=check;
        }
        
    }
    printf("youngest %d\n",age);

}
}