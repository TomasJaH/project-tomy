let recipiente = "papel";

alert(recipiente);

let nombre = prompt("Decime tu nombre");

let saludo = "Hola, ";

let frase = saludo.concat(nombre);

alert("Hola " + nombre);
alert(`Hola ${nombre}, ¿como estas?`);
alert(frase);

function sumar(num1,num2){
    let res = num1+num2;
    return res;
}

resultado = sumar(20,25);
document.write(resultado);

let cadena = "   tomas le gusta el futbol    ";
let final = cadena.trim();

document.write(final);

