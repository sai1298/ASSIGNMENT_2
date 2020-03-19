#include <stdio.h>
void towerofHanoi(int n,char source_rod,char des_rod,char aux_rod1,char aux_rod2,char aux_rod3){
    if(n>0){
        towerofHanoi(n - 3, source_rod, aux_rod1, aux_rod3,aux_rod2,
                                            des_rod);
if(n-2>0) printf("\n Move disk %d from rod %c to rod %c ",(n-2), source_rod,aux_rod2);
if(n-1>0)printf("\n Move disk %d from rod %c to rod %c ",(n-1), source_rod,aux_rod3);
if(n>0)printf("\n Move disk %d from rod %c to rod %c ",n, source_rod, des_rod);
if(n>1)printf("\n Move disk %d from rod %c to rod %c ",(n-1), aux_rod3, des_rod);
if(n>2)printf("\n Move disk %d from rod %c to rod %c ",(n-2), aux_rod2, des_rod);
        towerofHanoi(n - 3, aux_rod1, des_rod, source_rod,
                                        aux_rod2,aux_rod3);
}}


int main()
{  int n;
    printf("Enter the no of discs\n");
    scanf("%d",&n);   //no of discs
towerofHanoi(n,'A','B','C','D','E');  //tower names
    return 0;
}
