// You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
// Increment the large integer by one and return the resulting array of digits.

//PREP
//P:interger array with digits
//R:integer array with digit changes
//E:
class Solution {
    public int[] plusOne(int[] digits) {
        //take last digit of list add 1 to it
        //if number becomes 10 then add0 to the list and take 1 carry
        //and add it to next number
        //do this untill carry ends
        //return new list
        int len=digits.length;
        int sum=digits[len-1]+1;
        int carry=0;
        int[] list=new int[len+1];
        System.out.println(sum);
        if(sum==10){
            digits[len-1]=0;
            carry=1;
            int j=0;
            for(int i=digits.length-2;i>-1;i--){
                     digits[i]=digits[i]+carry;
                    // System.out.println(list[i]);
                    if(digits[i]>9){
                        carry=digits[i]/10;
                        digits[i]=digits[i]%10;
                    System.out.println(digits[i]+" "+carry);
                    }else{
                        carry=0;
                    }
            }if(carry!=0){
                for(int i=digits.length-1;i>-1;i--){
                    list[i+1]=digits[i];
                }
                list[0]=carry;
            }else{
                list=digits;
            }
        }else{
            digits[len-1]=sum;
            list=digits;
        }
        return list;
    }
}
//plusOne([4,3,2,1]) O/P:[4,3,2,2]
//plusOne([9,9,9,9]) O/P:[1,0,0,0,0]