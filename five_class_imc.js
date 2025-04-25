function versituacion(){
    let name = document.getElementById("name").value ;
    let note = document.getElementById("note").value ;
    let mensage = ""

    if (note >=7 ){
        mensage = name + "You are approved!" 
    }
    else if(note>= 5){
        mensage = name + "Youe are of recovery!"
    }
    else{
        mensage = name + "You are fail"
    }
    document.getElementById("result").innerHTML = mensage ;
}