#include <stdio.h>

int main()
{
  int a,b,c;
  printf("baby,please enter a number between 1 to 7 : ");
  scanf("%d",&a);
  switch(a)
  {
      case 1:printf("sunday: ROTI and Mushroom");break;
      case 2:printf("mondayday: ROTI and ButterPaneer");break;
      case 3:printf("tuesday: NAAN and TADKA");break;
      case 4:printf("wednesday: ZOMATO");break;
      case 5:printf("thurshday: ROTI and CHOLE");break;
      case 6:printf("friday: CHAKULI PITHA and BHAJA");break;
      case 7:printf("saturrday: WINE and CHips(Zomato)");break;
      default:printf("Please don't Come to home");
      
  }
}
