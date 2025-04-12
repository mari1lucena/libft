#!/bin/bash

echo "📚 Recompilando a libft..."
make re

echo ""
echo "🧪 Iniciando testes..."

for testfile in test_*.c; do
    testname="${testfile%.c}"   # remove .c do nome
    outfile="${testname}.out"   # nome do executável

    echo "🔧 Compilando $testfile..."
    cc -Wall -Wextra -Werror "$testfile" libft.a -I. -o "$outfile"

    if [ $? -ne 0 ]; then
        echo "❌ Erro ao compilar $testfile"
        continue
    fi

    echo "🚀 Executando $testname:"
    ./"$outfile"
    echo ""
done
