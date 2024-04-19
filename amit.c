#include<stdio.h>
#include<limits.h>
/*int min(int a,int b)
   {if(a<b) return a;
    else return b;}*/
    
/*float add(float a,float b){
  return (a+b);}  
  float sub(float a,float b){
  return (a-b);}  
 float mul(float a,float b){
  return (a*b);}  
 float div(float a,float b){
  return (a/b);}  */
 int main(){
  /*int a,b,gcd;
  printf ("enter 1st no:");
  scanf("%d",&a);
  printf ("enter 2nd no:");
  scanf("%d",&b);
  for(int i=1;i<=min(a,b);i++)
     {if(a%i==0 && b%i==0)
        { gcd=i;}}
        
  printf ("gcd is:%d",gcd);*/
  
  
  
  //fibonacii
  /*int n, x=0;
  int z=0, y=1;
  scanf("%d",&n);
  printf ("0 1 ");
  
  for(int i=1;i<=n;i++){
     
     
     z=x+y;
     printf ("%d ",z);
     x=y;
     y=z;
     
     }
     */
    //number  choicing
   /*  int n;
  printf ("enter 1st no:");
  scanf("%d",&n);
  switch(n>0){
      case 1:printf("the number is positive ");}
     
  switch(n<0){
      case 1:printf("the number is negetive ");}
  
  switch(n==0){
      case 1:printf("the number is 0 ");}*/
      
    
    
  /*  int x,n,y,a,b,c,d;
  printf ("entervalur of n:");
  scanf("%d",&n);
   printf ("entervalur of x:");
  scanf("%d",&x);
  a=1+x*x;
  b=1+x/n;
  c=1+2*x;
  d=1+n*x;
  switch (n){
      case 1: printf ("%d",a);break;
      case 2: printf ("%d",b);break;
      case 3: printf ("%d",c);break;
      }
  switch (n>3 || n<1){
      case 1: printf ("%d",d);}    */
      
      
 /*int a,b,c,p,x1,x2;
  printf ("entervalue of a,b,c:");
  scanf("%d%d%d",&a,&b,&c);   
  p=b*b-(4*a*c);
  x1=(-b+sqrt(p))/2*a;
  x2=(-b-sqrt(p))/2*a;
  printf ("the roots are %d and %d",x1,x2);
  if(p>0) printf ("roots are real and unequal");
  else if(p==0) printf ("roots are real and equal");
 else if(p<0) printf ("roots are imaginery=");
  */
  
  
  //search element in array 
 /* int a,n,i, num[6]={2,4,5,6,7,9};
  printf ("enter index no:");
  scanf("%d",&n);
  a=num[n];
  printf ("%d",a);*/
  
  
 //add ARRAY  element 
/*int a=0,n,i, num[6];
 for(i=0;i<=5;i++){
  printf ("enter a no:");
  scanf("%d",&num[i]);
  a=a+num[i];}
  
  printf ("%d",a);*/
  
  
  
  
  //largest and smallest element in array
 /* int max[100],i,m,a,size;
  printf ("enter array size");
  scanf("%d",&size);
  for(i=0;i<=size;i++)
    { printf ("ent value in array");
      scanf("%d",&max[i]);}
      
  m=max[0];
  for(i=0;i<=size;i++){
     if(max[i+1]>m){
         a=i+1;
        if(max[a]>max[i+2]) {
        printf ("%d is greatest",max[a]); break;}
        else printf("%d is greatest ",max[i+2]); break;}
     else printf ("%d is greatest ",m); 
      }*/
      
      
  //reverse array
  
 /* int arr[100],i,j,size,x;
  printf ("enter array size");
  scanf("%d",&size);
  x=size;
  for(i=0;i<=size;i++)
    { printf ("ent value in array");
      scanf("%d",&arr[i]);}
  for(i=(size);i>=0 ;i--){   
   printf ("%d",arr[i]);} */
   
   
   
   //deletion of array element
   
 /* int arr[100],i,j,size,x;
  printf ("enter array size");
  scanf("%d",&size);
   for(i=0;i<=size;i++)
    { printf ("ent value in array");
      scanf("%d",&arr[i]);}
      printf ("enter array delete index");
  scanf("%d",&x);
      
  for(i=x;i<=size;i++)
    {arr[i]=arr[i+1];
    }
  for(i=0;i<=size;i++){
    printf ("%d\n", arr[i]);}*/
    
  
  //calculation
  
 /* float a,b,g;
  printf ("enter 1st no:");
  scanf("%f",&a);
  printf ("enter 2nd no:");
  scanf("%for",&b);
  printf ("enter your choice:\n1=+;2=-;3=*;4=/");
  scanf("%f",&g);
  if(g==1) printf ("sum is :%f",add(a,b));
 else if(g==2) printf ("sub is :%f",sub(a,b));
 else if(g==3) printf ("mul is :%f",mul(a,b));
  else if(g==4) printf (" div is :%f",div(a,b));*/
  /*int count=0;
 int arr[5]={1,2,3,4,5};
 for(int i=0;i<=4;i++){
    if(arr[i]<arr[i+1])
    {count++;}
       }
       if(count==5){
      for(int i=0;i<=4;i++){
   printf ("%d",arr[i]);  }     
 }
 
    
    
    
 
 else {for(int j=0;j<=4-i;j++){
        if(arr[j]>arr[j+1]){
        int t=arr[j];
           arr[j]=arr[j+1];
           
           arr[j+1]=t;}}}
           for(int i=0;i<=4;i++){
   printf ("%d",arr[i]);  }     
 }
  
*/
int x,a,y;
#ifdef a
    1;
    
 #endif
    2;
     
 x=a;
 printf ( "%d",x+1);   
  return 0;
}