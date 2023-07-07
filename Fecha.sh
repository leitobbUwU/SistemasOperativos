dia=$(date +%d)

if (( dia <= 15 )); then
    mitad="Primer quincena"
else
    mitad="Segunda quincena"

fi

echo "El dia de hoy es: $dia"
echo "Estas en la: $mitad"
