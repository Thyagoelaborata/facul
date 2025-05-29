function maiorade(){
    
    let ade= prompt("Digite sua idade")
    ade>=18 ? alert("You are of legal age") : alert("You are a child")
}

function switchcase(){
                  
    let number = Number(prompt("say a number off 1 to 3"))
    switch (number){
        case 1: 
            alert("you are pretty")
        break
        case 2:
            alert("you are so so")
        break
        case 3:
            alert("You are ugly")
        break
        default:
            alert("try")
    }

}

function whiledos(){
    let number = Number(prompt("say a several numbers "))
    let soma = 0

    while (number !==0){
        soma+= number
        number = Number(prompt("Say a number or 0 to exit"))
    }
    alert("A same is: " + soma)

}

function Whiledo(){
    let number = Number(prompt("say a several numbers "))
    let soma = 0

    do {
        soma+= number
        number = Number(prompt("Say a number or 0 to exit"))


    }while (number !==0)alert("You stop: your conta is: " + soma)
        
    
}

function For(){
    for(let contador=1; contador<=18; contador++){
        console.log(" is more "  + contador)
    }

}

function Forin(){
    const pessoa = {
        altura : 1.74,
        peso : 67,
        sexo : "com certeza masculino",
        naturalidade : "PR" 
    }
    for (const prop in pessoa){
        console.log(prop)
    }
    for (const props in pessoa){
        console.log(pessoa[props])
    }
    for (const promps in pessoa){
        console.log(promps + " = " + pessoa[promps])
    }
}

function Foroff(){
    const vogais = ['a', 'e', 'i', 'o', 'u']
    for (const elemenets of vogais){
        console.log("This vogais in brazil is => " + elemenets )
    }
    console.log("This vogal => " + vogais[1])
}

function contarvogal(){
let palavra = prompt("Digite uma palavra:")
let contadorVogais = 0
let vogais = "aeiouAEIOU" // vefiricar maiusculo e minusculo

for (let letra of palavra) {
    if (vogais.includes(letra)) { // includes vefirica se e vogal 
        contadorVogais++ // adiciona ao contador + 1
    }
}

alert(`A palavra "${palavra}" tem ${contadorVogais} vogais.`) // um  alert avisando quantas vogais tem
}

function verificaraluno(){
    let alunos = [ 
        { nome: "Ana", nota: 8 }, 
        { nome: "Carlos", nota: 6 }, 
        { nome: "Beatriz", nota: 4 } 
        ]; 
    for (let prop of alunos){
        if (nota>=7)
            console
    }
}

function funcoesarray(){
    //accessar elementos no aaray
    var materia = ["Matematica", "Historia","Ciencia", "Portugues"]
    //console.log(materia)
    //console.log(materia[0])
    //console.log(materia[1])
    //console.log(materia[2])
    //console.log(materia[3])

    materia.unshift("ingles") //adiciona o lemento no começo
    materia.push("Ed fisica") // adiciona o elemento no final
    

    let mes = ["jan", "Fev", "Marc", "Abri", "Jun"]
    mes.splice(1, 0, "dezembro") // posicão 1 adicina o elemento posição 2 "0" não substitui o itme ja o numero 1 subistitu o item pelo outor
    mes.splice(5, 1, "maio") // exemplo que subistitui
    mes.shift() //remove o primeiro elemento do array
    mes.pop() //romeve o ultimo elemento do aaray
    
    var ade = [ 43, 25, 13, 62, 74, 90, 54, 9]
    ade.sort((a, b) => a - b) // organiza os numeros de forma certa
    console.log(ade)


}

funcoesarray()