#include <stdio.h>
#include <stdlib.h>
#include <time.h>

	static int spaces1;
	static int spaces2;
	static int spaces3;
	static int spaces4;
	static int spaces5;
	static int spaces6;
	static int spaces7;
	static int spaces8;
	static int spaces9;
	static int Player1Score = 0;
	static int Player2Score = 0;
	char A = ' ';
	char B = ' ';
	char C = ' ';
	char D = ' ';
	char E = ' ';
	char F = ' ';
	char G = ' ';
	char H = ' ';
	char I = ' ';
int Start()
{
	printf("     |     |     \n");
	printf("     |     |     \n");
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("     |     |     \n");
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("     |     |     \n");
	printf("     |     |     \n");
	printf("                 \n");
	printf("                 \n");
	printf("     |     |     \n");
	printf("  1  |  2  |  3  \n");
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  4  |  5  |  6  \n");
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  7  |  8  |  9  \n");
	printf("     |     |     \n");
	printf("                 \n");
	printf("please dont input letters\n");
}
    static void Turn1()
    {
	printf("Input X Position: ");
	scanf("%d", &spaces1);
	if(spaces1 == 1 && A == ' ')
	{
    A = 'X';
    }
	else if(spaces1 == 2 && B == ' ')
	{
    B = 'X';
	}
	else if(spaces1 == 3 && C == ' ')
	{
    C = 'X';
	}
	else if(spaces1 == 4 && D == ' ')
	{
    D = 'X';
	}
	else if(spaces1 == 5 && E == ' ')
	{
    E = 'X';
    }
	else if(spaces1 == 6 && F == ' ')
	{
    F = 'X';
	}
	else if(spaces1 == 7 && G == ' ')
	{
    G = 'X';
	}
	else if(spaces1 == 8 && H == ' ')
	{
    H = 'X';
	}
	else if(spaces1 == 9 && I == ' ')
	{
    I = 'X';
	} else { printf("Invalid Input\n"); return Turn1();}
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", A, B, C);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", D, E, F);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", G, H, I);
	printf("     |     |     \n");
	printf("                 \n");
    }
	static void Turn2()
	{
	printf("Input O Position: ");
	scanf("%d", &spaces2);
	if(spaces2 == 1 && A == ' ')
	{
    A = 'O';
    }
	else if(spaces2 == 2 && B == ' ')
	{
    B = 'O';
	}
	else if(spaces2 == 3 && C == ' ')
	{
    C = 'O';
	}
	else if(spaces2 == 4 && D == ' ')
	{
    D = 'O';
	}
	else if(spaces2 == 5 && E == ' ')
	{
    E = 'O';
    }
	else if(spaces2 == 6 && F == ' ')
	{
    F = 'O';
	}
	else if(spaces2 == 7 && G == ' ')
	{
    G = 'O';
	}
	else if(spaces2 == 8 && H == ' ')
	{
    H = 'O';
	}
	else if(spaces2 == 9 && I == ' ')
	{
    I = 'O';
	} else { printf("Invalid Input\n"); return Turn2();}
	
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", A, B, C);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", D, E, F);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", G, H, I);
	printf("     |     |     \n");
	printf("                 \n");
    }
	static void Turn3()
	{
	printf("Input X Position: ");
	scanf("%d", &spaces3);
	if(spaces3 == 1 && A == ' ')
	{
    A = 'X';
    }
	else if(spaces3 == 2 && B == ' ')
	{
    B = 'X';
	}
	else if(spaces3 == 3 && C == ' ')
	{
    C = 'X';
	}
	else if(spaces3 == 4 && D == ' ')
	{
    D = 'X';
	}
	else if(spaces3 == 5 && E == ' ')
	{
    E = 'X';
    }
	else if(spaces3 == 6 && F == ' ')
	{
    F = 'X';
	}
	else if(spaces3 == 7 && G == ' ')
	{
    G = 'X';
	}
	else if(spaces3 == 8 && H == ' ')
	{
    H = 'X';
	}
	else if(spaces3 == 9 && I == ' ')
	{
    I = 'X';
	} else { printf("Invalid Input\n"); return Turn3();}
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", A, B, C);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", D, E, F);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", G, H, I);
	printf("     |     |     \n");
	printf("                 \n");
    }
    
    
    static void Turn4()
	{
	printf("Input O Position: ");
	scanf("%d", &spaces4);
	if(spaces4 == 1 && A == ' ')
	{
    A = 'O';
    }
	else if(spaces4 == 2 && B == ' ')
	{
    B = 'O';
	}
	else if(spaces4 == 3 && C == ' ')
	{
    C = 'O';
	}
	else if(spaces4 == 4 && D == ' ')
	{
    D = 'O';
	}
	else if(spaces4 == 5 && E == ' ')
	{
    E = 'O';
    }
	else if(spaces4 == 6 && F == ' ')
	{
    F = 'O';
	}
	else if(spaces4 == 7 && G == ' ')
	{
    G = 'O';
	}
	else if(spaces4 == 8 && H == ' ')
	{
    H = 'O';
	}
	else if(spaces4 == 9 && I == ' ')
	{
    I = 'O';
	} else { printf("Invalid Input\n"); return Turn4();}
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", A, B, C);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", D, E, F);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", G, H, I);
	printf("     |     |     \n");
	printf("                 \n");
    }
    
    
    
    static void Turn5()
	{
	printf("Input X Position: ");
	scanf("%d", &spaces5);
	if(spaces5 == 1 && A == ' ')
	{
    A = 'X';
    }
	else if(spaces5 == 2 && B == ' ')
	{
    B = 'X';
	}
	else if(spaces5 == 3 && C == ' ')
	{
    C = 'X';
	}
	else if(spaces5 == 4 && D == ' ')
	{
    D = 'X';
	}
	else if(spaces5 == 5 && E == ' ')
	{
    E = 'X';
    }
	else if(spaces5 == 6 && F == ' ')
	{
    F = 'X';
	}
	else if(spaces5 == 7 && G == ' ')
	{
    G = 'X';
	}
	else if(spaces5 == 8 && H == ' ')
	{
    H = 'X';
	}
	else if(spaces5 == 9 && I == ' ')
	{
    I = 'X';
	} else { printf("Invalid Input\n"); return Turn5();}
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", A, B, C);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", D, E, F);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", G, H, I);
	printf("     |     |     \n");
	printf("                 \n");
    }
    
    
    static void Turn6()
	{
	printf("Input O Position: ");
	scanf("%d", &spaces6);
	if(spaces6 == 1 && A == ' ')
	{
    A = 'O';
    }
	else if(spaces6 == 2 && B == ' ')
	{
    B = 'O';
	}
	else if(spaces6 == 3 && C == ' ')
	{
    C = 'O';
	}
	else if(spaces6 == 4 && D == ' ')
	{
    D = 'O';
	}
	else if(spaces6 == 5 && E == ' ')
	{
    E = 'O';
    }
	else if(spaces6 == 6 && F == ' ')
	{
    F = 'O';
	}
	else if(spaces6 == 7 && G == ' ')
	{
    G = 'O';
	}
	else if(spaces6 == 8 && H == ' ')
	{
    H = 'O';
	}
	else if(spaces6 == 9 && I == ' ')
	{
    I = 'O';
	} else { printf("Invalid Input\n"); return Turn6();}
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", A, B, C);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", D, E, F);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", G, H, I);
	printf("     |     |     \n");
	printf("                 \n");
    }
    
    
    
    static void Turn7()
	{
	printf("Input X Position: ");
	scanf("%d", &spaces7);
	if(spaces7 == 1 && A == ' ')
	{
    A = 'X';
    }
	else if(spaces7 == 2 && B == ' ')
	{
    B = 'X';
	}
	else if(spaces7 == 3 && C == ' ')
	{
    C = 'X';
	}
	else if(spaces7 == 4 && D == ' ')
	{
    D = 'X';
	}
	else if(spaces7 == 5 && E == ' ')
	{
    E = 'X';
    }
	else if(spaces7 == 6 && F == ' ')
	{
    F = 'X';
	}
	else if(spaces7 == 7 && G == ' ')
	{
    G = 'X';
	}
	else if(spaces7 == 8 && H == ' ')
	{
    H = 'X';
	}
	else if(spaces7 == 9 && I == ' ')
	{
    I = 'X';
	} else { printf("Invalid Input\n"); return Turn7();}
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", A, B, C);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", D, E, F);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", G, H, I);
	printf("     |     |     \n");
	printf("                 \n");
    }
    
    
    static void Turn8()
	{
	printf("Input O Position: ");
	scanf("%d", &spaces8);
	if(spaces8 == 1 && A == ' ')
	{
    A = 'O';
    }
	else if(spaces8 == 2 && B == ' ')
	{
    B = 'O';
	}
	else if(spaces8 == 3 && C == ' ')
	{
    C = 'O';
	}
	else if(spaces8 == 4 && D == ' ')
	{
    D = 'O';
	}
	else if(spaces8 == 5 && E == ' ')
	{
    E = 'O';
    }
	else if(spaces8 == 6 && F == ' ')
	{
    F = 'O';
	}
	else if(spaces8 == 7 && G == ' ')
	{
    G = 'O';
	}
	else if(spaces8 == 8 && H == ' ')
	{
    H = 'O';
	}
	else if(spaces8 == 9 && I == ' ')
	{
    I = 'O';
	} else { printf("Invalid Input\n"); return Turn8();}
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", A, B, C);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", D, E, F);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", G, H, I);
	printf("     |     |     \n");
	printf("                 \n");
    }
    
    
    
    static void Turn9()
	{
	printf("Input X Position: ");
	scanf("%d", &spaces9);
	if(spaces9 == 1 && A == ' ')
	{
    A = 'X';
    }
	else if(spaces9 == 2 && B == ' ')
	{
    B = 'X';
	}
	else if(spaces9 == 3 && C == ' ')
	{
    C = 'X';
	}
	else if(spaces9 == 4 && D == ' ')
	{
    D = 'X';
	}
	else if(spaces9 == 5 && E == ' ')
	{
    E = 'X';
    }
	else if(spaces9 == 6 && F == ' ')
	{
    F = 'X';
	}
	else if(spaces9 == 7 && G == ' ')
	{
    G = 'X';
	}
	else if(spaces9 == 8 && H == ' ')
	{
    H = 'X';
	}
	else if(spaces9 == 9 && I == ' ')
	{
    I = 'X';
	}
	else { printf("Invalid Input\n"); return Turn9(); }
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", A, B, C);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", D, E, F);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", G, H, I);
	printf("     |     |     \n");
	printf("                 \n");
    }
    
    
    WinCheck()
	{
		if(A == 'X' && B == 'X' && C == 'X')
		{
			Player1Score++;
			printf("Player 1 Wins %i | %i / \n", Player1Score, Player2Score);
			A = ' ';
	        B = ' ';
	        C = ' ';
	        D = ' ';
	        E = ' ';
	        F = ' ';
	        G = ' ';
	        H = ' ';
	        I = ' ';
			return 0;
		}
		if(A == 'O' && B == 'O' && C == 'O')
		{
			Player2Score++;
			printf("Player 2 Wins %i | %i / \n", Player1Score, Player2Score);
			A = ' ';
	        B = ' ';
	        C = ' ';
	        D = ' ';
	        E = ' ';
	        F = ' ';
	        G = ' ';
	        H = ' ';
	        I = ' ';
			return 0;
		}
		if(D == 'X' && E == 'X' && F == 'X')
		{
			Player1Score++;
			printf("Player 1 Wins %i | %i / \n", Player1Score, Player2Score);
			A = ' ';
	        B = ' ';
	        C = ' ';
	        D = ' ';
	        E = ' ';
	        F = ' ';
	        G = ' ';
	        H = ' ';
	        I = ' ';
			return 0;
		}
		if(D == 'O' && E == 'O' && F == 'O')
		{
			Player2Score++;
			printf("Player 2 Wins %i | %i / \n", Player1Score, Player2Score);
			A = ' ';
	        B = ' ';
	        C = ' ';
	        D = ' ';
	        E = ' ';
	        F = ' ';
	        G = ' ';
	        H = ' ';
	        I = ' ';
			return 0;
		}
		if(G == 'X' && H == 'X' && I == 'X')
		{
			Player1Score++;
			printf("Player 1 Wins %i | %i / \n", Player1Score, Player2Score);
			A = ' ';
	        B = ' ';
	        C = ' ';
	        D = ' ';
	        E = ' ';
	        F = ' ';
	        G = ' ';
	        H = ' ';
	        I = ' ';
			return 0;
		}
		if(G == 'O' && H == 'O' && I == 'O')
		{
			Player2Score++;
			printf("Player 2 Wins %i | %i / \n", Player1Score, Player2Score);
			A = ' ';
	        B = ' ';
	        C = ' ';
	        D = ' ';
	        E = ' ';
	        F = ' ';
	        G = ' ';
	        H = ' ';
	        I = ' ';
			return 0;
		}
		if(A == 'X' && D == 'X' && G == 'X')
		{
			Player1Score++;
			printf("Player 1 Wins %i | %i / \n", Player1Score, Player2Score);
			A = ' ';
	        B = ' ';
	        C = ' ';
	        D = ' ';
	        E = ' ';
	        F = ' ';
	        G = ' ';
	        H = ' ';
	        I = ' ';
			return 0;
		}
		if(A == 'O' && D == 'O' && G == 'O')
		{
			Player2Score++;
			printf("Player 2 Wins %i | %i / \n", Player1Score, Player2Score);
			A = ' ';
	        B = ' ';
	        C = ' ';
	        D = ' ';
	        E = ' ';
	        F = ' ';
	        G = ' ';
	        H = ' ';
	        I = ' ';
			return 0;
		}
		if(B == 'X' && E == 'X' && H == 'X')
		{
			Player1Score++;
			printf("Player 1 Wins %i | %i / \n", Player1Score, Player2Score);
			A = ' ';
	        B = ' ';
	        C = ' ';
	        D = ' ';
	        E = ' ';
	        F = ' ';
	        G = ' ';
	        H = ' ';
	        I = ' ';
			return 0;
		}
		if(B == 'O' && E == 'O' && H == 'O')
		{
			Player2Score++;
			printf("Player 2 Wins %i | %i / \n", Player1Score, Player2Score);
			A = ' ';
	        B = ' ';
	        C = ' ';
	        D = ' ';
	        E = ' ';
	        F = ' ';
	        G = ' ';
	        H = ' ';
	        I = ' ';
		}
		if(C == 'X' && F == 'X' && I == 'X')
		{
			Player1Score++;
			printf("Player 1 Wins %i | %i / \n", Player1Score, Player2Score);
			A = ' ';
	        B = ' ';
	        C = ' ';
	        D = ' ';
	        E = ' ';
	        F = ' ';
	        G = ' ';
	        H = ' ';
	        I = ' ';
			return 0;
		}
		if(C == 'O' && F == 'O' && I == 'O')
		{
			Player2Score++;
			printf("Player 2 Wins %i | %i / \n", Player1Score, Player2Score);
			A = ' ';
	        B = ' ';
	        C = ' ';
	        D = ' ';
	        E = ' ';
	        F = ' ';
	        G = ' ';
	        H = ' ';
	        I = ' ';
			return 0;
		}
		if(C == 'X' && E == 'X' && G == 'X')
		{
			Player1Score++;
			printf("Player 1 Wins %i | %i / \n", Player1Score, Player2Score);
			A = ' ';
	        B = ' ';
	        C = ' ';
	        D = ' ';
	        E = ' ';
	        F = ' ';
	        G = ' ';
	        H = ' ';
	        I = ' ';
			return 0;
		}
		if(C == 'O' && E == 'O' && G == 'O')
		{
			Player2Score++;
			printf("Player 2 Wins %i | %i / \n", Player1Score, Player2Score);
			A = ' ';
	        B = ' ';
	        C = ' ';
	        D = ' ';
	        E = ' ';
	        F = ' ';
	        G = ' ';
	        H = ' ';
			I = ' ';
			return 0;
		}
		if(A == 'X' && E == 'X' && I == 'X')
		{
			Player1Score++;
			printf("Player 1 Wins %i | %i / \n", Player1Score, Player2Score);
			A = ' ';
	        B = ' ';
	        C = ' ';
	        D = ' ';
	        E = ' ';
	        F = ' ';
	        G = ' ';
	        H = ' ';
	        I = ' ';
			return 0;
		}
		if(A == 'O' && E == 'O' && I == 'O')
		{
			Player2Score++;
			printf("Player 2 Wins %i | %i / \n", Player1Score, Player2Score);
			A = ' ';
	        B = ' ';
	        C = ' ';
	        D = ' ';
	        E = ' ';
	        F = ' ';
	        G = ' ';
	        H = ' ';
	        I = ' ';
			return 0;
		} 
	}
int main()
{
	Start();
	Turn1();
	Turn2();
	Turn3();
	Turn4();
	Turn5();
	WinCheck();
	Turn6();
	WinCheck();
	Turn7();
	WinCheck();
	Turn8();
	WinCheck();
	Turn9();
	WinCheck();
}
