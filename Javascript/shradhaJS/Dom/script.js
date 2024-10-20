// console.log(window.document.body.childNodes);
// console.dir(document.body.childNodes);

// document.body.style.background="green";
// document.body.childNodes[3].innerText="abcd";

// console.log(document.body.childNodes);

// let element=document.getElementById("head_id_1");
// element.innerText="Alpha";
// let elements1=document.getElementsByClassName("heading");
// console.log(elements1);
// console.dir(elements1);
// let head2=document.querySelector("#head_id_h2");
// head2.innerText=head2.innerText+" my name is prince";

// let i=1;
// let getingFrom=document.querySelectorAll(".abc");
// for(div of getingFrom){
//     div.innerText="modified div"+i++;
// }

// getingFrom[0].innerText="modified div1";
// getingFrom[1].innerText="modified div2";
// getingFrom[2].innerText="modified div3";



// let div=document.querySelector("div");
// console.log(div);
// console.log("\n");

// let id=div.getAttribute("id");
// console.log(id);
// let nam=div.getAttribute("name");
// console.log(nam);

// let p=document.querySelector("p");
// console.log(p);
// console.log("\n");
// let classAt=p.getAttribute("class");
// console.log(classAt);
// console.log("\n");
// p.setAttribute("class","class12")
// console.log(classAt);

// div.style.backgroundColor="red"
// div.style.fontSize="26px"
// div.innerText="InnerTest"
// div.style.visibility="hidden"

//insert new button
// let newBtn=document.createElement("button");
// console.dir(newBtn)
// newBtn.innerText="Nya Button"
// console.dir(newBtn)
// console.log(newBtn)
// let div=document.querySelector("#div1");
// div.append(newBtn)
// div.prepend(newBtn)
// div.before(newBtn)
// div.after(newBtn)
// let newp=document.createElement("p");
// let newHea=document.createElement("h1");
// newHea.innerHTML="<i>Hi I & You</i>"
// document.querySelector("body").prepend(newHea)

// document.body.appendChild(newp).appendChild(newHea).appendChild(newBtn)
// let id3=document.querySelector("ul")
// id3.remove()

// let newButton=document.createElement("button");
// newButton.innerText="click me"
// newButton.style.backgroundColor="red"
// newButton.style.color="white"

// document.querySelector("body").prepend(newButton)

// let parag=document.querySelector("p");
// // parag.setAttribute("class","newClass");
// parag.classList.add("newClass")
// parag.classList.add("nc")
// parag.classList.remove("nc")


//event handler

// let btn_1=document.querySelector("#btn1")

// btn_1.onclick=()=>{
//     console.log("clicked");
//     alert('click ok to continue')
// }
// let btn_2=document.querySelector("#btn2")

// btn_2.ondblclick=()=>{
//     console.log("clicked 2x");
//     alert('click ok to continue')
// }
// let div_1=document.querySelector("#div1")

// div_1.onmouseover=(e)=>{
//     console.log(e)
//     console.log(e.type)
//     console.log(e.target)
//     console.log(e.clientX,e.clientY)
   
// }
// div_1.onmouseover=(e)=>{
//     console.log(e)
    
   
// }
// div_1.addEventListener("mouseover",(e)=>{
//     console.log(e)
//     console.log(e.type)
//     console.log(e.target)
//     console.log(e.clientX,e.clientY)
// })
// div_1.addEventListener("mouseover",(e)=>{
//     console.log(e)
    
// })


// div_1.addEventListener("mouseover",(e)=>{
//     console.log("event handler 1")
// })
// const handler3=(e)=>{
//     console.log("event handler 3")
    
// }


// div_1.addEventListener("mouseover",handler3)
// div_1.addEventListener("mouseover",(e)=>{
//     console.log("event handler 2")
// })
// div_1.addEventListener("mouseover",(e)=>{
//     console.log("event handler 4")
    
// })
// div_1.removeEventListener("mouseover",handler3)


//mode change color


// let mode=document.querySelector("#mode");
// let currMode="light"

// mode.addEventListener("click",()=>{
//     console.log('it was '+currMode);
//     if(currMode==="light"){
//         document.querySelector("body").style.backgroundColor="black"
//         currMode="dark"
//     }else{
//         document.querySelector("body").style.backgroundColor="white"
//         currMode="light"
//     }
//     console.log('now It is '+ currMode);
// })

let mode=document.querySelector("#mode");
let body=document.querySelector("body")
let currMode="light"

mode.addEventListener("click",()=>{
    console.log('it was '+currMode);
    if(currMode==="light"){
        body.classList.add("dark")
        body.classList.remove("light")
        currMode="dark"
    }else{
        body.classList.remove("dark")
        currMode="light"
    }
    console.log('now It is '+ currMode);
})