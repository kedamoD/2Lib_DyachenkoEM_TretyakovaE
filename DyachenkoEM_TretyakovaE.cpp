// {=====================================================================================
//! @brief      Cartoon "Hedgehog"
//!
//!             cartoon with the library of Elena Tretyakova
//!
//! @date       2021
//! @author     Dyachenko Ekaterina Mikhailovna, teacher of informatics, Nefteyugansk
//} =====================================================================================

#include "ChickensLib.h"
#include "TxM_lib.h"

void AnimationManyFlowers();
void PaintManyFlowers();

void MoveSunFlowers_1();
void MoveDog_2();
void MoveDog_3();


int main()
    {
    txCreateWindow (1280, 800);
    txBegin();

    MoveSunFlowers_1();
    MoveDog_2();
    MoveDog_3();

    txEnd();
    return 0;
    }

//------------------------------------------------------------------------------------------------------------
void MoveDog_3()
    {
    PaintBackground();
    Draw_Sun (100, 100, 50, TX_YELLOW, 5, 40);
    PaintManyFlowers();

    Draw_Dog (600, 600, 30, 18 , 12, 60, TX_ORANGE, TX_BLACK, 5);
    Draw_Hedgehog (600, 600, 5, 0, true);

    for (int t=0; t<=500; t +=5)
        {
        PaintBackground();
        Draw_Sun (100, 100, 50, TX_YELLOW, 5, 40);
        PaintManyFlowers();
        Draw_Dog (600, 600 + ((t/10)%2) *(-50), 30, 18 , 12, 30, TX_ORANGE, TX_BLACK, 5);
        Draw_Hedgehog (600, 600, 5, 0, true);

        Draw_Hedgehog (  10 + t, 620, 3, 1, true);
        Draw_Hedgehog ( -50 + t, 650, 3, 1, true);
        Draw_Hedgehog ( -80 + t, 580, 3, 1, true);
        Draw_Hedgehog (-100 + t, 600, 3, 1, true);
        Draw_Hedgehog (-150 + t, 630, 3, 1, true);
        Draw_Hedgehog (   5 + t, 670, 3, 1, true);

        t++;
        txSleep (100);
        }
    }


void MoveDog_2()
    {
    for (int t=0; t<=300; t +=5)
        {
        PaintBackground();
        Draw_Sun (100, 100, 50, TX_YELLOW, 5, 40);
        Draw_Dog (1200 - t*2, 600, 30, 18 + (t/10) % 2*(-15), 12, 60, TX_ORANGE, TX_BLACK, 5);
        PaintManyFlowers();

        t++;
        txSleep (100);
        }

    for (int t=0; t<=250; t +=5)
        {
        PaintBackground();
        Draw_Sun (100, 100, 50, TX_YELLOW, 5, 40);

        Draw_Dog (600, 600, 30, 18 , 12 + (t/10) % 2*(30), 60, TX_ORANGE, TX_BLACK, 5 + (t/10)%2 *(2) );
        Draw_Hedgehog (100 + t*2, 600, 5, 0, true);

        PaintManyFlowers();

        t++;
        txSleep (100);
        }
    }

