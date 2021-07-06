//Code problem from https://code.dcoder.tech/question/5e1086efa1312802b296d39f

//Dcoded By: @author Saurav Chandra

/*Problem Description:
Bob has a floating point number N. He wants to set the precision for 2 digits after the decimal point for the number.
He is not good at coding, hence looking for your help.

Input:
The first line contains T, the number of test cases.
Next T line contains floating point number N.

Output:
Print N in a separate line after setting precision for 2 digits after the decimal point:

Constraints:
1 <= T <= 1000
1 <= N <= 10000

Sample Input:
1
713.166

Sample Output:
713.17
*/

#include <stdio.h>
#include <stdlib.h>

//Compiler version gcc  6.3.0

int main()
{
	printf("How many test cases do you want?: ");
    char in[50] = "";
    scanf("%s", &in);
    
    //T is the number of test cases.
    int T = atoi(in);

    
    printf("Please input %d test cases: ", T);
    
    int i = 1;
    float F = 0.0;
    while (i <= T)
    {
    	printf("\n Test case number %d: ", i);
        scanf("%s", &in);
        F = atof(in);
        printf("%0.2f\n", F);
        i = i + 1;
    }
  return 0;
}
