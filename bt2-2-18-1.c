# include <stdio.h> //���������� ����� � ������
# include <time.h> // ���������� �������� � ������� ��������

long int t, tt; // ����� ������ ����� t, ����� ��������� ����� tt

void bt (void) // ������� ������������ ����� ������ �����
{
    extern long int t;
    t=time(NULL);
    
}

void btt (void) 			// ������� ������������ ����� ����� �����
{
    extern long int tt;
    tt=time(NULL);
    
}


int main (void)
{    
                                                                                   
   long int c;                       // �������� ����� ������ � ������� ����� (�������� �����)
   int g, d;                         // ��������� ���������� ��� ������� � �������������
   long int savetime [7];            // ������ � ������� ������� ��������� �����
   savetime [1]=0;                   //��������� ��������� ��������, ������ � ����� ������ ��������� ������ ����������� ������ �������� �����, ����� ����������� 
   savetime [2]=0;
   savetime [3]=0;
   savetime [4]=0;
   savetime [5]=0;
   savetime [6]=0;
   
   printf ("������� ���� - ENTER\n");	// ����������� � �����, ����� ������ ���� ���� � �������
   while ((d=getchar()) !=EOF){      	// �������� ���� �����, ����� ����� ������ ����, ������������ ��������� ���� ������ ����� ���� �����
       
   printf ("������� ���� ����� �� ������. \n���� ����� 1 - se, 2 - sys, 3 - komkon, 4 - film,"
           " 5 - kbt, 6 - eot\n\n");
       
      d=getchar(); // ����� ���� ��������� �������������
			//����� ������ ���� ������� �������� ����������� �����
	if (d=='1'||d=='2'||d=='3'||d=='4'||d=='5'||d=='6'){
      bt();		//������� �������� ������ �����
      printf ("����� �����������. ��������� ����� - ENTER\n\n");
     
   getchar();
   while ((g=getchar()) !=EOF) //���� ���������� �����
   {
           
       if (g=='\n')
         {
             btt();       
             
                c=tt-t; //������� ������������ �������
   if (d=='1'){
        savetime [1]=(c+savetime [1])/60.0; 
                printf ("�������� ����� �����: %ld %c\n", savetime [1], 'm');
                printf ("���������� ���� - ENTER\n�������� ���� - TAB\n");}
                else if (d=='2'){
        savetime [2]=(c+savetime [2])/60.0; 
                printf ("�������� ����� �������: %ld %c\n", savetime [2], 'm');
                printf("���������� ���� - ENTER\n�������� ���� - TAB\n");}
                else if (d=='3'){
        savetime [3]=(c+savetime [3])/60.0; 
                printf ("�������� ����� ����: %ld %c\n", savetime [3], 'm');
                printf("���������� ���� - ENTER\n�������� ���� - TAB\n");}
                else if (d=='4'){
        savetime [4]=(c+savetime [4])/60.0; 
                printf ("�������� ����� ����: %ld %c\n", savetime [4], 'm');
                printf("���������� ���� - ENTER\n�������� ���� - TAB\n");}
                else if (d=='5'){
        savetime [5]=(c+savetime [5])/60.0; 
                printf ("�������� ����� ���: %ld %c\n", savetime [5], 'm');
                printf("���������� ���� - ENTER\n�������� ���� - TAB\n");}
                else if (d=='6'){
        savetime [6]=(c+savetime [6])/60.0; 
                printf ("�������� ����� ���: %ld %c\n", savetime [6], 'm');
                printf("���������� ���� - ENTER\n�������� ���� - TAB\n");}
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
		printf ("�������� ����, ���������\n");
   }
   printf ("�������� ����� �����: %ld %c\n", savetime [1], 'm');
   printf ("�������� ����� �������: %ld %c\n", savetime [2], 'm');
   printf ("�������� ����� ����: %ld %c\n", savetime [3], 'm');
   printf ("�������� ����� ����: %ld %c\n", savetime [4], 'm');
   printf ("�������� ����� ���: %ld %c\n", savetime [5], 'm');
   printf ("�������� ����� ���: %ld %c\n", savetime [6], 'm');
    return 0;
}
