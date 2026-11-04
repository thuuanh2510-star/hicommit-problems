#include <stdio.h>
int main(void)
{
  float dtb,drl;
  scanf("%f%f",&dtb,&drl);
   if (dtb>=9&&drl>=90){
    printf("HOC_BONG_XUAT_SAC");//xuat sac
   }else if(dtb>=8&&drl>=80){
    printf("HOC_BONG_GIOI");//gioi
   }else if(dtb>=7&&drl>=70){
    printf("HOC_BONG_KHA");//kha
   }else{ 
    printf("KHONG_DAT");//khong dat
   }
  return 0;
}