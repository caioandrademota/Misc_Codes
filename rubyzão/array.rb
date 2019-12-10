#criando o array
states = []
cont = 0
#adicionando valores no array
states.push("Amazonas") #será adicionado no final do array
states.insert(0,"Acre") #será adicionado na posição 0
states[1] = "Amapá" #o index de estado será realocado pelo valor atribuido
while cont <3
    states.push(gets.chomp) #o que for escrito será adicionado em states
    cont += 1
end
#mÉTODOS PARA PERCORRER ARRAYS
states[1] #corresponde ao número pedido
states[1..3] #corresponde aos números no  intervalo de 1 a 3
states[-1] #correspondente ao último item do array
states.first #primeiro item do array
states.last #último elemento do array
states.enter #tamanho do array
states.empty? #booleano se ele está vazio ou n
states.include?('Amazonas') #verifica se tal valor está no array
states.delete_at(3)#deleta tal valor do array
states.pop('Amazonas')#printa e deleta o valor do array
states.shift #deleta o primeiro valo do array

states.each do |state|
    puts state + 'estado é'
end
