#include <stdio.h>

char tabuleiro[3][3];
void limparTabuleiro()
{
	int linha,coluna;
	for (linha=0;linha<3;linha=linha+1)
		for (coluna=0;coluna<3;coluna=coluna+1)
			tabuleiro[linha][coluna]=' ';
		
}

void MostrarTabuleiro()
{
	int linha;
	for (linha=0;linha<3;linha=linha+1) {
	printf("%c | %c | %c\n",tabuleiro[linha][0],tabuleiro[linha][1],tabuleiro[linha][2]);
	if (linha<2){
	printf("--- --- ----\n");
}
}
}

int PerguntarALinhaDoProximoPeao()
{
	int linha=0;
	printf("Qual a linha(0-2):");
	scanf("%d",&linha);
	return linha;
}

int PerguntarAColunaDoProximoPeao()
{ 
	int coluna=0;
	printf("Qual a coluna(0-2):");
	scanf("%d",&coluna);
	return coluna;
}

void PorPeaoNoTabuleiro(char peao, int linha, int coluna)
	{
	int tentativas = 0;
	while (tentativas < 3) {
		if (tabuleiro[linha][coluna]== ' '){
			tabuleiro[linha][coluna] = peao;
			return;
		} else {
			if (tentativas==0) {
				printf("Ocupado\n");
	} else if (tentativas == 1) {
		printf("Ocupado, ultima tentativa\n");
} else {
	printf("\nGame Over, lets try again!!\n");
	limparTabuleiro();
	return;
}
linha = PerguntarALinhaDoProximoPeao();
coluna = PerguntarAColunaDoProximoPeao();
tentativas++;
}
	}
			}
	 


int VerificarSeJogadavencedora(char peao)
{
	int linha;
	int coluna;
	for (linha=0;linha<3;linha++)
	{
		if ((tabuleiro[linha][0]==peao)
		&&(tabuleiro[linha][1]==peao)
		&&(tabuleiro[linha][2]==peao)){
			return 1;
		}
	}
		
	
	for (coluna=0;coluna<3;coluna++)
	{	
		if ((tabuleiro[0][coluna]==peao)
		&&(tabuleiro[1][coluna]==peao)
		&&(tabuleiro[2][coluna]==peao)) {
			return 1;
		}
	}
	
	
	{
		if((tabuleiro[0][0]
		&&tabuleiro[1][1]==peao
		&&tabuleiro[2][2]==peao)
		|| (tabuleiro[0][2]==peao
		&&tabuleiro[1][1]==peao
		&&tabuleiro[2][0]==peao)) {
			return 1 ;
		}
		return 0;
	}
}
			

		

int main ()
{
	limparTabuleiro();
	while (1)
	{
		int linha,coluna=0;
		printf("Jogador 0:\n");
		linha=PerguntarALinhaDoProximoPeao();
		coluna=PerguntarAColunaDoProximoPeao();
		PorPeaoNoTabuleiro('O',linha,coluna);
		MostrarTabuleiro();
		int ganhou=VerificarSeJogadavencedora('O'); 
		if (ganhou==1) {
			printf("Jogador O ganhou !!!!"); 
			
			
			break;
		}
		
				
			printf("Jogador X:\n");
		linha=PerguntarALinhaDoProximoPeao();
		coluna=PerguntarAColunaDoProximoPeao();
		PorPeaoNoTabuleiro('X',linha,coluna);
		MostrarTabuleiro();
		ganhou=VerificarSeJogadavencedora('X');
		if (ganhou==1) {
			printf("Jogador X ganhou !!!!\n");
			
			break;
				
	}
	}
	return 0;
}


