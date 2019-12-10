x = 1 
puts "até que valor vc deseja chegar?"
value = gets.chomp.to_i

while x <= value
  puts x
  # Adiciona + 1 ao valor de x
  x += 1
end
puts 'você chegou ao valor desejado'