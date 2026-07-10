/**
 * @param {string} word
 * @param {number} k
 * @return {number}
 */
var minimumDeletions = function(word, k) {
    let arr=new Array(26).fill(0);
    for(let i of word){
        arr[i.charCodeAt(0)-97]++;
    }
    let map=arr.filter((x)=>x!==0);
    map.sort((a,b)=>a-b);
    let ans=Infinity;
    let count=0
    for(let i=0;i<map.length;i++){
        count=0
        for(let j=0;j<i;j++)count+=map[j]
        for(let j=i+1;j<map.length;j++){
            count+=Math.max(map[j]-map[i]-k,0)
        }
        
        ans=Math.min(ans,count)
    }
    return ans
};