    public : Difference(vector<int> a){
          elements = a;
    }
    
    public : void computeDifference() {
        int n = elements.size();
        int max = 1;
        int min = 100;
        
        for (int i = 0; i < n; i++){
            
            if(elements[i] < min){
                min = elements[i];
            }
            if(elements[i] > max){
                max = elements[i];
            }    
        }
        maximumDifference = max - min;
    }