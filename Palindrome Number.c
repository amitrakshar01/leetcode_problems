bool isPalindrome(int x){
     int d=x;
     long int rev=0;
     if(x<0){
        return false;
}
   
     else{
        while(x!=0){
            int temp=0;
            
            temp=x%10;
            rev=rev*10+temp;
            x=x/10;
    }
        if(rev==d){
            return true;
    }
        else{
            return false;
    }
}
}
void main(){
    isPalindrome(121);
}