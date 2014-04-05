package br.com.unb;


import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;

public class Relatório {
	File arquivo = new File ("Relatório_SI.txt");

	// Escreve no arquivo
	FileWriter relatorio = new FileWriter (arquivo, true);

	BufferedWriter r = new BufferedWriter( relatorio );
	{	
	r.write("Relatório");		
	r.newLine ( );
	r.write("Data: " + new Calendar.DATE());
	r.newLine( );

	r.write ("O período de referência utilizado é igual a 1.");
	r.newLine();

	r.write("Estoque mínimo: " + estoqueMinimo);
	r.newLine( );
	
	if (estoqueMinimo > pontoRessuprimento){

	r.write("Você não precisa renovar o estoque!");
	r.newLine( );
	}
	
	else

	r.write("Você deve renovar o estoque!");
	r.newLine( );

	
	r.close( );
	relatorio.close( );

}
}