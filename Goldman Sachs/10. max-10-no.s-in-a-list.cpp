void maxNumbers(vector<int> nums,int k){
    priority_queue<int,vector<int>,greater<int>> pq;
    //k=number of max numbers desired

    for(int i=0;i<nums.size();i++){

        pq.push(nums[i]);
        if(pq.size()>k){
            pq.pop();
        }
    }

    while(pq.size()){
        cout<<pq.top()<<endl;
        pq.pop();
    }
}