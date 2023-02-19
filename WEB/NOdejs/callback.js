//Callback function
function display_result(para){
    console.log(para);
}
function calculate(x,y,mycallback){
    let sum=x+y;
    mycallback(sum);
}
calculate(10,10,display_result);