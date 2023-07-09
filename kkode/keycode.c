/******************************/
/*  押されたキーの番号を表示  */
/******************************/
#include <stdio.h>
#include <conio.h>
void  main( )
{
   int    j=0;

   printf("\n何かキーを押してください\n");
   while ( 1 )                               // 無限ループ
     { if ( kbhit( )!=0 ) break; }           // キーが押されたらブレーク

   j=getch( );                               // 押されたキー番号
   printf("\n押されたキー＝%c",j);
   printf("\n        番号＝%d",j);

   if ( j==0 )                               // 特殊キーのとき
     {
       j=getch( );                           // 押されたキー番号２
       printf("-%d（特殊キー）",j);
     }

    printf("\n");
}