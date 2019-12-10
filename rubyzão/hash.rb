#criando hash
capitais = Hash.new
capitais1 = {}
#atribuindo valores
capitais = {amazonas:'manaus'}
capitais[:minas_gerais] = 'belo horizonte'

#métodos de hash
capitais.keys #exibirá as chaves
capitais.values #exibirá os valores
capitais.delete(:amazonas) #deleta a chave e o seu valor
capitais.size #exibe o tamanho do hash

