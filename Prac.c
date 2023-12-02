#include<stdio.h>

int main()
{
    /*int No = 10;
    printf("No is %d\n",No);

    const unsigned int Fno = 0 , Sno = 0;
    printf("Enter the Value of Fno...");
    scanf("%d",&Fno);
    printf("Fno is %d\n",Fno);

    printf("Enter the Value of Sno...\n");
    scanf("%d",&Sno);
    printf("Sno is %d\n",Sno);

    printf("Address of Fno is %d...\n",&Fno);
    printf("Address of Sno is %d...\n",&Sno);*/



    // int Arr[5] = {3,202,85,2};

    // printf("Size of Arr is %d bytes...\n",sizeof(Arr));
    // printf("1st Element of Arr is a %d..\n",Arr[0]);
    // printf("Address of Arr is %d..\n",Arr);
    // printf("Address of 2nd element of Arr is %d..\n",&Arr[1]);
    // printf("5th element of Arr is %d.\n",Arr[4]);



    // int Drr[2][3] = {1,2,3,4,5,6};
    // printf("Size of Drr is %d bytes...\n",sizeof(Drr));
    // printf("2nd Element of 1st is %d..\n",Drr[0][1]);
    // Drr[1][2]++;
    // printf("Pre value is %d...\n",Drr[1][2]);



  double arr[] = {12.3,1.23,12.8};
  double *p = arr;
  char *q = &(arr[0]);
  char *r = &(arr[3]);
   
  printf("Array is @ %d\n",&arr); 
  printf("Arr location is %d\n",arr);
  printf("Arr location at 0 is %d\n",p);
  printf("Arr location at 0 is %d\n",&arr[0]);

  
  printf("Element at 0 is %f\n\n",*p);
  
  printf("Arr location at 1 is %d\n",&arr[1]);
  printf("Element at 1 is %f\n\n",arr[1]);

  printf("Arr location at 2 is %d\n",&arr[2]);
  printf("Element at 2 is %d\n\n",arr[2]);




   
  printf("Arr value at 0 is %c\n",*q);
  printf("Arr value at 2 is %c\n",*r);




  return 0;
}