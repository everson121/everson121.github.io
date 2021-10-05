const sum = document.getElementById("sum")
const biggest = document.getElementById("big")
const prime = document.getElementById("pri")
const hipotenuse = document.getElementById("hip")
const salary = document.getElementById("sal")
const temperature = document.getElementById("tem")
const grade = document.getElementById("not")
const inputL = document.getElementById("inputL")
const inputM = document.getElementById("inputM")
const inputR = document.getElementById("inputR")
const output = document.getElementById("output")

function soma() {
    
    let A = document.getElementById("N1").value;
    let B = document.getElementById("N2").value;
    let R = document.getElementById("R");

    R = parseFloat(A) + parseFloat(B);

    document.getElementById("R").value = R;
    console.log(R);

}


 
biggest.onclick = function () {
    hideM()
    aux = inputL.value
    aux1 = inputR.value
    if(aux > aux1){
    output.innerHTML = aux+' é maior que '+aux1;
    }else if(aux < aux1){
    output.innerHTML = aux1 +' é maior que '+aux;
    } else output.innerHTML = 'Ambos valores são iguais';  

};
prime.onclick = function () {
    hideBoth()
    aux = parseInt(inputM.value)
    if(isPrime(aux)==true) output.innerHTML = aux +' é primo ';
    else output.innerHTML = aux +' não é primo ';

};

hipotenuse.onclick = function () {
    hideM()
    aux = inputL.value
    aux1 = inputR.value
    hip = Math.sqrt(aux^2 + aux1^2)
    output.innerHTML = 'O valor da hipotenusa é = '+ hip
};

salary.onclick = function () {
    hideM()
    aux = parseFloat(inputL.value)
    aux1 = parseFloat(inputR.value)
    console.log(aux)
    console.log(aux1)

    newS = aux + ((aux / 100) * aux1)
    
    output.innerHTML = 'Com o reajuste, o salário será = '+ newS
};
temperature.onclick = function () {
    hideBoth()
    aux = inputM.value
    celsius = 5*((aux-32)/9)
    output.innerHTML = 'A temperatura em Cº = '+ celsius
    
};
grade.onclick = function () {
    aux = inputL.value
    aux1 = inputM.value
    aux2 = inputR.value
    showAll()

    output.innerHTML = 'Sua média final é: '+ (aux * 2 + aux1 * 3 + aux2 *5)/10
};

function hideM(){
    inputM.style.visibility="collapse"
    inputL.style.visibility="visible"
    inputR.style.visibility="visible"

} 
function hideBoth(){
    inputL.style.visibility="collapse"
    inputR.style.visibility="collapse"
    inputM.style.visibility="visible"

}
function showAll(){
    inputL.style.visibility="visible"
    inputM.style.visibility="visible"
    inputR.style.visibility="visible"

}
function isPrime(result){
    console.log(typeof(result))
    switch(result){
        case 1: return false; 
        case 2: return true;
        case 3: return true;
        case 5: return true;
    }
    if (result % 2 == 0 || result % 3 == 0 || result % 5 == 0){
        return false;
    } 
    var sqrt = Math.sqrt(result);
    for (var i = 7; i <= sqrt; i += 6) {
        if (result % i == 0) return false;
        if (result % (i + 2) == 0) return false;
    }
    return true;
   }