const fila = document.querySelector('.contenedor-carousel');
const personajes = document.querySelectorAll('.pelicula');

const flechaIzquierda = document.getElementById('flecha-izquierda');
const flechaDerecha = document.getElementById('flecha-derecha');

const video = document.getElementById('video');
const play = document.getElementById('reproducir');

// ----- ----- Event Listener para la flecha derecha ----- -----
flechaDerecha.addEventListener('click',() =>{
    fila.scrollLeft += fila.offsetWidth;

    const indicadorActivo = document.querySelector('.indicadores .activo');
    if(indicadorActivo.nextSibling){
        indicadorActivo.nextSibling.classList.add('activo');
        indicadorActivo.classList.remove('activo');
    }
});

// ----- ----- Event Listener para la flecha izquierda ----- -----
flechaIzquierda.addEventListener('click',() => {
    fila.scrollLeft = fila.scrollLeft - fila.offsetWidth;
    const indicadorActivo = document.querySelector('.indicadores .activo');
    if(indicadorActivo.previousSibling){
        indicadorActivo.previousSibling.classList.add('activo');
        indicadorActivo.classList.remove('activo');
    }
});


// ----- ----- Paginacion ----- -----

const numeroPaginas = Math.ceil(personajes.length / 4);
for(let i=0;i<numeroPaginas;i++){
    const indicador = document.createElement('button');

    if(i === 0){
        indicador.classList.add('activo')
    }

    document.querySelector('.indicadores').appendChild(indicador);

    indicador.addEventListener('click', (e) => {
        fila.scrollLeft = i * fila.offsetWidth;

        document.querySelector('.indicadores .activo').classList.remove('activo');
        e.target.classList.add('activo');
    });
}

// ----- ----- Hover ----- -----

personajes.forEach((personaje) =>{
    personaje.addEventListener('mouseenter', (e)=>{
        const elemento = e.currentTarget;
        setTimeout(() =>{
            personajes.forEach(pelicula => pelicula.classList.remove('hover'));
            elemento.classList.add('hover')
        }, 300);
    });
});

fila.addEventListener('mouseleave', () =>{
    personajes.forEach(pelicula => pelicula.classList.remove('hover'));
});

play.addEventListener('click', () =>{
    video.classList.add('activo');
    video.requestFullscreen();
    video.autoplay = true;
    video.load();
    setTimeout(()=>{
    document.exitFullscreen();
    video.classList.remove('activo');
    }, 6200);
});