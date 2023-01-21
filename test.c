//to count occurrences of a word in file
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// #define BUFFER_SIZE 1000

// int countOccurences(FILE *fptr,const char *word);

// int main()
// {
//     FILE *fptr;
//     char path[100];
//     char word[50];
//     int wcount;
//     printf("enter file path:");
//     scanf("%s",path);
//     printf("enter word to search");
//     scanf("%s",word);
//     fptr=fopen(path,"r");

//     if(fptr==NULL)
//     {
//         printf("unable to open file.\n");
//         exit(EXIT_FAILURE);

//     }
//     wcount=countOccurences(fptr,word);
//     printf("'%s' is found %d times in file",word,wcount);
//     fclose(fptr);
//     return 0;
// }
// int countOccurences(FILE *fptr,const char *word)
// {
//     char str[BUFFER_SIZE];
//     char *pos;
//     int index, count;
//     count = 0;
//     while ((fgets(str, BUFFER_SIZE,fptr))!=NULL)
//     {
//         index = 0;
//         while((pos = strstr(str+index,word))!=NULL)
//         {
//             index=(pos-str)+1;
//             count++;
//         }
//     }
//     return count;
// }


// #include<stdio.h>
// int main()
// {
//     char in_name[80];
//     FILE *in_file;
//     int ch,character=0,line=0,space=0,tab=0;
//     printf("enter file name:\n");
//     scanf("%d",in_name);
//     in_file=fopen(in_name,"r");
//     if(in_file==NULL)
//     {
//         printf("can't open %s for reading .\n",in_name);
//     }
//     else{
//         while((ch=fgetc(in_file))!=EOF)
//         {
//             character++;
//             if(ch==' ')
//             space++;
//             if(ch=='\n')
//             line++;
//             if(ch=='\t')
//             tab++;
//         }
//         fclose(in_file);
//         printf("\n number of character =%d",character);
//         printf("\n number of space = %d",space);
//         printf("\n number of tabs=%d",tab);
//         printf("\n number of lines=%d",line);
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char keyword[32][10]={
//         "auto","double","int","struct","switch","do","while","enum","for","if",
//         "else","typedef","char","long","goto","static","case","which","signed","default",
//         "return","float","signed","voltile","continue","register","break","sizeof",
//     };
//     char str[]="which";
//     int flag=0,i;
//     for(i=0;i<32;i++)
//     {
//         if(strcmp(str,keyword[i])==0){
//             flag=1;
//         }
//     }
//     if(flag==1)
//     printf("%s is a keyword",str);
//     else
//     printf("%s is not a keyword",str);
// }


//quick sort not working properly
// #include<stdio.h>
// #include<conio.h>
// #include<time.h>
// #include<stdlib.h>
// void exch(int *p,int *q)
// {
//     int temp=*p;
//     *p=*q;
//     *q=temp;

// }
// void quicksort(int a[],int low,int high)
// {
//     int i,j,key,k;
//     if(low>high)
//     {
//         return;
//     }
//     key=low; i=low+1; j=high;
//     while(i<=j)
//     {
//         while(a[i]<=a[key])i=i+1;
//         while(a[i]>a[key])j=j+1;
//         if(i<j)exch(&a[i],&a[j]);
//     }

//     exch(&a[j],&a[key]);
//     quicksort(a,low,j-1);
//     quicksort(a,j+1,high);
// }
// void main()
// {
//     int n,a[100],k;
//     clock_t st,it;
//     double ts;
//     printf("\n enter how many number: ");
//     scanf("%d",&n);
//     printf("\n the random number are:\n ");
//     for(k=1;k<=n;k++)
//     {
//         a[k]=rand();
//         printf("%d\t",a[k]);
//     }
//     st=clock();
//     quicksort(a,1,n);
//     it=clock();
//     ts=(double)(it-st)/CLOCKS_PER_SEC;
//     printf("\n sorted number are:\n ");
//     for(k=1;k<=n;k++)
//     printf("%d\t",a[k]);
//     printf("\n the time is taken is%c ",ts);
//     getch();
// }

// merge sort not working properly
// #include<stdio.h>
// #include<conio.h>
// #include<time.h>
// #include<stdlib.h>
// void merge(int a[],int low,int mid,int high)
// {
//     int i,j,k,b[20];
//     i=low; j=mid+1; k=low;
//     while(i<=mid && j<=high)
//     {
//         if(a[i]<=a[j])
//         b[k++]=a[i++];
//         else
//         b[k--]=a[i++];

//     }
//     while(i<=mid)b[k++]=a[i++];
//     while(j<=high)b[k++]=a[j++];
//     for(k=low;k<=high;k++)
//     {a[k]=b[k];}
    
// }
// void mergesort(int a[],int low,int high)
// {
//     int mid;
//     if(low>=high)
//     return;
//     mid=(low+high)/2;
//     mergesort(a,low,mid);
//     mergesort(a,mid+1,high);
//     merge(a,low,mid,high);
// }
// void main()
// {
//     int n,a[200],k;
//     clock_t st,et;
//     double ts;
//     //clrscr();
//     system("cls");
//     printf("\n enter how many number");
//     scanf("%d",&n);
//     printf("\n the random number is: ");
//     for(k=1;k<=n;k++)
//     {
//         a[k]=rand();
//         printf("%d\t",a[k]);

//     }
//     st=clock();
//     mergesort(a,1,n);
//     et=clock();
//     ts=(double)(et-st)/CLOCKS_PER_SEC;
//     printf("\n sorted list are: \n");
//     for(k=1;k<=n;k++)
//     printf("%d\t",a[k]);
//     printf("\n the time is taken is %e ",ts);
//     getch();
// }

// int main()
// {
//     int sum = 2+4/2+6*2;
//     printf("%d",sum);
//     return 0;
// }

// void solve(){
//     int a[]={1,2,3,4,5};
//     int sum = 0;
//     for (int i =0;i<5;i++){
//         if(i%2 == 0){
//             printf("%d\n",i);
//             sum += *(a+i);
//         }
//         else{
//             sum -= *(a+1);
//         }
//     }
//     printf("%d",sum);
// }

// void solve(){
//     int a =3;
//     int rev = a++ + ++a + a++ + ++a;
//     printf("%d",rev);
// }

// int main(){
//     solve();
//     return 0;
// }