void MoveSunFlowers_1()
    {
    for (int t=0; t<=100; t +=2)
        {
        PaintBackground();
        Draw_Sun (0 + t, 100, (int) 50*t*0.01, TX_YELLOW, 5, 40);

        t++;
        txSleep (100);
        }

     for (int t = 0; t <= 100; t += 2)
        {
        Draw_Flower (100, 720, (int) t*0.1, TX_PINK);
        Draw_Flower (140, 743, (int) t*0.1, RGB (255, 074, 074));
        Draw_Flower (170, 737, (int) t*0.1, RGB (040, 255, 255));
        Draw_Flower (200, 758, (int) t*0.1, RGB (255, 155, 055));
        Draw_Flower (240, 720, (int) t*0.1, TX_PINK);
        Draw_Flower (270, 735, (int) t*0.1, RGB (255, 255, 0));

        Draw_Flower (300, 720, (int) t*0.1, TX_PINK);
        Draw_Flower (340, 743, (int) t*0.1, RGB (255, 074, 074));
        Draw_Flower (370, 737, (int) t*0.1, RGB (040, 255, 255));
        Draw_Flower (400, 758, (int) t*0.1, RGB (255, 155, 055));
        Draw_Flower (440, 720, (int) t*0.1, TX_PINK);
        Draw_Flower (470, 735, (int) t*0.1, RGB (255, 255, 0));

        Draw_Flower (500, 720, (int) t*0.1, TX_PINK);
        Draw_Flower (540, 743, (int) t*0.1, RGB (255, 074, 074));
        Draw_Flower (570, 737, (int) t*0.1, RGB (040, 255, 255));
        Draw_Flower (600, 758, (int) t*0.1, RGB (255, 155, 055));
        Draw_Flower (640, 720, (int) t*0.1, TX_PINK);
        Draw_Flower (670, 735, (int) t*0.1, RGB (255, 255, 0));

        Draw_Flower (700, 720, (int) t*0.1, TX_PINK);
        Draw_Flower (740, 743, (int) t*0.1, RGB (255, 074, 074));
        Draw_Flower (770, 737, (int) t*0.1, RGB (040, 255, 255));
        Draw_Flower (800, 758, (int) t*0.1, RGB (255, 155, 055));
        Draw_Flower (840, 720, (int) t*0.1, TX_PINK);
        Draw_Flower (870, 735, (int) t*0.1, RGB (255, 255, 0));

        t++;
        txSleep (100);
        }

    for (int t=1; t<=12; t +=1)
        {
        AnimationManyFlowers();

        t++;
        }
    }

void AnimationManyFlowers ()
    {
    for (int t = 80; t <= 100; t += 2)
        {
        Draw_Flower (100, 720, (int) t*0.1, TX_PINK);
        Draw_Flower (140, 743, (int) t*0.1, RGB (255, 074, 074));
        Draw_Flower (170, 737, (int) t*0.1, RGB (040, 255, 255));
        Draw_Flower (200, 758, (int) t*0.1, RGB (255, 155, 055));
        Draw_Flower (240, 720, (int) t*0.1, TX_PINK);
        Draw_Flower (270, 735, (int) t*0.1, RGB (255, 255, 0));

        Draw_Flower (300, 720, (int) t*0.1, TX_PINK);
        Draw_Flower (340, 743, (int) t*0.1, RGB (255, 074, 074));
        Draw_Flower (370, 737, (int) t*0.1, RGB (040, 255, 255));
        Draw_Flower (400, 758, (int) t*0.1, RGB (255, 155, 055));
        Draw_Flower (440, 720, (int) t*0.1, TX_PINK);
        Draw_Flower (470, 735, (int) t*0.1, RGB (255, 255, 0));

        Draw_Flower (500, 720, (int) t*0.1, TX_PINK);
        Draw_Flower (540, 743, (int) t*0.1, RGB (255, 074, 074));
        Draw_Flower (570, 737, (int) t*0.1, RGB (040, 255, 255));
        Draw_Flower (600, 758, (int) t*0.1, RGB (255, 155, 055));
        Draw_Flower (640, 720, (int) t*0.1, TX_PINK);
        Draw_Flower (670, 735, (int) t*0.1, RGB (255, 255, 0));

        Draw_Flower (700, 720, (int) t*0.1, TX_PINK);
        Draw_Flower (740, 743, (int) t*0.1, RGB (255, 074, 074));
        Draw_Flower (770, 737, (int) t*0.1, RGB (040, 255, 255));
        Draw_Flower (800, 758, (int) t*0.1, RGB (255, 155, 055));
        Draw_Flower (840, 720, (int) t*0.1, TX_PINK);
        Draw_Flower (870, 735, (int) t*0.1, RGB (255, 255, 0));

        t++;
        txSleep (100);
        }

    for (int t = 100; t >= 80; t -= 2)
        {
        Draw_Flower (100, 720, (int) t*0.1, TX_PINK);
        Draw_Flower (140, 743, (int) t*0.1, RGB (255, 074, 074));
        Draw_Flower (170, 737, (int) t*0.1, RGB (040, 255, 255));
        Draw_Flower (200, 758, (int) t*0.1, RGB (255, 155, 055));
        Draw_Flower (240, 720, (int) t*0.1, TX_PINK);
        Draw_Flower (270, 735, (int) t*0.1, RGB (255, 255, 0));

        Draw_Flower (300, 720, (int) t*0.1, TX_PINK);
        Draw_Flower (340, 743, (int) t*0.1, RGB (255, 074, 074));
        Draw_Flower (370, 737, (int) t*0.1, RGB (040, 255, 255));
        Draw_Flower (400, 758, (int) t*0.1, RGB (255, 155, 055));
        Draw_Flower (440, 720, (int) t*0.1, TX_PINK);
        Draw_Flower (470, 735, (int) t*0.1, RGB (255, 255, 0));

        Draw_Flower (500, 720, (int) t*0.1, TX_PINK);
        Draw_Flower (540, 743, (int) t*0.1, RGB (255, 074, 074));
        Draw_Flower (570, 737, (int) t*0.1, RGB (040, 255, 255));
        Draw_Flower (600, 758, (int) t*0.1, RGB (255, 155, 055));
        Draw_Flower (640, 720, (int) t*0.1, TX_PINK);
        Draw_Flower (670, 735, (int) t*0.1, RGB (255, 255, 0));

        Draw_Flower (700, 720, (int) t*0.1, TX_PINK);
        Draw_Flower (740, 743, (int) t*0.1, RGB (255, 074, 074));
        Draw_Flower (770, 737, (int) t*0.1, RGB (040, 255, 255));
        Draw_Flower (800, 758, (int) t*0.1, RGB (255, 155, 055));
        Draw_Flower (840, 720, (int) t*0.1, TX_PINK);
        Draw_Flower (870, 735, (int) t*0.1, RGB (255, 255, 0));

        t--;
        txSleep (100);
        }
    }

