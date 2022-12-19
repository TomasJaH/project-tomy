
const obtenerInformacion = (materia)=>{
    materias = {
        fisica: ["Perez","pedro","juan","maria","cofla"],
        programacion: ["Jaramillo","pedro","juan","tomas"],
        calculo: ["Dalto","pedro","simon","cofla"],
        emprendimiento: ["Hernandez","pedro","tomas","maria","cofla"]
    };
    if(materias[materia] !== undefined){
        return [materias[materia],materia];
    }else{
        return false;
    }
}

const mostrarInformacion = (materia)=>{
    let info = obtenerInformacion(materia);

if (info !== false){
    let profesor = info[0][0];
    let alumnos = info[0];
    alumnos.shift();
    document.write(`El profesor de ${info[1]} es: <b style="color:red;">${profesor}</b><br>
    Los alumnos de ${info[1]} son: <b style="color:blue;">${alumnos.join(" - ")}</b><br><br>`);
}
}

let numeroMaterias = prompt("Cuantas materias va a ingresar");

for(let i = 0;i<numeroMaterias;i++){
    mostrarInformacion(prompt(`Ingrese la materia ${i+1}`));
}