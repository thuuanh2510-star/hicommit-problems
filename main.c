#include <stdio.h>

int main(void)
{
  int code;
  scanf("%d",&code);
  swich(code){
    case 1:
  printf("XEP_LOAI_XUAT_SAC\n");
    break;
    case 2:
  printf("XEP_LOAI_GOI\n");
   break;
    case 3:
  printf("XEP_LOAI_KHA\n");
    break;
    case 4:
  printf("XEP_LOAI_TRUNG_BINH\n");
    break;
    default:
  printf("KHONG_HOP_LE\n");
    break;
  }
  return 0;
}