class Calculadora{
    constructor(){

    }
    sumar(num1,num2){
    return parseInt(num1) + parseInt(num2);
    }

    restar(num1,num2){
        return parseInt(num1) - parseInt(num2);
    }

    multiplicar(num1,num2){
        return parseInt(num1) * parseInt(num2);
    }

    dividir(num1,num2){
        return parseInt(num1) / parseInt(num2);
    }

    potenciar(num,exp){
        return num**exp;  
    }

    rainzCuadrada(num){
        return Math.sqrt(num);
    }

    rainzCubica(num){
        return Math.cbrt(num);
    }
}

const calculadora = new Calculadora();
alert("¿Que operacion queres hacer?");
operacion = prompt("1: Suma, 2: Resta, 3: Multiplicacion, 4: Division, 5: Potenciar, 6: Raiz Cuadrada, 7: Raiz Cubica");

if(operacion==1){
    let numero1 = prompt("Introduce el primer numero: ");
    let numero2 = prompt("Introduce el segundo numero: ");
    resultado = calculadora.sumar(numero1,numero2);
    document.write(`El resultado de la suma es de: ${resultado}`);
}else if(operacion==2){
    let numero1 = prompt("Introduce el primer numero: ");
    let numero2 = prompt("Introduce el segundo numero: ");
    resultado = calculadora.restar(numero1,numero2);
    document.write(`El resultado de la resta es de: ${resultado}`);
}else if(operacion==3){
    let numero1 = prompt("Introduce el primer numero: ");
    let numero2 = prompt("Introduce el segundo numero: ");
    resultado = calculadora.multiplicar(numero1,numero2);   
    document.write(`El resultado de la multiplicacion es de: ${resultado}`);
}else if(operacion==4){
    let numero1 = prompt("Introduce el primer numero: ");
    let numero2 = prompt("Introduce el segundo numero: ");
    resultado = calculadora.dividir(numero1,numero2);   
    document.write(`El resultado de la division es de: ${resultado}`);
}else if(operacion==5){
    let numero = prompt("Introduce el numero: ");
    let exponente = prompt("Introduce el exponente: ");
    resultado = calculadora.potenciar(numero,exponente);   
    document.write(`El resultado de la potenciacion es de: ${resultado}`);
}else if(operacion==6){
    let numero = prompt("Introduce el numero que le quieres sacar la raiz cuadrada: ");
    resultado = calculadora.rainzCuadrada(numero);   
    document.write(`La raiz cuadrada de ${numero} es: ${resultado}`);
}else if(operacion==7){
    let numero = prompt("Introduce el numero que le quieres sacar la raiz cubica: ");
    resultado = calculadora.rainzCubica(numero);   
    document.write(`La raiz cubica de ${numero} es: ${resultado}`);
}else{
    alert("Has escogido una operacion incorrecta");
}
