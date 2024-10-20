
let userScore = 0;
let compScore = 0;

const choices = document.querySelectorAll(".choice");
const msg = document.querySelector("#msg");

const userScorePara = document.querySelector("#user-score");
const compScorePara = document.querySelector("#comp-score");

const genCompChoice = () => {
  const options = ["rock", "paper", "scissors"];
  const randIdx = Math.floor(Math.random() * 3);
  return options[randIdx];
};

const drawGame = () => {
  msg.innerText = "Game was Draw. Play again.";
  msg.style.backgroundColor = "#081b31";
};

const showWinner = (userWin, userChoice, compChoice) => {
  if (userWin) {
    userScore++;
    userScorePara.innerText = userScore;
    msg.innerText = `You win! Your ${userChoice} beats ${compChoice}`;
    msg.style.backgroundColor = "green";
  } else {
    compScore++;
    compScorePara.innerText = compScore;
    msg.innerText = `You lost. ${compChoice} beats your ${userChoice}`;
    msg.style.backgroundColor = "red";
  }
};

const playGame = (userChoice) => {
  //Generate computer choice
  const compChoice = genCompChoice();

  if (userChoice === compChoice) {
    //Draw Game
    drawGame();
  } else {
    let userWin = true;
    if (userChoice === "rock") {
      //scissors, paper
      userWin = compChoice === "paper" ? false : true;
    } else if (userChoice === "paper") {
      //rock, scissors
      userWin = compChoice === "scissors" ? false : true;
    } else {
      //rock, paper
      userWin = compChoice === "rock" ? false : true;
    }
    showWinner(userWin, userChoice, compChoice);
  }
};

choices.forEach((choice) => {
  choice.addEventListener("click", () => {
    const userChoice = choice.getAttribute("id");
    playGame(userChoice);
  });
});

// alert("No");
// const c=prompt("Please enter num");
// if(c%5 === 0){
// console.log("yes");
// }else{
//     console.log("no");
// }

// let str="Alphabet";
// let len=str.length;
// for(let i=0;i<len;i++){
//     console.log(str[i]);
// }
// let count=0;

// for(let i of str){
//     count++
// }
// console.log(count);
// const student={
//     name: "Prince",
//     class: 10,
//     age: 21
// };
// for(let i in student){
//     console.log(i, student[i]);
// }

// let gameno=21;
// let i=3;
// fwhile(i>0){
//     let userno=prompt("Enter no");
//     if(gameno==userno){
//         console.log("correct");
//         break;
       
//     }
//     i--;
// }
// console.log("yoou have reached your limit");

// let s1="alpha";
// let s2=s1.slice(0,1);
// console.log(s1);
// console.log(s2);

// let str=prompt("Enter");
// let len=str.length;
// console.log("@"+str+len);


// let arr=[85,97,44,37,76,100];
// let len=arr.length;
// console.log(arr);
// for(let i=0;i<len;i++){
//     arr[i]=(arr[i]-arr[i]*(0.3));
// }

// console.log(arr);

// let arr=["a","b","c","d"];
// let al=arr.splice(0,1);
// console.log(arr);
// arr.splice(1,1,"e")
// console.log(arr);
// const f2=(msg,n)=>{
//     console.log(msg+n);
// }
// function f1(a,b){
//     console.log(a-b);
//     return a+b;
// }

// let c=f1(1,2) ;f2("fukc","l")
// console.log(c)



// function f1(){
//     let countVowel=0;
//     let str="apnaCollege";
//     for(let i=0;i<str.length;i++){
//         if(str.charAt(i)=="a"||str.charAt(i)=="e"||str.charAt(i)=="i"||str.charAt(i)=="o"||str.charAt(i)=="u"){
//             countVowel++;
//         }
//     }
//     console.log(countVowel);
// }
// f1();

//  let arr=[1,2,3,4];
// for(let i=0;i<arr.length;i++){
//     console.log(Math.pow(arr[i],2));
// }

// let newArr=arr.map((i)=>{
//     return i;
// })
// console.log(window.document )


// let h2=document.querySelector("h2");
// console.dir(h2.innerText);
// h2.innerText=h2.innerText+" from home";


// let btn1=document.querySelector("#btn1");
// let a=24;
// btn1.onclick = (e) =>{
//     console.log("button was clicket");
    
//     console.log("a++ ",a++);
//     console.log("event",e);
//     console.log("event type",e.type);
//     console.log("evente target",e.target);
    
// }
// btn1.addEventListener("click",(e)=>{
//     console.log("button was clicked 2");
//     console.log("event",e);
//     console.log("event type",e.type);
//     console.log("evente target",e.target);
// });
// let btn2=document.querySelector(".bclass");
// btn2.ondblclick=(e)=>{
//     console.log('button is double clicked');
//     console.log("event",e);
//     console.log("event type",e.type);
//     console.log("evente target",e.target);

// }
// let d1=document.querySelector("#d1");
// d1.onmouseover=(e)=>{
//     console.log('you are inside div')
//     console.log("event",e);
//     console.log("event type",e.type);
//     console.log("evente target",e.target);
// }


// let btn1=document.querySelector("#btn1");
// btn1.addEventListener("click",()=>{
//          console.log("button was clicked 1");
// })
// btn1.addEventListener("click",()=>{
//     console.log("button was clicked 2");
// })
// btn1.addEventListener("click",()=>{
//     console.log("button was clicked 3");
// })
// btn1.addEventListener("click",()=>{
//     console.log("button was clicked 4");
// })
// let handler1=()=>{
//     console.log("button was clicked 5");
// }
// btn1.addEventListener("click",handler1);
// btn1.removeEventListener("click",handler1);

// let b1=document.querySelector("#mode");
// let b2=document.querySelector(".pmode");
// let body=document.querySelector("body");
// let currentmode="light";
// b1.addEventListener("click",()=>{
//     if(currentmode === "light"){
//         body.classList.remove("pd");
//         currentmode="dark";
//        body.classList.add("dark");
//        body.classList.remove("light");

//     }else{
//         currentmode="light";
//         body.classList.remove("pd");
//        body.classList.add("light");
//        body.classList.remove("dark");
//     }
//     console.log(currentmode);
// }
// );
// b2.addEventListener("click",()=>{
//     body.classList.add("pd");
//     console.log("pink");
//     body.classList.remove("light");
//     body.classList.remove("dark");
//     currentmode="light";
// })
