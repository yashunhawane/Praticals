//Arrow function
const message=function(){
    console.log("Hii I am Sid");
}
setTimeout(message, 3000);
setTimeout(()=>{
    console.log("Calling arrow function.");
    },5000);