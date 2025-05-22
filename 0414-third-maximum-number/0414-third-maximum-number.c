int thirdMax(int* nums, int numsSize) {
    int max1=INT_MIN, max2=INT_MIN, max3=INT_MIN;
    int count=0;

    for(int i=0;i<numsSize;i++){
        int num=nums[i];

        if((count>=1 && num==max1)|| (count>=2 && num==max2)|| (count>=3&& num==max3)){
            continue;
        }

        if(count==0 || num>max1){
            max3=max2;
            max2=max1;
            max1=num;
            count++;
        }
        else if(count==1 || num>max2){
            max3=max2;
            max2=num;
            count++;
        }
        else if(count==2 || num>max3){
            max3=num;
            count++;
        }

    }
    return (count>=3)? max3:max1;
}