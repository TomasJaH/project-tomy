class Animal{
    constructor(especie,edad,color){
        this.especie = especie;
        this.age = edad;
        this.col = color;
        this.info = `Soy un ${this.especie}, tengo ${this.age} años y soy de color ${this.col}.`;
    }

    verInfo(){
        document.write(this.info + "<br>");
    }

    static titulo(){
        document.write("<h2>LOS ANIMALES</h2>");
    }
}

class Perro extends Animal{
    constructor(especie,edad,color,raza){
        super(especie,edad,color);
        this.raza = raza;
    }

    ladrar(){
        alert("GUAU");
    }

    set setRaza(newName){
        this.raza = newName;
    }

    get getRaza(){
        return this.raza;
    }
}

let perro = new Perro("perro",5,"marron","Doberman");
let gato = new Animal("gato",2,"negro");
let pajaro = new Animal("paajro",1,"verde");

Animal.titulo();
perro.ladrar();
perro.verInfo();
gato.verInfo();
pajaro.verInfo();

document.write("<br><br>Raza original: " + perro.getRaza);

perro.setRaza = prompt("Introduce la nueva raza: ");

document.write("<br>Nueva raza  : " + perro.getRaza);
