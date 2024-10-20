// const student={
//     fullName : "Prince",
//     age : 21,
//     marks : 23
// };
// student.age=32;
//  console.log(student.age);
//  console.log(student["age"]);


// let inputValue=prompt("Enter a num");
// console.log(inputValue);
// if(inputValue%5==0){
//     console.log("Yes divisible by 5");
// }else{
//     console.log("Not ");
// }



//for - of ...for->Array,String but for-in for Objects

// let a="Ram";
// for(let i of a){
//     console.log(i);
// }



// const student={
//     fullName : "Prince",
//     age : 21,
//     marks : 23
// };
// for(let i in student){
//     console.log(i +" ,"+student[i]);
// }



//guessing game

// let originalNum=21;//yha int hai

// let userNum=prompt("Enter no ");//prompt ke andr string hota hai

// while(userNum!=originalNum){//!== hota to data type differ kr jaate
//     userNum=prompt("Enter no ");
// }
// console.log("C");

//string

    // let str=" asdfghjkdfdfdfdfdl";
    // console.log(str.length);
    // console.log(str[1]);

    // let str1=str.toUpperCase();
    // console.log(str);//KOI BHI METHOD STRING ORIGINAL ME CHANGE NHI KRTA NYA ME SAVE KRTA HAI 
    // console.log(str.trim());//EHITE SPACE FROM END AND STRAT
    // let str2=str.slice(3,7);
    // console.log(str2);//return part of string
    // str.concat(str1);
    // console.log(str);
    // // str.replace(searchVal,newVal);
    // str.replace("df","l");//sirt first maching string will be replaced 
    // str.replaceAll("df","l")
    // console.log(str);
    // str.charAt(3);
    // console.log(str);
//*******template literals ******** isi tareeke se likhne ko string interPollation*********
// const student={
//     username : "Prince",
//     age : 20,
//     degree : "Collage"
// }
// console.log(`My name is ${student.username} and my age is ${student.age} and i am in ${student.degree}`);

//there is diff bet property(it gives some value without doing any work like arr.length) and method(str.length() it works and then return val)

//   ARRAY IS OF OBJECT DATA TYPE
//IN JS ARRAY IS MUTABLE BUT STRING IS IMMUTABLE;



// let arr=[1,2,3,4];

// let newA=arr.map((val)=>{
//     return val%2==0;
// });
// console.log(newA);


// let newA=arr.filter((val)=>{
//     return val%2==0;
// });
// console.log(newA);

// arr.forEach(function printNum(val){
//     console.log(val);
// });

// arr.forEach((val)=>{
//     console.log(val);
// });
//find sumof all element in arr

// let a=arr.reduce((res,curr)=>{
//     return res+curr;
// });
// console.log(a);

//find avg
// let a=arr.reduce((res,curr)=>{
//     return res+curr;
// });
// console.log(a/arr.length);


//find max
// let a=arr.reduce((res,curr)=>{
//     return res>curr?res:curr;
// });
// console.log(a);


//filter no greter than 90;

// let arr=[34,96,98,65,35];

// let newA=arr.filter((val)=>{
//     return val>90;
// });
// console.log(newA);

let n=prompt("Enter a num ");
let arr=[];
for(let i=0;i<n;i++){
    arr[i]=i+1;
}
let a=arr.reduce((res,curr)=>{
    return res+curr;
});
console.log(a);
let b=arr.reduce((res,curr)=>{
    return res*curr;
});
console.log(b);

