
//objects
// let student={
//     fullname: "PR",
//     age: 20,
//     marks: 65.7,
//     pmarks: function(){
//         console.log("marks, ",this.marks);
//     },
// };

// const employee={
//     calcTax()
// {
//     console.log('tax is 10%')
// }};
// const karanAr={
//     salary: 20,
// };

// karanAr.__proto__=employee;


//classes
// class toyota{
//     start(){
//         console.log('start')
//     }
//     stop(){
//         console.log('stop')
//     }
//     setbrand(bra){
//         this.bra=bra;
//     }
// }
// let fortuner=new toyota();
// console.log(typeof(fortuner));
// fortuner.setbrand('fortuner')

//synchronus
// console.log("Step1")
// console.log("Step2")
// console.log("Step3")
// console.log("Step4")

//async

// console.log("step1")
// console.log("step2")

// setTimeout(()=>{
//     console.log("step3");
// },4000);

// console.log("step4")
// console.log("step5")

//callback

// function sum(a,b){
//     console.log(a+b);

// }
// function calculator(a,b,sumCall_back){
//     console.log("step1")
//     sumCall_back(a,b);
//     console.log("step2")
// }
// calculator(4,2,(a,b)=>{
//     console.log(a+b);
// });



//async and sync
//agar hme data one ke baad 2s ka wait chahiye tab data2 chahiye to aise nhi hoga

// function getData(dataId){
//     setTimeout(()=>{
//         console.log("dataId ",dataId);
//     },2000);
// }

// getData(1);//phle data ke liye 2s lgega but paralally data2 bhi start ho jayega So total 2-3sec lgega but hme data 3 to 4 sec baad run krna tha problem
// getData(2);
// getData(3);

//promises
// let promise=new Promise((resolve,reject)=>{
//     console.log("I am promish!")
//     // resolve(1234)
//     reject('some eeror occured')

// })

//uper wala problem solve by callback

    // function getData(dataId,getNextData){
    //     setTimeout(()=>{
    //         console.log("dataId ",dataId);
    //         if(getNextData){
    //             getNextData()
    //         }
    //     },2000);
    // }

    // // getData(1,()=>{
    // //     getData(2,()=>{
    // //         getData(3) //callback hell to resolve with this we use Promises
    // //     });

    // // });

//by promise
    // function getData(dataId,getNextData){
    //     return new Promise((resolve,reject)=>{

    //         setTimeout(()=>{
    //             console.log("dataId ",dataId);
    //             // resolve("Success")
    //             reject('error')
    //             if(getNextData){
    //                 getNextData()
    //             }
    //         },4000);

    //     });
    // }
    

    // let promis=getData();
    // console.log(promis)
    // setTimeout(()=>{
    //     console.log(promis)
    // },5000)
    

//async -await
// function getData(data1){
//     return new Promise((res,rej)=>{
       
//         setTimeout(()=>{
//             console.log("data ",data1);
//             res("success")
//         },3000);
//     }
//     );
// }

// (async function () {
//     await getData(1);
    
//     await getData(2);
//     await getData(3);

// })();


//fetch API


const URL="https://cat-fact.herocuapp.com/facts";

const getGoogle=async ()=>{
    console.log("fetching data ...");
    let response=await fetch(URL);
    console.log(response.response);
}




