class App {
    constructor(descargas,puntuacion,peso){
        this.descargas = descargas;
        this.puntuacion = puntuacion;
        this.peso = peso;
        this.iniciada = false;
        this.instalada = false;
    }

    abrir(){
        if(this.iniciada==false && this.instalada==true){
            this.iniciada = true;
            alert("Aplicacion abierta");
        }
    }

    cerrar(){
        if(this.iniciada==true && this.instalada==true){
            this.iniciada = false;
            alert("Aplicacion cerrada");
        }
    }

    instalar(){
        if(this.instalada==false){
            this.instalada = true;
            if(this.instalada == true){
                alert("App instalada");
            }else{
                alert("Hubo un error al iniciar la app");
            }
        }
    }

    desisntalar(){
        if(this.instalada == true){
            this.instalada = false;
            alert("App desinstalada")
        }
    }

    appInfo(){
        return `Descargas: <b>${this.descargas}</b><br>
        Puntuacion: <b>${this.puntuacion}</b><br>
        Peso: <b>${this.peso}</b><br>`;
    }
}

app1 = new App("16.000","2.5 estrellas","400mb");
app2 = new App("400.000","3.9 estrellas","250mb");
app3 = new App("20.000","3 estrellas","600mb");
app4 = new App("106.000","4.2 estrellas","350mb");
app5 = new App("16.000","3.1 estrellas","1GB");
app6 = new App("8.000","1.8 estrellas","800mb");
app7 = new App("700.000","4.5 estrellas","550mb");

document.write(`<h2>APPS</h2><br>
<h3>APP 1</h3><br>
${app1.appInfo()}<br>
<h3>APP 2</h3><br>
${app2.appInfo()}<br>
<h3>APP 3</h3><br>
${app3.appInfo()}<br>
<h3>APP 4</h3><br>
${app4.appInfo()}<br>
<h3>APP 5</h3><br>
${app5.appInfo()}<br>
<h3>APP 6</h3><br>
${app6.appInfo()}<br>
<h3>APP 7</h3><br>
${app7.appInfo()}<br>`);