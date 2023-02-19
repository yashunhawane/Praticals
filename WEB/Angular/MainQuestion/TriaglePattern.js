// Write a program to Print the given pattern(REPL) [10]
// 5 4 3 2 1
// 4 3 2 1
// 3 2 1
// 2 1
// 1
function triangleNumber(num) {
    for(var i = num; i >= 1 ; i--){
        var str = ''
        for(var j = i; j >= 1; j--){
           str += j
        }
        console.log(str)
    }}
    console.log(triangleNumber(5));