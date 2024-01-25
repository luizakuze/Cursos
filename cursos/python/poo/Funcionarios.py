from datetime import datetime


# criando a classe
class Funcionarios:
    
    # construtor
    ## self = objeto.argumento = 'this' do Java
    def __init__(self, nome, sobrenome, ano_nascimento):
        self.nome = nome
        self.sobrenome = sobrenome
        self.ano_nascimento = ano_nascimento


    def nome_completo(self):
        return self.nome + ' ' + self.sobrenome
    

    def idade_funcionario(self):
        ano_atual = datetime.now().year
        return ano_atual - self.ano_nascimento
        
# criando objetos
usuario1 = Funcionarios('Luiza', 'Kuze', 2004) 
usuario2 = Funcionarios('Letícia', 'Silva', 2005) 

# imprimindo usuários
print(usuario1.nome_completo())
print(usuario2.nome_completo())
print(usuario1.idade_funcionario())
print(usuario2.idade_funcionario())