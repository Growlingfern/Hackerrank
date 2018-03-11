class Student : public Person{ 
    
    private: vector<int> testScores; 
    
    public:
        Student(string fn, string ln, int id, vector<int> scores) : Person(fn,ln,id), testScores (scores) {}

    public : char calculate()
    {
        int sum=0;
        char ch='O';
        for(int i=0;i<testScores.size();i++){
            sum=sum+testScores[i];
        }
        int total=sum/testScores.size();

        if(total<=100 && total>=90)
            ch= 'O';
        else if(total<90 && total>=80)
            ch= 'E';
        else if(total<80 && total>=70)
            ch= 'A';
        else if(total<70 && total>=55)
            ch= 'P';
        else if(total<55 && total>=40)
            ch= 'D';
        else if(total<40)
            ch= 'T';     
        return ch;           
    }
      
};