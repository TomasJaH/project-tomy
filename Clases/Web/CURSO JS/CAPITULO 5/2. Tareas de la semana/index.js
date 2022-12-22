let trabajosPracticos = "100 minutos de trabajos practicos";
let estudio = "100 minutos de estudio";
let trabajo = "240 minutos de trabajo";
let oficio = "30 miutos de oficio";
let descanso = "10 minutos de descanso";

//IMPRIMIR TAREAS

console.log("TAREAS");

for(let i=0;i<14;i++){
    if(i==0){
        console.group("SEMANA 1");
    }
    console.groupCollapsed(`Dia ${i+1}`);
    console.log(trabajo);
    console.log(descanso);
    console.log(estudio);
    console.log(trabajosPracticos);
    console.log(oficio);
    console.groupEnd();
    if(i==6){
        console.groupEnd();
        console.groupCollapsed("SEMANA 2");
    }
}

console.groupEnd();
console.groupEnd(); 