let arr = [1,2,3,4,5,6,7]
start = 0
end = arr.length -1
target = 3

function recursiveFun(arr, start, end, target){
    let mid = Math.floor((start + end )/2)
    if(arr[mid-1] === target) return true;
    
    
}


console.log(recursiveFun(arr, start , end, target))