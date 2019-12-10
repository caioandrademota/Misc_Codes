result = ' '

loop do

    puts result
    puts "---CALCULADORA---"
    puts 'selecione a opção desejada: '
    puts '1 - Adição.'
    puts '2 - Subtração.'
    puts '3 - Multiplicação.'
    puts '4 - Divisão.'
    puts '0 - Sair do programa.'
    puts 'Opção: '

    option = gets.chomp.to_i

    if option == 1
        puts "Digite dois valores: "
        value_1 = gets.chomp.to_f
        value_2 = gets.chomp.to_f
        x = value_1 + value_2
        result = "o resultado da soma entre #{value_1} e #{value_2} é de #{x}."

    elsif option == 2
        puts "Digite dois valores: "
        value_1 = gets.chomp.to_f
        value_2 = gets.chomp.to_f
        x = value_1 - value_2
        result = "o resultado da subtração entre #{value_1} e #{value_2} é de #{x}."

    elsif option == 3
        puts "Digite dois valores: "
        value_1 = gets.chomp.to_f
        value_2 = gets.chomp.to_f
        x = value_1 * value_2
        result = "o resultado da multiplicação entre #{value_1} e #{value_2} é de #{x}."

    elsif option == 4
        puts "Digite dois valores: "
        value_1 = gets.chomp.to_f
        value_2 = gets.chomp.to_f
        x = value_1 / value_2
        resto = value_1 % value_2
        result = "o quociente da divisão entre #{value_1} e #{value_2} é de #{x}. O resto é #{resto}."

    elsif option == 0
        puts "O programa será parado."
        break
    else
        puts "Opção Inválida! Tente novamente."
    end

    system "clear"
end