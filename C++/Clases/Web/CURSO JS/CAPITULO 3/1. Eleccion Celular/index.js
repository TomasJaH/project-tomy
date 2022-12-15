class Celular {
    constructor(color,peso,rdp,rdc,ram) {
        this.color = color;
        this.peso = peso;
        this.rdp = rdp;
        this.rdc = rdc;
        this.memoria = ram;
        this.encendido = false;
    }

    botonEncendido(){
        if(this.encendido==false){
            alert("Celular Prendido");
            this.encendido = true;
        } else{
            alert("Celular Apagado");
        }
    }

    reiniciar(){
        if(this.encendido==true){
            alert("Reinciando celular");
        }else{
            alert("El celular esta apagado y no se puede reinciar");    
        }
    }

    tomarFoto(){
        alert(`Foto tomada en una resolucion de: ${this.rdc}`);
    }

    grabarVideo(){
        alert(`Grabando video en una resolucion de: ${this.rdc}`);
    }

    mostrarInfo(){
        return `Color: <b>${this.color}</b><br>
                Peso: <b>${this.peso}</b><br>
                Resolucion de Pantalla: <b>${this.rdp}</b><br>
                Resolucion de Camara: <b>${this.rdc}</b><br>
                Memoria RAM: <b>${this.memoria}</b><br>`;
    }

}

class CelularAltaGama extends Celular{
    constructor(color,peso,rdp,rdc,ram,rdce){
        super(color,peso,rdp,rdc,ram);
        this.rdce = rdce;
    }

    grabarSlowMotion(){
        alert("Estas grabando en camara lenta");
    }

    reconocimientoFacial(){
        alert("Reconocimiento facial iniciado");
    }

    mobileInfo(){
        return this.mostrarInfo + `Resolucion camara trasera: <b>${this.rdce}</b><br>`;
    }
}

nokia = new Celular("rojo","150g","4'","420p","2GB");
huawei = new Celular("blanco","200g","5.5'","720p","4GB");
samsung = new Celular("azul","220g","6'","1080p","6GB");
xiaomi = new CelularAltaGama("arcoiris","250g","6.5'","4K","12GB","6K");
iphone = new CelularAltaGama("negro","200g","6.9'","8K","16GB","12K");

// nokia.botonEncendido();
// nokia.tomarFoto();
// nokia.grabarVideo();
// nokia.reiniciar();
// nokia.botonEncendido();

document.write(`
<h3>NOKIA: </h3><br>
${nokia.mostrarInfo()}<br>
<h3>HUAWEI: </h3><br>
${huawei.mostrarInfo()}<br>
<h3>SAMSUNG: </h3><br>
${samsung.mostrarInfo()}<br>
<br><h2>Celulares gama alta</h2><br>
<h3>XIAOMI: </h3><br>
${xiaomi.mostrarInfo()}<br>
<h3>IPHONE: </h3><br>
${iphone.mostrarInfo()}<br>
`)
