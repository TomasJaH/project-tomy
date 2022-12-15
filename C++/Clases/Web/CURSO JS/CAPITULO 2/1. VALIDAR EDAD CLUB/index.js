
let free = false;
long = 0;
const validarCliente = (time)=>{
    let edad = prompt("¿Cual es tu edad?");
    if(edad >= 18){
        if(time >=2 && time < 7 && free == false){
            alert("Podes pasar gratis, sos la primera persona despues de las 2 AM");
            free = true;    
        }else{
            alert(`Son las ${time}, podes pasar pero teens que pagar los 10$ de entrada`);
        }
    }else {
        alert("Lo siento eres menor de edad no puedes seguir");
    }
}

asistentes = prompt("¿Cuantos son?");

for(let i=1;i<=asistentes;i++){
    let horaIn = prompt("Que horas son [0-24H]");
    
    validarCliente(horaIn);
}