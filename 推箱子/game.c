#include"tui.h"

char game(int level)
{
	//���弰��ʼ����ͼ
	char map[maps_num][50][50] = {
		{
			"|========|",
			"|  ###   |",
			"|  #X#   |",
			"|  # ####|",
			"|###O OX#|",
			"|#X O@###|",
			"|####O#  |",
			"|   #X#  |",
			"|   ###  |",
			"|========|"
		},//��1��
		{
			"|=========|",
			"|#####    |",
			"|#   #    |",
			"|# O # ###|",
			"|# O@# #X#|",
			"|###O###X#|",
			"| ##    X#|",
			"| #   #  #|",
			"| #   ####|",
			"| #####   |",
			"|=========|"
		},//��2��
		{
			"|==========|",
			"| #######  |",
			"| #     ###|",
			"|##O###   #|",
			"|#  @O  O #|",
			"|# XX# O ##|",
			"|##XX#   # |",
			"| ######## |",
			"|==========|"
		},//��3��
		{
			"|======|",
			"| #### |",
			"|##  # |",
			"|#  O# |",
			"|##  ##|",
			"|##O@ #|",
			"|#XOO #|",
			"|#XXQX#|",
			"|######|",
			"|======|"
		},//��4��
		{
			"|========|",
			"| #####  |",
			"| # @### |",
			"| # O  # |",
			"|### # ##|",
			"|#X# #  #|",
			"|#XO  # #|",
			"|#X   O #|",
			"|########|",
			"|========|"
		},//��5��
		{
			"|=============|",
			"|   #######   |",
			"|####     #   |",
			"|#   X### #   |",
			"|# # #    ##  |",
			"|# # O O#X #  |",
			"|# #  Q  # #  |",
			"|# X#O O # #  |",
			"|##    # # ###|",
			"| # ###X    @#|",
			"| #     ##   #|",
			"| ############|",
			"|=============|"
		},//��6��
		{
			"|==========|",
			"|   #######|",
			"|  ##  # @#|",
			"|  #   #O #|",
			"|  #O  O  #|",
			"|  # O##  #|",
			"|### O # ##|",
			"|#XXXXX  # |",
			"|######### |",
			"|==========|"
		},//��7��
		{
			"|==========|",
			"|   ###### |",
			"| ###    # |",
			"|##X O## ##|",
			"|#XXO O @ #|",
			"|#XX O O ##|",
			"|######  # |",
			"|     #### |",
			"|==========|"
		},//��8��
		{
			"|===========|",
			"| ######### |",
			"| #  ##   # |",
			"| #   O   # |",
			"| #O ### O# |",
			"| # #XXX# # |",
			"|## #XXX# ##|",
			"|# O  O  O #|",
			"|#     #  @#|",
			"|###########|",
			"|===========|"
		},//��9��
		{
			"|========|",
			"|  ######|",
			"|  #    #|",
			"|###OOO #|",
			"|#@ OXX #|",
			"|# OXXX##|",
			"|####  # |",
			"|   #### |",
			"|========|"
		},//��10��
		{
			"|============|",
			"| ####  #####|",
			"|##  #  #   #|",
			"|# O ####O  #|",
			"|#  OXXXX O #|",
			"|##    # @ ##|",
			"| ########## |",
			"|============|"
		},//��11��
		{
			"|========|",
			"|  ##### |",
			"|###  @# |",
			"|#  OX ##|",
			"|#  XOX #|",
			"|### QO #|",
			"|  #   ##|",
			"|  ######|",
			"|========|"
		},//��12��
		{
			"|========|",
			"|  ####  |",
			"|  #XX#  |",
			"| ## x## |",
			"| #  OX# |",
			"|## O  ##|",
			"|#  #OO #|",
			"|#  @   #|",
			"|########|",
			"|========|"
		},//��13��
		{
			"|========|",
			"|########|",
			"|#  #   #|",
			"|# OXXO #|",
			"|#@OXQ ##|",
			"|# OXXO #|",
			"|#  #   #|",
			"|########|",
			"|========|"
		},//��14��
		{
			"|========|",
			"| ###### |",
			"|##    ##|",
			"|# O OO #|",
			"|#XXXXXX#|",
			"|# OO O #|",
			"|### @###|",
			"|  ####  |",
			"|========|"
		},//��15��
		{
			"|==========|",
			"|  ########|",
			"|  #    ###|",
			"|  # O    #|",
			"|### O ## #|",
			"|#XXX O   #|",
			"|#XXXO#O ##|",
			"|#### # O #|",
			"|   #   @ #|",
			"|   #######|",
			"|==========|"
		},//��16��
		{
			"|=========|",
			"|######   |",
			"|#    #   |",
			"|# OOO##  |",
			"|#  #XX###|",
			"|##  XXO #|",
			"| #  @   #|",
			"| ########|",
			"|=========|"
		},//��17��
		{
			"|==========|",
			"|  ########|",
			"|  #   #X #|",
			"| ##  OXXX#|",
			"| #  O #QX#|",
			"|## ##O# ##|",
			"|#   O  O #|",
			"|#   #    #|",
			"|#######@ #|",
			"|      ####|",
			"|===========|"
		},//��18��
		{
			"|==========|",
			"| #######  |",
			"| #XXXX #  |",
			"|###XXXO###|",
			"|#  O#O O #|",
			"|# OO  #O #|",
			"|#    #   #|",
			"|#### @ ###|",
			"|   #####  |",
			"|==========|"
		},//��19��
		{
			"|=======|",
			"|#######|",
			"|#XXOXX#|",
			"|#XX#XX#|",
			"|# OOO #|",
			"|#  O  #|",
			"|# OOO #|",
			"|#  #@ #|",
			"|#######|",
			"|=======|"
		},//��20��
		{
			"|===========|",
			"|   ######  |",
			"|   # XXX#  |",
			"|####XXXX#  |",
			"|#  ###O ###|",
			"|# O O  OO #|",
			"|#@ O O    #|",
			"|#   ###   #|",
			"|##### #####|",
			"|===========|"
		},//��21��
		{
			"|=========|",
			"|######## |",
			"|#      # |",
			"|# #OO  # |",
			"|# XXX# # |",
			"|##XXXO ##|",
			"| # ## O #|",
			"| #O  O  #|",
			"| #  #  @#|",
			"| ########|",
			"|=========|"
		},//��22��
		{
			"|==========|",
			"|  #####   |",
			"|###   ####|",
			"|#   O  O #|",
			"|# O @O   #|",
			"|###OO#####|",
			"|  #  XX#  |",
			"|  #XXXX#  |",
			"|  ######  |",
			"|==========|"
		},//��23��
		{
			"|==============|",
			"|######   #####|",
			"|#    ### #  X#|",
			"|#  O O # #XXX#|",
			"|# #  O ###  X#|",
			"|#  OOO   O @X#|",
			"|###  O  O#  X#|",
			"|  #  O#O #XXX#|",
			"|  ##     #  X#|",
			"|   ###########|",
			"|==============|"
		},//��24��
		{
			"|===========|",
			"|     ######|",
			"| #####X   #|",
			"| #  #XX## #|",
			"| #  OXX   #|",
			"| #  # X# ##|",
			"|### ##O#  #|",
			"|# O    OO #|",
			"|# #O#  #  #|",
			"|#@  #######|",
			"|#####      |",
			"|===========|"
		},//��25��
		{
			"|=============|",
			"| #########   |",
			"| #   ##  ####|",
			"| # O        #|",
			"| ##O### ##  #|",
			"| #  ## Q # ##|",
			"| # OXXXXXX # |",
			"|## ### X # # |",
			"|#     O###O# |",
			"|#   #    O@# |",
			"|#####O# #### |",
			"|    #   #    |",
			"|    #####    |",
			"|=============|"
		},//��26��
		{
			"|===============|",
			"|      #########|",
			"|      #       #|",
			"|      # # # # #|",
			"|      #  O O# #|",
			"|#######   O   #|",
			"|#XX#  ## O O# #|",
			"|#XX   ## O O  #|",
			"|#XX#  ## ######|",
			"|#XX# # O O #   |",
			"|#XX     O  #   |",
			"|#  ###@  ###   |",
			"|#### #####     |",
			"|===============|"
		},//��27��
		{
			"|================|",
			"|    ####        |",
			"|#####  #        |",
			"|#  O O # #######|",
			"|#   O  # #QXQXQ#|",
			"|## O O ###XQXQX#|",
			"| #O O  #  QXQXQ#|",
			"| #@O O    XQXQX#|",
			"| #O O  #  QXQXQ#|",
			"|## O O ###XQXQX#|",
			"|#   O  # #QXQXQ#|",
			"|#  O O # #######|",
			"|#####  #        |",
			"|    ####        |",
			"|================|"
		},//��28��
		{
			"|=========|",
			"|######## |",
			"|#XXXXXX# |",
			"|#  O # ##|",
			"|# O # O #|",
			"|##O O O #|",
			"| #  @   #|",
			"| ########|",
			"|=========|"
		},//��29��
		{
			"|============|",
			"|  ##########|",
			"|###    X@  #|",
			"|#   ##O##  #|",
			"|#   Q X X ##|",
			"|## O##O## # |",
			"| #    X   # |",
			"| ###########|",
			"|============|"
		},//��30��
		{
			"|=========|",
			"|   ######|",
			"|####X  @#|",
			"|#  OOO  #|",
			"|#X##X##X#|",
			"|#   O   #|",
			"|#  OX# ##|",
			"|####   # |",
			"|   ##### |",
			"|=========|"
		},//��31��
		{
			"|========|",
			"| ###### |",
			"| #X XX# |",
			"| #X OX# |",
			"|###  O##|",
			"|# O  O #|",
			"|# #O## #|",
			"|#   @  #|",
			"|########|",
			"|========|"
		},//��32��
		{
			"|==============|",
			"|    ######    |",
			"|  ###    ###  |",
			"|  #   #O   ###|",
			"|  #   O   OO #|",
			"|  # OO #O    #|",
			"|  ##   O   O #|",
			"|###### #O#####|",
			"|#XX@ #O  #    |",
			"|#X#XX  O##    |",
			"|#XXXXO# #     |",
			"|#XXXX   #     |",
			"|#########     |",
			"|==============|"
		},//��33��
		{
			"|===============|",
			"|###############|",
			"|#      #      #|",
			"|# O #O # O##O #|",
			"|# #  O #      #|",
			"|#   ##O#O##OO #|",
			"|# # # XXX #   #|",
			"|# O  X # XO   #|",
			"|# O#@OXXX# #  #|",
			"|#    X # X  O #|",
			"|# ##XO###OX # #|",
			"|# # OXXXXX ## #|",
			"|#             #|",
			"|###############|",
			"|===============|"
		},//��34��
		{
			"|==========|",
			"|######### |",
			"|#   ##  # |",
			"|# # O O # |",
			"|#  QX#  # |",
			"|## #X@X## |",
			"|##O###Q###|",
			"|#        #|",
			"|#   ## # #|",
			"|######   #|",
			"|     #####|",
			"|==========|"
		}//��35��
	};
	

	//��������
	//i,t ѭ��������, x ������, y ������, pass ͨ���ж�����
	//restep_num ��¼ÿ�ֳ�������,step_num ��¼�����ܲ���,wide ��ͼ���
	int i,t, x, y, pass,restep_num,step_num,wide;
	//(ch ��Ϸ�����ж�ȡ������Ϣ, option��ͣ�����ж�ȡ������Ϣ����Ϸ��������ֵ,last_step ��¼��һ������)
	char ch, option,last_step;
	//���������飬��¼�յ�����
	int X_num[50] = { 0 }, Y_num[50] = { 0 },xnum,ynum;
	//lstep ��¼�Ƿ�����,x_box ��¼��һ��������ǰ�����������,y_box ��¼��һ��������ǰ��ĺ�������, rerestep_num ��¼��һ��������ǰ���ߵĲ���
	int lstep,x_box,y_box, rerestep_num;

	//��ʼ������
	wide=step_num = restep_num= pass = 0;
	ch = option =last_step= NULL;
	xnum = ynum = 0;
	lstep = 0;

	//��ʼ����ʼλ��
	for ( i = 0;i<20; i++)
	{ 
		for (t = 0;map[level][i][t] != '\0'; t++)
			if (map[level][i][t] == '@')
			{
				x = i;
				y = t;
				i = 99;
				break;
			}
	}
	
	//Ѱ���յ�����
	for (i = 2; i<20; i++)
	{
		for (t = 2; map[level][i][t] != '\0'; t++)
		{
			if (map[level][i][t] == 'X'|| map[level][i][t] == 'Q')
			{
				X_num[xnum] = i;
				Y_num[ynum] = t;
				xnum++;
				ynum++;
			}
			if (map[level][i][t]=='=')
			{
				i = 99;
				break;
			}
		}
	}

	//�����ͼ���
	wide = strlen(map[level][0]);

	//��ӡ��ͼ
	system("cls");
	printf("\n\n\n\n\t\t\t\t\t\t         ��%d��",level+1);
	printf("\n\n");
	for (i = 0; i <= 17; i++)
	{
		for ( t = 0; t <(120-wide)/2; t++)
			printf(" ");
		puts(map[level][i]);
	}
	printf("\t\t\t\t\t\t������%d  ʣ�೷��������%d", step_num, 3 - restep_num);
	printf("\n\n\t\t\t\t\t      ���汾��(Q) ����(B) �˵�(ESC)");

	//��Ϸ������
	while (1)
	{
		ch = getch();
		ch= tolower(ch);
		
		switch (ch)
		{
		//�����ƶ�
		case 's':
			if (map[level][x + 1][y] == ' ' || map[level][x + 1][y] == 'X')
			{
				map[level][x][y] = ' ';
				x++;
				map[level][x][y] = '@';
				step_num++;
			}
			else if ((map[level][x + 1][y] == 'O' || map[level][x + 1][y] == 'Q') && map[level][x + 2][y] != 'O' && map[level][x + 2][y] != 'Q' && map[level][x + 2][y] != '#')
			{
				map[level][x][y] = ' ';
				x++;
				map[level][x][y] = '@';
				map[level][x + 1][y] = 'O';
				lstep = 1;
				x_box = x;
				y_box = y;
				rerestep_num = step_num;
				step_num++;
				last_step = ch;//�洢��һ����Ϣ
			}
			break;
		//�����ƶ�
		case 'w':
			if (map[level][x - 1][y] == ' ' || map[level][x - 1][y] == 'X')
			{
				map[level][x][y] = ' ';
				x--;
				map[level][x][y] = '@';
				step_num++;
			}
			else if ((map[level][x - 1][y] == 'O' || map[level][x - 1][y] == 'Q') && map[level][x - 2][y] != 'O' && map[level][x - 2][y] != 'Q' && map[level][x - 2][y] != '#')
			{
				map[level][x][y] = ' ';
				x--;
				map[level][x][y] = '@';
				map[level][x - 1][y] = 'O';
				lstep = 1;
				x_box = x;
				y_box = y;
				rerestep_num = step_num;
				step_num++;
				last_step = ch;//�洢��һ����Ϣ
			}
			break;
		//�����ƶ�
		case 'a':
			if (map[level][x][y - 1] == ' ' || map[level][x][y - 1] == 'X')
			{
				map[level][x][y] = ' ';
				y--;
				map[level][x][y] = '@';
				step_num++;
			}
			else if ((map[level][x][y - 1] == 'O' || map[level][x][y - 1] == 'Q') && map[level][x][y - 2] != 'O' && map[level][x][y - 2] != 'Q' && map[level][x][y - 2] != '#')
			{
				map[level][x][y] = ' ';
				y--;
				map[level][x][y] = '@';
				map[level][x][y - 1] = 'O';
				lstep = 1;
				x_box = x;
				y_box = y;
				rerestep_num = step_num;
				step_num++;
				last_step = ch;//�洢��һ����Ϣ
			}
			break;
		//�����ƶ�
		case 'd':
			if (map[level][x][y + 1] == ' ' || map[level][x][y + 1] == 'X')
			{
				map[level][x][y] = ' ';
				y++;
				map[level][x][y] = '@';
				step_num++;
			}
			else if ((map[level][x][y + 1] == 'O' || map[level][x][y + 1] == 'Q') && map[level][x][y + 2] != 'O' && map[level][x][y + 2] != 'Q'&&map[level][x][y + 2] != '#')
			{
				map[level][x][y] = ' ';
				y++;
				map[level][x][y] = '@';
				map[level][x][y + 1] = 'O';
				lstep = 1;
				x_box = x;
				y_box = y;
				rerestep_num = step_num;
				step_num++;
				last_step = ch;//�洢��һ����Ϣ
			}
			break;

		case 27://��ͣ����
			system("cls");
			printf("\n\n\n\n\n\t\t\t\t\t\t        ����(R)\n");
			printf("\n\n\t\t\t\t         ѡ��(X)  ����(Q)  ��һ��(N)  ���˵�(M)  \n");
			printf("\n\n\n\t\t\t\t\t\t      ����˵��");
			printf("\n\n\t\t\t\t\t        W:��  S:��  A:��  D:��");
			printf("\n\n\t\t\t\t\t         @:��  O:����  X:�յ� ");
			while (ch != 'r')
			{
				ch = getch();
				if (ch == 'x' || ch == 'q' || ch == 'n' || ch == 'm'||ch == 'X' || ch == 'Q' || ch == 'N' || ch == 'M')
				{
					option = ch;
					ch = 27;
					break;
				}
			}
			break;

		case 'q'://����
			option = ch;
			break;
		}

		//����һ��
		if (lstep == 1 && ch == 'b'&&restep_num<3)
		{
			switch (last_step)
			{
			//���������ƶ�
			case 's':
				map[level][x][y] = ' ';
				map[level][x_box+1][y_box] = ' ';
				map[level][x_box][y_box] = 'O';
				x_box--;
				x = x_box;
				y = y_box;
				map[level][x][y] = '@';
				step_num=rerestep_num;
				restep_num++;
				lstep = 0;
				break;
			//���������ƶ�
			case 'w':
				map[level][x][y] = ' ';
				map[level][x_box -1][y_box] = ' ';
				map[level][x_box][y_box] = 'O';
				x_box++;
				x = x_box;
				y = y_box;
				map[level][x][y] = '@';
				step_num = rerestep_num;
				restep_num++;
				lstep = 0;
				break;
				//���������ƶ�
			case 'a':
				map[level][x][y] = ' ';
				map[level][x_box][y_box-1] = ' ';
				map[level][x_box][y_box] = 'O';
				y_box++;
				x = x_box;
				y = y_box;
				map[level][x][y] = '@';
				step_num = rerestep_num;
				restep_num++;
				lstep = 0;
				break;
				//���������ƶ�
			case 'd':
				map[level][x][y] = ' ';
				map[level][x_box][y_box + 1] = ' ';
				map[level][x_box][y_box] = 'O';
				y_box--;
				x = x_box;
				y = y_box;
				map[level][x][y] = '@';
				step_num = rerestep_num;
				restep_num++;
				lstep = 0;
				break;
			}
		}

		//if (lstep = 1)
		//	last_step = ch;//�洢��һ����Ϣ

		//��ԭ�յ���
		for ( i = 0;X_num[i]!=0; i++)
		{
			if (map[level][X_num[i]][Y_num[i]] == ' ')
				map[level][X_num[i]][Y_num[i]] = 'X';
			if (map[level][X_num[i]][Y_num[i]] == 'O')
				map[level][X_num[i]][Y_num[i]] ='Q';
		}

		//��ӡ��ͼ
		if (option != 'q')
		{
			system("cls");
			printf("\n\n\n\n\t\t\t\t\t\t         ��%d��", level + 1);
			printf("\n\n");
			for (i = 0; i <= 17; i++)
			{
				for (t = 0; t <(120 - wide) / 2; t++)
					printf(" ");
				puts(map[level][i]);
			}
			printf("\t\t\t\t\t\t������%d  ʣ�೷��������%d", step_num, 3 - restep_num);
			printf("\n\n\t\t\t\t\t      ���汾��(Q) ����(B) �˵�(ESC)");
		}

		//ͨ�������ж�
		for (i = 0; X_num[i] != 0; i++)
		{
			if (map[level][X_num[i]][Y_num[i]] == 'Q')
				pass++;
		}
		if (pass == xnum)
		{
			pass = 1;
			ch = 27;
			break;
		}
		else
			pass = 0;

		//��;�˳�������
		if (ch == 27||ch=='q')
		{
			pass = 0;
			break;
		}
	}

	//�ж��ܷ������һ��
	system("cls");
	if (option != NULL)
	{
		if (option == 'n')
		{
			if (level == maps_num - 1)
			{
				system("cls");
				printf(" \n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t���Ѿ������һ���ˣ�");
				option = 'p';
				Sleep(1500);
				system("cls");
			}
		}
		return option;
	}

	//ͨ�ؽ���
	if (pass == 1)
	{
		printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t  ����!");
		printf("\n\n\t\t\t\t\t\t    �����ܼƲ�����%d", step_num);
		printf("\n\n\t\t\t\t\t  ѡ��(X)  ����(Q)  ��һ��(N)  ���˵�(M)  \n");
	}
	while (pass == 1)
	{
		option= getch();
		if (option == 'm'|| option == 'M')
			option = 'm';
		if (option == 'n'|| option == 'N')
		{
			if (level == maps_num - 1)
			{
				system("cls");
				printf(" \n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t���Ѿ������һ���ˣ�");
				option = 'p';
				Sleep(1500);
				system("cls");
			}
		}
		if (option == 'x' || option == 'q'  || option == 'n' || option == 'p' || option == 'm' || option == 'X' || option == 'Q' || option == 'N' || option == 'P' || option == 'M')
		{
			system("cls");
			return option;
		}
	}
	return option;
}