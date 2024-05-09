#include <conio.h>

void main()
{
    int iterable,barra,loading;
    loading = 0;
    clrscr();
    for (iterable = 0; iterable <2080; iterable++)
	{
		if (iterable >= 0)
		{
			gotoxy(0, 0);
			textcolor(DARKGRAY);
			cprintf("%c", 219);
		}
    }
    for (iterable = 0; iterable <30; iterable++)
	{
        
		gotoxy(25+iterable, 13);
        textcolor(LIGHTBLUE);
        cprintf("%c", 176);
		
    }
    for (iterable=0;iterable <30; iterable++)
    {
        loading ++;
        if (loading == 1)
        {
            gotoxy(34, 11);
            textcolor(LIGHTGREEN);
            cprintf("loading .", 219);
            delay(100);
        }
        else if (loading  == 2)
        {
            gotoxy(34, 11);
            textcolor(LIGHTGREEN);
            cprintf("loading ..", 219);
            delay(100);
        }
        else
        {
            gotoxy(34, 11);
            textcolor(LIGHTGREEN);
            cprintf("loading ...", 219);
            loading = 0;
            delay(100);
            if (loading == 0 && iterable < 28)
            {
                gotoxy(34, 11);
                textcolor(LIGHTGREEN);
                cprintf("loading", 219);
                delay(50);
                textcolor(DARKGRAY);
                cprintf("    ", 219);
            }
            else
            {
                gotoxy(34, 11);
                textcolor(LIGHTGREEN);
                cprintf("loading ...", 219);
                loading = 0;
                delay(100);  
            }
            delay(50);
            
            
        }
        gotoxy(25+iterable, 13);
        textcolor(LIGHTGREEN);
        cprintf("%c", 219);
        barra = (int)((float)iterable / 29 * 100);
        gotoxy(38, 15);
        textcolor(GREEN);
        cprintf("%d %", barra);
        delay(200);
    }
    getch();
} 