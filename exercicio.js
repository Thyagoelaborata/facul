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

Whiledo()