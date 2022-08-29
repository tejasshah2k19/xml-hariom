#include<stdio.h>

#define SIZE 5
//SimpleQueue
int q[SIZE]; //index -> a[0] a[1] 2 3 [4]
int f=-1;
int r=-1;//empty


void insert(){
    int num;
    if(r == SIZE - 1 ){
        printf("\nQueue is Full");
    }else{
        printf("\nEnter number");
        scanf("%d",&num);
        r++;
        q[r] = num;
        if(f==-1)
            f++;
    }
}

void remove1(){
    int num;

    if(f==-1){
        printf("\nQueue is empty");
    }else{
        num = q[f];
        printf("\n%d deleted",num);
        if(f==r){
            f=-1;
            r=-1;
        }else{
            f++;
        }
    }
}

void display(){
    int i;
    for(i=f;i<=r;i++){
        printf(" %d",q[i]);
    }
}
int main(){
    int i,choice;
    /*
    for(i=0;i<SIZE;i++){
        printf("\nEnter number");
        scanf("%d",&a[i]);
    }

    for(i=0;i<SIZE;i++){
        printf("\n%d",a[i]);
    }
    */

    //Queue -> FiFo -> First In First Out
    //stack-> LiFo
    //           o   i

    while(1){  //infinite
        printf("\n0 for exit\n1 For Insert\n2 For Delete\n3 For Display\nEnter choice");
        scanf("%d",&choice);

        switch(choice){
            case 0: exit(0);
            case 1:
                insert();//enqueue()
                break;
            case 2:
                remove1();//dequeue()
                break;
            case 3:
                display();
                break;

        }
    }

}




