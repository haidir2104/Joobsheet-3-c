#include<stdio.h>
#include<conio.h>
main()
{
int matrix1[5][9],
matrix2[3][3],i,j;
printf("MATRIX1\n");
for(i=0;i<=1;i++){
for(j=0;j<=1;j++){ 
printf("Elemen[%d][%d]: ",i,j); 
scanf("%d",&matrix1[i][j]);
}
}
printf("\nMATRIX2\n");
for(i=0;i<=1;i++){ 
for (j=0;j<=1;j++){ 
printf("Elemen[%d][%d]: ",i,j); 
scanf("%d",&matrix2[i][j]);
}
}
printf("\nHASIL PENJUMLAHAN\n\n");
for(i=0;i<=1;i++){
for( j=0;j<=1;j++)
printf("%d\t",matrix1[i][j]+matrix2[i][j]); 
printf("\n");}
getch();
}

