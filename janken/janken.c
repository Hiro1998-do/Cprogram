/******************************/
/*  コンピュータとじゃんけん  */
/******************************/
#include <stdio.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

char  te[3][7]={"グー","チョキ","パー"};                // じゃんけんの手

void  main( )
{
    char c[32];
    int  nC,n,k;

    printf("****************************\n");
    printf("*                          *\n");
    printf("* コンピュータとじゃんけん *\n");
    printf("*                          *\n");
    printf("* Escキーで終了            *\n");
    printf("****************************\n\n");

    srand(time(NULL));                                  // 乱数の準備

    while( 1 )
      {
        nC=rand( )%3+1;                                 // 乱数発生
        Sleep(1000);
        printf("オラは何を出すか決めたぞ。さあ入力してくれ。\n\n");
        printf("じゃんけん（ 1=グー, 2=チョキ, 3=パー ）: ");
        fflush(stdout);

        gets(c); n=atoi(c);                             // 番号入力
        if ( n<1 || n>3 )                               // 範囲外
          {
            printf("\n悪りいな。1 から 3 の数字で入力してくれよな。\n");
            printf("次いくぞ。\n\n");
            Beep(262,500);
            continue;
          }

        printf("\nきみは【%s】か。\n\n",&te[n-1]);
        Beep(523,500);//ド
        Sleep(1000);

        if ( nC==n ) printf("オラも"); else printf("オラは");
        printf("【%s】だ。\n",&te[nC-1]);
        Sleep(1000);

        if ( nC==n )
            strcpy(c,"あいこだな。");
        else if ( nC-n==-2 || nC-n==1 )
            strcpy(c,"きみの勝ちだ。");
        else
            strcpy(c,"オラの勝ちだ。");
        printf("\n%s\n\n",c);
        Sleep(2000);

        printf("\n続けるならEsc以外のキーを押してくれ。\n\n\n");
        fflush(stdout);
        k=getch( );                                        // 文字入力
        if ( k==27 ) break;                                // Esc(終了)
      }
}