void PaintManyFlowers()
    {
    Draw_Flower (100, 720, 10, TX_PINK);
    Draw_Flower (140, 743, 10, RGB (255, 074, 074));
    Draw_Flower (170, 737, 10, RGB (040, 255, 255));
    Draw_Flower (200, 758, 10, RGB (255, 155, 055));
    Draw_Flower (240, 720, 10, TX_PINK);
    Draw_Flower (270, 735, 10, RGB (255, 255, 0));

    Draw_Flower (300, 720, 10, TX_PINK);
    Draw_Flower (340, 743, 10, RGB (255, 074, 074));
    Draw_Flower (370, 737, 10, RGB (040, 255, 255));
    Draw_Flower (400, 758, 10, RGB (255, 155, 055));
    Draw_Flower (440, 720, 10, TX_PINK);
    Draw_Flower (470, 735, 10, RGB (255, 255, 0));

    Draw_Flower (500, 720, 10, TX_PINK);
    Draw_Flower (540, 743, 10, RGB (255, 074, 074));
    Draw_Flower (570, 737, 10, RGB (040, 255, 255));
    Draw_Flower (600, 758, 10, RGB (255, 155, 055));
    Draw_Flower (640, 720, 10, TX_PINK);
    Draw_Flower (670, 735, 10, RGB (255, 255, 0));

    Draw_Flower (700, 720, 10, TX_PINK);
    Draw_Flower (740, 743, 10, RGB (255, 074, 074));
    Draw_Flower (770, 737, 10, RGB (040, 255, 255));
    Draw_Flower (800, 758, 10, RGB (255, 155, 055));
    Draw_Flower (840, 720, 10, TX_PINK);
    Draw_Flower (870, 735, 10, RGB (255, 255, 0));

    }
