let dineroCofla = prompt("¿Cuanto dinero tienes Cofla?");
let dineroRoberto = prompt("¿Cuanto dinero tienes Pedro?");
let dineroTomas = prompt("¿Cuanto dinero tienes Tomas?");

//Convertir a numero

dineroCofla = parseInt(dineroCofla);
dineroRoberto = parseInt(dineroRoberto);
dineroTomas = parseInt(dineroTomas);

//DINERO COFLA

if(dineroCofla >= 0.6 && dineroCofla < 1){
    let vuelto = dineroCofla - 1;
    alert(`Cofla, comprate el helado de agua \nY te sobran ${vuelto} dolares`);
}
else if(dineroCofla >= 1 && dineroCofla < 1.6){
    let vuelto = dineroCofla - 1;
    alert(`Cofla, comprate el heladix \nY te sobran ${vuelto} dolares`);
}
else if(dineroCofla >= 1.6 && dineroCofla < 1.7){
    let vuelto = dineroCofla - 1.6;
    alert(`Cofla, comprate el heladovich \nY te sobran ${vuelto} dolares`);
}
else if(dineroCofla >= 1.7 && dineroCofla < 1.8){
    let vuelto = dineroCofla - 1.7;
    alert(`Cofla, comprate el helardo \nY te sobran ${vuelto} dolares`);
}
else if(dineroCofla >= 1.8 && dineroCofla < 2.9){
    let vuelto = dineroCofla - 1.8;
    alert(`Cofla, comprate el helado de crema \nY te sobran ${vuelto} dolares`);
}
else if(dineroCofla >= 2.9){
    let vuelto = dineroCofla - 2.9;
    alert(`Cofla, comprate el helado con confites o el pote de 1/4kg \nY te sobran ${vuelto} dolares`);
} else{
    alert("Lo siento Cofla no te alcanza pa nada pa");
}

//DINERO ROBERTO

if(dineroRoberto >= 0.6 && dineroRoberto < 1){
    let vuelto = dineroRoberto - 1;
    alert(`Roberto, comprate el helado de agua \nY te sobran ${vuelto} dolares`);
}
else if(dineroRoberto >= 1 && dineroRoberto < 1.6){
    let vuelto = dineroRoberto - 1;
    alert(`Roberto, comprate el heladix \nY te sobran ${vuelto} dolares`);
}
else if(dineroRoberto >= 1.6 && dineroRoberto < 1.7){
    let vuelto = dineroRoberto - 1.6;
    alert(`Roberto, comprate el heladovich \nY te sobran ${vuelto} dolares`);
}
else if(dineroRoberto >= 1.7 && dineroRoberto < 1.8){
    let vuelto = dineroRoberto - 1.7;
    alert(`Roberto, comprate el helardo \nY te sobran ${vuelto} dolares`);
}
else if(dineroRoberto >= 1.8 && dineroRoberto < 2.9){
    let vuelto = dineroRoberto - 1.8;
    alert(`Roberto, comprate el helado de crema \nY te sobran ${vuelto} dolares`);
}
else if(dineroRoberto >= 2.9){
    let vuelto = dineroRoberto - 2.9;
    alert(`Roberto, comprate el helado con confites o el pote de 1/4kg \nY te sobran ${vuelto} dolares`);
} else{
    alert("Lo siento Roberto no te alcanza pa nada pa");
}

//DINERO TOMAS

if(dineroTomas >= 0.6 && dineroTomas < 1){
    let vuelto = dineroTomas - 1;
    alert(`Tomas, comprate el helado de agua \nY te sobran ${vuelto} dolares`);
}
else if(dineroTomas >= 1 && dineroTomas < 1.6){
    let vuelto = dineroTomas - 1;
    alert(`Tomas, comprate el heladix \nY te sobran ${vuelto} dolares`);
}
else if(dineroTomas >= 1.6 && dineroTomas < 1.7){
    let vuelto = dineroTomas - 1.6;
    alert(`Tomas, comprate el heladovich \nY te sobran ${vuelto} dolares`);
}
else if(dineroTomas >= 1.7 && dineroTomas < 1.8){
    let vuelto = dineroTomas - 1.7;
    alert(`Tomas, comprate el helardo \nY te sobran ${vuelto} dolares`);
}
else if(dineroTomas >= 1.8 && dineroTomas < 2.9){
    let vuelto = dineroTomas - 1.8;
    alert(`Tomas, comprate el helado de crema \nY te sobran ${vuelto} dolares`);
}
else if(dineroTomas >= 2.9){
    let vuelto = dineroTomas - 2.9;
    alert(`Tomas, comprate el helado con confites o el pote de 1/4kg \nY te sobran ${vuelto} dolares`);
} else{
    alert("Lo siento Tomas no te alcanza pa nada pa");
}