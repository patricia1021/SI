package br.com.unb;


import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;

public class Relat�rio {
	File arquivo = new File ("Relat�rio_SI.txt");

	// Escreve no arquivo
	FileWriter relatorio = new FileWriter (arquivo, true);

	BufferedWriter r = new BufferedWriter( relatorio );
	{	
	r.write("Relat�rio");		
	r.newLine ( );
	r.write("Data: " + new Calendar.DATE());
	r.newLine( );

	r.write ("O per�odo de refer�ncia utilizado � igual a 1.");
	r.newLine();

	r.write("Estoque m�nimo: " + estoqueMinimo);
	r.newLine( );
	
	if (estoqueMinimo > pontoRessuprimento){

	r.write("Voc� n�o precisa renovar o estoque!");
	r.newLine( );
	}
	
	else

	r.write("Voc� deve renovar o estoque!");
	r.newLine( );

	
	r.close( );
	relatorio.close( );

}
}