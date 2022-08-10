# docker_ambiente_c
Ambiente base para desenvolvimento de aplicações utilizando a linguagem C.

## Feito com foco no aluno de tecnologia.

A criação de ambientes configurados faz com que o aluno não perca tempo em configurações. Desta forma ele mantêm a motivação e foca somente no estudo da tecnologia.

## Benefícios

Com o docker, você não precisa instalar várias tecnologias em sua máquina. Um aluno geralmente instala n linguagem de programação, n stacks, n bancos de dados. Desta forma ocorre muitos conflitos. A máquina fica pesada, às vezes trava, dias perdendo com configuração, tempo. O aluno pode até chegar a desistir do curso.

Utilizando estas imagens, basta apénas ter o docker e o docker-compose instalado em sua máquina. Com poucos comandos seu ambiente esta pronto para uso!

# GCC - Ambiente C

Neste ambiente o aluno da linguagem C, não terá que instalar nada e nem fazer vários procedimentos em sua máquina para testar sua aplicação. 

## Como usar:

1 - No seu terminal vá em uma pasta qualquer  
2 - Clone este repositório com o comando -> git clone https://github.com/silvadias/rode_c_pelo_gcc_docker.git  
3 - Entre na pasta com o comando ->  cd rode_c_pelo_gcc_docker  
4 - Verifique se o docker esta funcionando com o comando -> docker-compose up  
5 - Verifique a saida correta:  
5.1 - saida:  

    Creating network "gcc_network" with driver "bridge"
    Creating gcc_silvadias ... done
    Attaching to gcc_silvadias
    gcc_silvadias | ***************************************************************************
    gcc_silvadias |                 
    gcc_silvadias | Parabéns!!!                
    gcc_silvadias | O ambiente esta pronto para trabalhar!                
    gcc_silvadias | A biblioteca particular resultou: 3.03
    gcc_silvadias | Delete o que esta dentro do arquivo main -> main(){delete_aqui} e inicie a sua aplicação                
    gcc_silvadias | Delete a pasta packages, caso não queira criar biblioteca particular.
    gcc_silvadias |                 
    gcc_silvadias | silvadias seu dev amigo!
    gcc_silvadias |                 
    gcc_silvadias | ****************************************************************************
    gcc_silvadias exited with code 0

5.2 - erro:  
Caso a saida seja erro, verifique a instalação do docker e docker-compose.  

6  - Entre no arquivo Main  
7  - Delete o que esta dentro da função main, main(){delete aqui}  
8  - Escreva o seu código no arquivo main dentro da função main(){escreva seu código}  
9  - Após escrever seu cógigo, teste repetindo o comando docker-compose up.  

    Obs: O container morre assim que o código é executado.  
    Não precisa rodar com opção -d do docker  
    o Container foi feito para executar no terminal e morrer.      
    Sempre que quizer rodar o seu código dê o comando docker-compose up.  

10 - Depois de testar caso não trabalhe mais na sua aplicação. Dê o comando docker-compose down e não terá mais os container.  

## GCC - Imagem oficial dockerhub

Foi utilizado a imagem GCC oficial do dockerhub  
- https://hub.docker.com/_/gcc  
  

Não é preciso instalar nada na máquina que não seja o docker e docker-compose.  
<br>
<br>
<br>
<br>
<br>  
<center>silvadias - Seu dev amigo!