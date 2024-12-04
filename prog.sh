#!/bin/bash

# Générer un nombre aléatoire entre 10 et 50
count=$(( RANDOM % 41 + 10 ))

echo "Génération de $count nombres entiers :"

# Générer les entiers et les stocker dans une variable
args=""
for ((i=1; i<=count; i++)); do
  args="$args $(( RANDOM % 1000 ))" # Génère un entier entre 0 et 999
done

# Afficher les entiers générés
echo "Arguments :$args"

# Lancer ton programme avec les arguments générés
./push_swap $args

