class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	    // code here
	    int hash[127]={0};
	    
	    for(int i=0;i<n;i++){
	        hash[nuts[i]-'\0']++;
	    }
	    for(int i=0;i<n;i++){
	        hash[bolts[i]-'\0']++;
	    }
	    int j=0;
	    for(int i=0;i<=127;i++){
	        if(hash[i]==2){
	            nuts[j++]=i;
	        }
	    }
	        j=0;
	    for(int i=0;i<=127;i++){
	        if(hash[i]==2){
	            bolts[j++]=i;
	        }
	        
	    }
	    
	    
	    
	}

};