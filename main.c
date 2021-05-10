	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
	
	
//verifica se ano é bissexto 	
	char ehbissexto(ano){
			char bi='n';
			if(ano%100==0){
			ano=ano/100;	
			}
			if(ano%4==0){
					bi='s';
				}
		return bi;	
	}

//verifica dia da pascoa a partir de um ano	
	int  datapascoadia(ano){
		int g=0,c=0,x=0,z=0,e=0,n=0,dom=0,dia=0,mes=0;
		g=(ano%19)+1;
		c=(ano/100)+1;
		x=((3*c)/4)-12;
		z=(((8*c)+5)/25)-5;
		e=((11*g) + 20+z - x)%30;
		if((e==25) && (g>11) || (e==24)){
			e=e+1;
		}
		n=44-e;
		if(n<21){
			n=n+30;
		}
		dom=((5*ano)/4)-(x + 10);
	    n = (n + 7) - (( dom + n) % 7);
		if(n>31){
			dia=n-31;
			mes=04;	
		}
		else{
		dia=n;
		mes=03;
			}
			
		return dia;
	}
	
//verifica mes da pascoa a partir de um ano	
	int  datapascoames(ano){
	int a,b,c,d,e,x,y,dia,mes;
	 
	 if((ano>=1582) && (ano<=1699)){
	 	x=22;
	 	y=2;
	 } 
	 
	  if((ano>=1700) && (ano<=1799)){
	 	x=23;
	 	y=3;
	 } 
	 
	   if((ano>=1800) && (ano<=1899)){
	 	x=23;
	 	y=4;
	 } 
	 
	  if((ano>=1900) && (ano<=2099)	){
	 	x=24;
	 	y=5;
	 } 
	 
	  if((ano>=2100) && (ano<=2199)	){
	 	x=24;
	 	y=6;
	 } 
	
	if((ano>=2200) && (ano<=2299)	){
	 	x=25;
	 	y=7;
	 }
			
	 a = ano % 19;
	 b = ano % 4;
	 c = ano % 7;
	 d = ((19*a)+x)% 30;
	 e = ((2*b)+(4*c)+(6*d)+y) % 7;
	 
	 if(d+e<10){
	 	dia= d+e+22;
	 	mes=03;
	 }
	 else
	 {
	 	dia= d+e-9;
	 	mes=04;
	 }  
	 
	return mes;
			
	}

//verifica qual dia da semana cai 1º de janeiro em um determinado ano, a partir do mes e dia
	
	int dejan (s,dia,mes){
		int diasemana=6;
		if(s=='s'){	
		 
		 
				while(mes>0){
				if(dia!=1){
				dia --;   
				
				if((diasemana>0)&&(diasemana<=6)){
				diasemana--;
			
				}
				else{
					diasemana=6;
				}
					
			}
			else
			{	
				mes --;	
				if(mes<=0){
					break;
				}
				
				if((mes!=2)&&(mes!=1)){
					dia=31;	
					 if(diasemana<=0){
			       	diasemana=6;
				   }
				    else
			        diasemana--;
				}
				else
				if(mes==2){
			       dia=29;	
			        if(diasemana<=0){
			       	diasemana=6;
				   }
				    else
			      diasemana--;
				}
				else
					 if(mes==1){
			       dia=31;	
			       
			       if(diasemana<=0){
			       	diasemana=6;
				   }
				   else
			      diasemana--;
				}
		}
		
			
				}
				
		}
			
		else
		{
			diasemana=6;
			
			while(mes>0){
				if(dia!=1){
				dia --;   
				
				if((diasemana>0)&&(diasemana<=6)){
				diasemana--;
			
				}
				else{
					diasemana=6;
				}
					
			}
			else
			{	
				mes --;	
				if(mes==0){
					break;
				}
				
				if((mes!=2)&&(mes!=1)){
					dia=31;	
			         if(diasemana<=0){
			       	diasemana=6;
				   }
				   else
			      diasemana--;
				}
				else
				if(mes==2){
			       dia=28;	
			      if(diasemana<=0){
			       	diasemana=6;
				   }
				   else
			      diasemana--;
				}
				else
					 if(mes==1){
			       dia=31;	
			       if(diasemana<=0){
			       	diasemana=6;
				   }
				   else
			      diasemana--;
				}
				
				
		}
		
	
			
				}
			}
			
	
		
		if(diasemana==6)
		diasemana=0;
		else
			if(diasemana==0)
		diasemana=1;
		else
			if(diasemana==1)
		diasemana=2;
		else
			if(diasemana==2)
		diasemana=3;
		else
			if(diasemana==3)
		diasemana=4;
		else
			if(diasemana==4)
		diasemana=5;
		else
			if(diasemana==5)
		diasemana=6;
		
		
		
		return diasemana  ;
		
		
		
	}
	
	
