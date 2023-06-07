#include <iostream>

using namespace std;

int main (){
 // declarando  as variaveis //   
    string produto [4];
    int quantidade [4];
    double valor [4];
    int codigoPdt [4];
    int codigo;
    double Estoque_Atual;
    double Estoque_Total;
    double troco = 0;
    int quantidades;
    int reposicao;
    double total = 0;
	  double faturamento;
    double pagamento = 0;
    string escolha;	    

/// definindo a variavel produto ///  
    produto [0] = "Coca-Cola";
    produto [1] = "Fanta";
    produto [2] = "Pepsi";
    produto [3] = "Snicker";
       
/// definindo a variável quantidade dos produtos ///     
    quantidade [0] = 5;
    quantidade [1] = 5;
    quantidade [2] = 5;
    quantidade [3] = 5;
          
/// definindo a variável valor dos produtos ///    
    valor [0] = 7.50;
    valor [1] = 5.50;
    valor [2] = 4.40;
    valor [3] = 2.25; 
        
/// definindo a variável código dos produto para a escolha do usuário ///    
    codigoPdt [0] = 1;
    codigoPdt [1] = 2;
    codigoPdt [2] = 3;
    codigoPdt [3] = 4;  
    	    
    	    
/// Entrada de usuário ou administrador ///
    
    cout << "Bem-vindo(a)" << endl << endl << "Por favor, para comprar, aperte '1': " << endl;
    cin >> escolha;
  	    
/// entrada de dados para o usuário ///  

/// laço que engloba todo o processo do usuário e do administrador ///

while(escolha != "9"){ 
/// laço que engloba somente o processo de escolha e pagamento do usuário ///
  
  while (escolha == "1"){ 
    cout << "produtos para o consumo: " << endl << endl <<
   
           "PRODUTOS     VALOR     CODIGO     Quantidade" << endl << endl << 
           "Coca-Cola   R$ 7.50     [1]           " << quantidade [0] << endl << endl <<
           "Fanta       R$ 5.50     [2]           " << quantidade [1] << endl << endl << 
           "Pepsi       R$ 4.40     [3]           " << quantidade [2] << endl << endl << 
           "Snicker     R$ 2.25     [4]           " << quantidade [3] << endl << endl << endl;
             
           
/// usando um laço de repetição para saber se ele desejará efetuar mais compras ///          
            
    cout << "Informe o código do produto: " << endl << endl;        
    cin >> codigo;   
    
    /// estrutura da Coca-Cola ///
    
    if (codigo == 1){ 
  	
   	  cout << "Voce selecionou a " << produto [0] << endl << endl;
   	     
   	  cout << "Quantas unidades voce deseja: " << endl << endl;
      cin >> quantidades;
	
	 	
    if (quantidades <= quantidade [0]){
      total = (valor [0] * quantidades);
      
      quantidade[0] = quantidade[0] - quantidades;
            
      cout << "Total do pedido R$: " << total << endl << endl; 
                           
		  cout << "Informe o valor para o pagamento: " << endl << endl;
      cin >> pagamento;

	  if (pagamento >= total) {
			troco = pagamento - total;
			
      cout << "Seu troco e R$ " << troco << endl << endl;
	                          }
	    
	  else  {
		  
      cout << "Saldo insuficiente!!!" << endl << endl;
			
			cout << "Informe o valor correto para o pagamento: ";
			cin >> pagamento;
			
			troco = pagamento - total;
			cout << "Seu troco e R$ " << troco << endl << endl;
			
	        }
                                     }
         
    else {
      cout << "Quantidade Inválida" << endl << endl;	
         }
                  }
    
    /// zerando o valor total para não ficar acumulando na memória ///
    
    total = 0; 
		
    /// estrutura da Fanta ///
	  
    if (codigo == 2){ 
   	  cout << "Voce selecionou a " << produto [1] << endl << endl;
   	     
   	  cout << "Quantas unidades voce deseja: " << endl << endl;
   	  cin >> quantidades;
	
	 	
    if (quantidades <= quantidade [1]){
      
      total = (valor [1] * quantidades);
      
      quantidade[1] = quantidade[1] - quantidades;
            
      cout << "Total do pedido R$: " << total << endl << endl; 
                           
		  cout << "Informe o valor para o pagamento: " << endl << endl;
		  cin >> pagamento;

	  if (pagamento >= total) {
			troco = pagamento - total;
			cout << "Seu troco e R$ " << troco << endl << endl;
	                          }
	    
	  else  {
		  cout << "Saldo insuficiente!!!" << endl << endl;
			
		  cout << "Informe o valor correto para o pagamento: ";
		  cin >> pagamento;
			
		  troco = pagamento - total;
		  cout << "Seu troco e R$ " << troco << endl << endl;
			
	        }
                                    }   
         
    else {
      cout << "Quantidade Inválida" << endl << endl;	
			   }  
                   }           
    /// zerando o valor total para não ficar acumulando na memória ///
    
    total = 0; 
		
    /// estrutura da Pepsi ///
    
    if (codigo == 3){ 
		  cout << "Voce selecionou a " << produto [2] << endl << endl;
   	     
   	  cout << "Quantas unidades voce deseja: " << endl << endl;
   	  cin >> quantidades;
	
	 	if (quantidades <= quantidade [2]){
      total = (valor [2] * quantidades);
      quantidade[2] = quantidade[2] - quantidades;
              
      cout << "Total do pedido R$: " << total << endl << endl; 
                           
		  cout << "Informe o valor para o pagamento: " << endl << endl;
		  cin >> pagamento;

	  if (pagamento >= total) {
		  troco = pagamento - total;
			cout << "Seu troco e R$ " << troco << endl << endl;
	                          }
	    
    else {
	     cout << "Saldo insuficiente!!!" << endl << endl;
			
	     cout << "Informe o valor correto para o pagamento: ";
	     cin >> pagamento;
			
	     troco = pagamento - total;
	     cout << "Seu troco e R$ " << troco << endl << endl;
			
	       }
                                     } 
         
    else {
      cout << "Quantidade Inválida" << endl << endl;	
			   }  
                      }              
    /// zerando o valor total para não ficar acumulando na memória ///
    
    total = 0; 
		
    /// estrutura do Snicker ///
	  
    if  (codigo == 4){ 
		  cout << "Voce selecionou a " << produto [3] << endl << endl;
   	     
   	  cout << "Quantas unidades voce deseja: " << endl << endl;
   	  cin >> quantidades;
	
	 	
    if (quantidades <= quantidade [3]){
      total = (valor [3] * quantidades);
      quantidade[3] = quantidade[3] - quantidades;
    
      cout << "Total do pedido R$: " << total << endl << endl; 
                           
		  cout << "Informe o valor para o pagamento: " << endl << endl;
		  cin >> pagamento;

	 if (pagamento >= total) {
			troco = pagamento - total;
			cout << "Seu troco e R$ " << troco << endl << endl;
	                         }
	    
    else  {
		  cout << "Saldo insuficiente!!!" << endl << endl;
			
		  cout << "Informe o valor correto para o pagamento: ";
		  cin >> pagamento;
			
		  troco = pagamento - total;
		  cout << "Seu troco e R$ " << troco << endl << endl;
			
	        }
                                     } 
         
    else {
      cout << "Quantidade Inválida" << endl << endl;	
			   }  
                      }
		  cout << "Obrigado pela preferência! " << endl << endl;    
			
      cout << "Para comprar, aperte '1':  " << endl << endl;
	    cin >> escolha; 
	        
                        } 
  /// laço que engloba o processo do administrador ///
  
  while (escolha == "00"){ 

    /// estrutura de cálculo do faturamento ///
    
    Estoque_Atual = (quantidade [0] * 7.50) + (quantidade [1] * 5.50) + ( 
    quantidade [2] * 4.40) + (quantidade [3] * 2.25);
    
    Estoque_Total = (5 * 7.50) + (5 * 5.50) + (5 * 4.40) + (5 * 2.25);
    faturamento = Estoque_Total - Estoque_Atual;
    
      cout << "Estoque: " << endl << endl <<
      "PRODUTO    VALOR  CÓDIGO    QUANTIDADE" << endl << endl << 
      "Coca-Cola  7.50    [1]          "  << quantidade [0] << endl << endl <<
      "Fanta      5.50    [2]          "  << quantidade [1] << endl << endl <<
      "Pepsi      4.40    [3]          "  << quantidade [2] << endl << endl <<
      "Snicker    2.25    [4]          "  << quantidade [3] << endl << endl <<
      "Faturamento até o momento:      R$"  << faturamento << endl << endl <<
      "Quanto ainda é possível faturar:   R$"  << Estoque_Atual <<  endl << endl;
      
      cout << "Qual produto deseja repor?: " << endl << endl;
      cin >> codigo;

    /// estrutura de reposição da Coca-Cola ///
    
    if (codigo == 1 and quantidade [0] < 5){
      cout << "Qual a quantidade que deseja repor?: " << endl << endl;
      cin >> reposicao;

      quantidade [0] = quantidade [0] + reposicao;

                                           }       
      
      else if (quantidade [0] + reposicao == 5){
        quantidade [0] = quantidade [0] - reposicao;
          
                                               }

    /// estrutura de reposição da Fanta ///
    
    if (codigo == 2 and quantidade [1] < 5){
      cout << "Qual a quantidade que deseja repor?: " << endl << endl;
      cin >> reposicao;

      quantidade [1] = quantidade [1] + reposicao;
                                           }
    
      /// estrutura de correção de estoque caso o administrador reponha mais que o necessário ///
      
      else if (quantidade [1] + reposicao == 5){
        quantidade [1] = quantidade [1] - reposicao;
          
                                               } 

    /// estrutura de reposição da Pepsi ///
    
    if (codigo == 3 and quantidade [2] < 5) {
      cout << "Qual a quantidade que deseja repor?: " << endl << endl;
      cin >> reposicao;

      quantidade [2] = quantidade [2] + reposicao;
                                            }

    /// estrutura de correção de estoque caso o administrador reponha mais que o necessário ///
    
      else if (quantidade [2] + reposicao == 5){
        quantidade [2] = quantidade [2] - reposicao;
                                                }

    /// estrutura de reposição Snicker ///
    
    if (codigo == 4 and quantidade [3] < 5){
      cout << "Qual a quantidade que deseja repor?: " << endl << endl;
      cin >> reposicao;
      
      quantidade [3] = quantidade [3] + reposicao;
                                           }

    /// estrutura de correção de estoque caso o administrador reponha mais que o necessário ///
    
      else if (quantidade [3] + reposicao == 5){
        quantidade [3] = quantidade [3] - reposicao;  
                                              }

    /// estrutura de verificação para quando o estoque estiver cheio ///
    
   if (quantidade [0] == 5 and quantidade [1] == 5 and quantidade [2] == 5 and quantidade [3] == 5){

      cout << "Estoque totalmente cheio. Aperte '9' para desligar a máquina ou aperte '1' para retornar ao painel de consumo" << endl;
      cin >> escolha;
                        }
       
    else {

     cout << "Estoque do produto ou estoque total incompleto. Preencha todo o estoque antes de desligar a máquina." << endl << endl;
         }
                         }   

  }
  
  return 0;    
}
