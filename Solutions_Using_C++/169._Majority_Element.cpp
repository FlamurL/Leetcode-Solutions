class Solution {
    public int majorityElement(int[] nums) {
        Map<Integer, Integer>m=new HashMap<>();
  int n=nums.length;
  int k=0;
  if(n!=1){ 
  while(k<=n){
if(!m.containsKey(nums[k])){
    m.put(nums[k],1);
}
else{
    m.put(nums[k],m.get(nums[k])+1);
    if(m.get(nums[k])>n/2)
    return nums[k];
}

    k++;
  }

  }
  return nums[0];
    }
}