# include <stdio.h> //библиотека ввода и вывода
# include <time.h> // библиотека операций с текущим временем

long int t, tt; // время начала учета t, время окончания учета tt

void bt (void) // функция определяющая время начала учета
{
    extern long int t;
    t=time(NULL);
    
}

void btt (void) 			// функция определяющая время конца учета
{
    extern long int tt;
    tt=time(NULL);
    
}


int main (void)
{    
                                                                                   
   long int c;                       // разность между концом и началом учета (пойманое время)
   int g, d;                         // строковые переменные для диалога с пользоавтелем
   long int savetime [7];            // массив в который заносим пойманное время
   savetime [1]=0;                   //обнуление начальных значений, вообще в общем случае обнуление должно происходить только дневного учета, общий суммируется 
   savetime [2]=0;
   savetime [3]=0;
   savetime [4]=0;
   savetime [5]=0;
   savetime [6]=0;
   
   printf ("Начните учет - ENTER\n");	// приглашение к учету, здесь должен быть вход в профиль
   while ((d=getchar()) !=EOF){      	// основной цикл учета, после учета любого вида, предлагается продожить учет выбрав новую тему учета
       
   printf ("Введите тему учета по номеру. \nТемы учета 1 - se, 2 - sys, 3 - komkon, 4 - film,"
           " 5 - kbt, 6 - eot\n\n");
       
      d=getchar(); // ловим тему выбранную пользователем
			//здесь должна быть функция проверки допустимого ввода
	if (d=='1'||d=='2'||d=='3'||d=='4'||d=='5'||d=='6'){
      bt();		//функция фиксации начала учета
      printf ("Время учитывается. Окончание учета - ENTER\n\n");
     
   getchar();
   while ((g=getchar()) !=EOF) //ждем прерывания учета
   {
           
       if (g=='\n')
         {
             btt();       
             
                c=tt-t; //Подсчет потраченного времени
   if (d=='1'){
        savetime [1]=(c+savetime [1])/60.0; 
                printf ("Учтенное время Семья: %ld %c\n", savetime [1], 'm');
                printf ("Продолжить учет - ENTER\nПрервать учет - TAB\n");}
                else if (d=='2'){
        savetime [2]=(c+savetime [2])/60.0; 
                printf ("Учтенное время Система: %ld %c\n", savetime [2], 'm');
                printf("Продолжить учет - ENTER\nПрервать учет - TAB\n");}
                else if (d=='3'){
        savetime [3]=(c+savetime [3])/60.0; 
                printf ("Учтенное время ПКСВ: %ld %c\n", savetime [3], 'm');
                printf("Продолжить учет - ENTER\nПрервать учет - TAB\n");}
                else if (d=='4'){
        savetime [4]=(c+savetime [4])/60.0; 
                printf ("Учтенное время Кино: %ld %c\n", savetime [4], 'm');
                printf("Продолжить учет - ENTER\nПрервать учет - TAB\n");}
                else if (d=='5'){
        savetime [5]=(c+savetime [5])/60.0; 
                printf ("Учтенное время КБТ: %ld %c\n", savetime [5], 'm');
                printf("Продолжить учет - ENTER\nПрервать учет - TAB\n");}
                else if (d=='6'){
        savetime [6]=(c+savetime [6])/60.0; 
                printf ("Учтенное время ЕОТ: %ld %c\n", savetime [6], 'm');
                printf("Продолжить учет - ENTER\nПрервать учет - TAB\n");}
                else  
                 break;
         }                                                                         
       break;
   }
   g=getchar();
   if (g=='\t')
       break;
   }
	else 
		printf ("Неверный ввод, повторите\n");
   }
   printf ("Учтенное время Семья: %ld %c\n", savetime [1], 'm');
   printf ("Учтенное время Система: %ld %c\n", savetime [2], 'm');
   printf ("Учтенное время ПКСВ: %ld %c\n", savetime [3], 'm');
   printf ("Учтенное время Кино: %ld %c\n", savetime [4], 'm');
   printf ("Учтенное время КБТ: %ld %c\n", savetime [5], 'm');
   printf ("Учтенное время ЕОТ: %ld %c\n", savetime [6], 'm');
    return 0;
}
