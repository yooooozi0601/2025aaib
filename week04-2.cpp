//week04-2.c 
int maximumCount(int* nums, int numsSize) {
    int pos=0,neg=0;
    for(int i=0; i<numsSize; i++){
        if( nums[i] >0 )pos++;//タ计
        if( nums[i] <0 )neg++;//璽计

    }
    if(pos>neg) return pos;//タ计ゑ耕,タ计
    else return neg;//ぃ礛,碞璽计
}
