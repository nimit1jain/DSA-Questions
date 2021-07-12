class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
      int c=a^b;


int count=0;


while(c>0){


c=(c&(c-1));


count++;


} return count;
        
    }
};