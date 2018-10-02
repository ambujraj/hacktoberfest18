#classe Interação 
class Interacao

    #metodo pular linha
    def pular_linha(qtd)
        i = 0
        while i < qtd
            puts ''
            i += 1
        end
    end
    
    #metodo limpar
    def limpar
        system('cls')
    end
    
    #metodo Cabeçalho
    def cabecalho
        puts 'Hacktoberfest2018'
        puts '------------------'
    end

    #metodo Cabeçalho
    def boas_vindas(name, age, profession)
        limpar
        cabecalho
        pular_linha 1
        puts "Welcome #{name} !!!"
        puts "You are #{age} years"
        puts "Your profession is #{profession}"
        pular_linha 2
        print "Enjoy Hacktoberfest2018 and enjoy yourself!!! "
    end
end

@config = Interacao.new

@config.cabecalho
@config.pular_linha 1
print "You name: "
name = gets.chomp.upcase
print "You age: "
age = gets.to_i
print "What is your profession: "
profession = gets.chomp.upcase
@config.boas_vindas name, age, profession
@config.pular_linha 2
