function verimc(){
    let name = document.getElementById("names").value ;
    let weith = parseFloat(document.getElementById("numbers").value) ;
    let size = parseFloat(document.getElementById("numberss").value) ;
    let result = weith / (size * size ) ;
    let mensage = ""
    let cor = ""
    const resulta = document.getElementById('results');

    if (!name || isNaN(weith) || isNaN(size) || size <= 0) {
        resulta.textContent = "⚠️ Por favor, preencha todos os campos corretamente antes de calcular o IMC.";
        resulta.style.backgroundColor = "#ffcdd2"; // rosa claro de alerta
        resulta.style.color = "#b71c1c"; // texto vermelho escuro
        return;
    }


    if(result <= 18.5){
        mensage = name + "You are UNDERWEIGHT! " 
    }
    else if(result <=24.9){
        mensage = name + "You are Normal WEIGHT! "
    }
    else if(result <=29.9){
        mensage = name + "You are OVERWEIGHT! "
    }
    else if(result <=34.9){
        mensage = name + "You are OBESITY GRADE 1! "
    }
    else if(result <=39.9){
        mensage = name + "You are OBESITY GRADE 2!"
    }
    else {
        mensage = name + "You will die you are OBESITY GRADE 3! "
    }


    resulta.style.backgroundColor = cor;
    resulta.style.color = "#ffffff";
    resulta.textContent = `hello, ${name}! \n Your IMC are ${result.toFixed(2)}  ${mensage}`;
}

