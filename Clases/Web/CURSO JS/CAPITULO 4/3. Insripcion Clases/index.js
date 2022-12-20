let materias = {
        fisica: ["Perez","pedro","juan","maria","cofla"],
        programacion: ["Jaramillo","pedro","juan","tomas"],
        calculo: ["Dalto","pedro","simon","cofla"],
        emprendimiento: ["Hernandez","pedro","tomas","maria","cofla"]
    }


const inscribirAlumnoMateria = (alumno,materia)=>{
    personas = materias[materia];
    if(personas.length>=21){
        document.write(`Lo siento <b>${alumno}</b>, las clases de <b>${materia}</b> ya estan llenas<br><br>`)
    }else{
        personas.push(alumno);
        if(materia == "fisica"){
            materias = {
                fisica: personas,
                programacion: materias['programacion'],
                calculo: materias['calculo'],
                emprendimiento: materias['emprendimiento']
            }
        } else if(materia == "programacion"){
            materias = {
                fisica: materias['fisica'],
                programacion: personas,
                calculo: materias['calculo'],
                emprendimiento: materias['emprendimiento']
            }
        } else if(materia == "calculo"){
            materias = {
                fisica: materias['fisica'],
                programacion: materias['programacion'],
                calculo: personas,
                emprendimiento: materias['emprendimiento']
            }
        } else if(materia == "emprendimiento"){
            materias = {
                fisica: materias['fisica'],
                programacion: materias['programacion'],
                calculo: materias['calculo'],
                emprendimiento: personas
            }
        }
        document.write(`Felicidades <b>${alumno}</b> te has incrito correctamente en <b>${materia}</b><br>
        Y tu clase quedo asi: <span style="color:red;">${materias[materia].join(" - ")}</span><br><br>`);
    }
}

inscribirAlumnoMateria("brujo","fisica");
inscribirAlumnoMateria("emanuel","fisica");
inscribirAlumnoMateria("gutti","fisica");
inscribirAlumnoMateria("alejandra","fisica");
inscribirAlumnoMateria("maison","fisica");
inscribirAlumnoMateria("jarfo","fisica");
inscribirAlumnoMateria("ruiz","fisica");
inscribirAlumnoMateria("tasti","fisica");
inscribirAlumnoMateria("nico","fisica");
inscribirAlumnoMateria("andres","fisica");
inscribirAlumnoMateria("carlos","fisica");
inscribirAlumnoMateria("federico","fisica");
inscribirAlumnoMateria("manuel","fisica");
inscribirAlumnoMateria("samuel","fisica");
inscribirAlumnoMateria("bryan","fisica");
inscribirAlumnoMateria("tomas","fisica");
inscribirAlumnoMateria("juan","fisica");
inscribirAlumnoMateria("turbi","fisica");
inscribirAlumnoMateria("simon","fisica");
inscribirAlumnoMateria("jarlan","fisica");
inscribirAlumnoMateria(prompt("Como se llama el alumno a inscribir"),prompt(`En que clase desea incribirlo:`));