//retorna o valor do numero de dias do mes	
	
	int nDias (int nMes, int ano) 
	{ 
	   
	    if (nMes == 0) 
	        return (31); 
	  
	  
	    if (nMes == 1) 
	    { 
	       
	        if (ano % 400 == 0 || 
	                (ano % 4 == 0 && ano % 100 != 0)) 
	            return (29); 
	        else
	            return (28); 
	    } 
	  
	   
	    if (nMes == 2) 
	        return (31); 
	  
	    
	    if (nMes == 3) 
	        return (30); 
	  
	  
	    if (nMes == 4) 
	        return (31); 
	  
	 
	    if (nMes == 5) 
	        return (30); 
	  
	    
	    if (nMes == 6) 
	        return (31); 
	  
	  
	    if (nMes == 7) 
	        return (31); 
	  
	    
	    if (nMes == 8) 
	        return (30); 
	  
	    
	    if (nMes == 9) 
	        return (31); 
	  
	    
	    if (nMes == 10) 
	        return (30); 
	  
	  
	    if (nMes == 11) 
	        return (31); 
	} 
	
//monta o calendario com todas as informações
	
	int  montacalendario(int ano, int diafirstjan){
		int i,j, dia, k, ktwo=0;
		char *mes[] = {"Janeiro","Fevereiro","Março","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};
  
    	
	printf("Calendario do ano %d\n",ano);
	printf("|-----------------------------|\n");
  
    for ( i = 0; i < 12; i++) 
    { 
         dia = nDias (i, ano); 
  		
		 if((mes[i]=="Janeiro" )|| (mes[i]=="Outubro"))
        printf ("|%s                      |\n",mes[i]); 
        else if((mes[i]=="Março" )|| (mes[i]=="Abril")|| (mes[i]=="Junho") || (mes[i]=="Julho"))
          printf ("|%s                        |\n",mes[i]); 
         else if((mes[i]=="Novembro" )|| (mes[i]=="Setembro") || (mes[i]=="Dezembro"))
           printf ("|%s                     |\n",mes[i]); 
          else if(mes[i]=="Agosto" )
           printf ("|%s                       |\n",mes[i]); 
            else if(mes[i]=="Maio" )
           printf ("|%s                         |\n",mes[i]); 
             else if(mes[i]=="Dezembro" )
           printf ("|%s                         |\n",mes[i]); 
        	else
        	 printf ("|%s                    |\n",mes[i]); 
        	 
	  	printf("|-----------------------------|\n");
	        printf("| dom seg ter qua qui sex sab |\n"); 
	        
	         printf("| "); 

        for (k = 0; k < diafirstjan; k++)
         	printf(" -- ");

       for ( j = 1; j <= 42-diafirstjan; j++) 
        { 
               if(j<=dia)	
			    printf(" %02d ",j);  
			    else if((j>=dia) && (j<=42-diafirstjan)){
			      printf(" -- "); 
			   
			  }
  			
  			if(dia==j-1)
  			ktwo=k;   

            if ( ++k > 6) 
            { 
          
                k = 0; 
                 // printf("\n"); 
                printf("| \n"); 
                
                if(j>=36)
	                printf("|");
					else 
					printf("| ");
            } 	 
        
        } 
  
        if (k) 
            printf("|\n"); 
            
        diafirstjan  = ktwo; 
        if(i!=11)
        printf("-----------------------------|\n");
        else
        printf("-----------------------------|");
    } 
  
	return 0;
		
	}
	
	int main() {
		setlocale(LC_ALL, "Portuguese");
		int ano, diafirstjan;
	
		scanf("%d", &ano);
	    
	    diafirstjan=dejan(ehbissexto(ano),datapascoadia(ano),datapascoames(ano));
	    
	    montacalendario(ano,diafirstjan);
			
		return 0;
	}
