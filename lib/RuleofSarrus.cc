extern "C" {
    #include "RuleofSarrus.h"
}

float RuleofSarrus( float mat[][3])
{
    int i; 
    double det = 0;
    double P1, P2, P3, diag1, diag2;
    
    P1 = P2 = P3 = 1;
    for(i = 0; i<3; i++)
    {
    	int col;
    	P1 *= mat[i][i];
    	
    	col = ( (i+1)>2? (i+1)/2-1: i+1 );
    	P2 *= mat[i][col];
    	
    	col = ( (i+2)>2? (i+2)/2-1: i+2 );
    	P3 *= mat[i][col];
    }
    diag1 = P1 + P2 + P3;
    
    P1 = P2 = P3 = 1;
    for(i = 2; i>-1; i--)
    {
    	int col;
    	col = ( (3-i-1)>2? (3-i-1)/2-1: 3-i-1 );
    	P1 *= mat[i][col];
    	
    	col = ( (4-i-1)>2? (4-i-1)/2-1: 4-i-1 );
    	P2 *= mat[i][col];
    	
    	col = ( (5-i-1)>2? (5-i-1)/2-1: 5-i-1 );
    	P3 *= mat[i][col];
    }
    
    diag2 = P1 + P2 + P3;
    
    det = diag1 - diag2;
    
    return det;
}