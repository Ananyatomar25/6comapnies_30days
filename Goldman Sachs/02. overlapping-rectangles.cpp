class Solution {
  public:
    int doOverlap(int l1[], int r1[], int l2[], int r2[]) {
        // one approach is to check if one rectangle lies above or 
        //on the left of other, in this case the rectangles
        //won't be overlapping

        
        // to check if one lies on the left of other 
        if(l1[0]>r2[0] || r1[0] <l2[0]) return 0;
        //to check if one lies above the other
        if(l1[1]<r2[1] || l2[1]<r1[1]) return 0;
         return 1;
    }
};