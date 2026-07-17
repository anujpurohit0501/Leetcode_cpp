/**
 * @param {number[]} nums
 * @return {number[]}
 */
var majorityElement = function(nums) {
    let news=[]
    let freq={}
    for(let num of nums){
       freq[num]=(freq[num]||0)+1}

       for(let num in freq){ 
        if(freq[num]>Math.floor(nums.length/3)){
            news.push(Number(num))}
    }return news
};