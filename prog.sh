#!/bin/bash

# Nombre de valeurs distinctes à générer
count=50

echo "Génération de $count nombres distincts :"

# Plage des nombres aléatoires
min=-5000
max=5000

# Générer des entiers distincts dans une plage large
args=""
declare -A unique_numbers  # Utilisation d'un tableau associatif pour assurer l'unicité

while [ "${#unique_numbers[@]}" -lt "$count" ]; do
    num=$(( RANDOM % (max - min + 1) + min ))  # Génère un entier entre $min et $max
    if [ -z "${unique_numbers[$num]}" ]; then
        unique_numbers[$num]=1  # Marque ce nombre comme utilisé
        args="$args $num"
    fi
done

# Afficher les entiers générés
echo "Arguments : $args"

./push_swap $args