const sumar = (num1,num2)=>{
    escrita = `${num1} + ${num2}`;
    return parseInt(num1) + parseInt(num2);
}

const restar = (num1,num2)=>{
    escrita = `${num1} - ${num2}`;
    return parseInt(num1) - parseInt(num2);
}

const multiplicar = (num1,num2)=>{
    escrita = `${num1} * ${num2}`;
    return parseInt(num1) * parseInt(num2);
}

const dividir = (num1,num2)=>{
    escrita = `${num1} / ${num2}`;
    return parseInt(num1) / parseInt(num2);
}

alert("¿Que operacion queres hacer?");
operacion = prompt("1: Suma, 2: Resta, 3: Multiplicacion, 4: Division");

if(operacion==1){
    let numero1 = prompt("Introduce el primer numero: ");
    let numero2 = prompt("Introduce el segundo numero: ");
    resultado = sumar(numero1,numero2);
}else if(operacion==2){
    let numero1 = prompt("Introduce el primer numero: ");
    let numero2 = prompt("Introduce el segundo numero: ");
    resultado = restar(numero1,numero2);
}else if(operacion==3){
    let numero1 = prompt("Introduce el primer numero: ");
    let numero2 = prompt("Introduce el segundo numero: ");
    resultado = multiplicar(numero1,numero2);   
}else if(operacion==4){
    let numero1 = prompt("Introduce el primer numero: ");
    let numero2 = prompt("Introduce el segundo numero: ");
    resultado = dividir(numero1,numero2);   
}else{
    alert("Has escogido una operacion incorrecta");
}

document.write(`El resultado de la operacion ${escrita} es de: <b>${resultado}</b>`);
