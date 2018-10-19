/*This program was created for the purpose of asking the user to enter a string so that it can be reversed
 *
 * Author: Angel Daniel Olvera Perales
 * Date: October 17
 * email:angelolvera00@gmail.com
 */
#include <stdio.h>
int main() {
//Variables are declared, where I state the maximum values for the string and its reversed form.
//Start and End will declare where the string begins and finishes. Count is used to figure out the total characters in
//the string.
    char string[100000];
    char reverse[100000];
    int start;
    int end;
    int count=0;
//The user is asked to enter a string.
    printf("Enter a string: \n");
    gets(string);
//Count will be scanning all characters entered in the string until it reaches the end.
    while(string[count] !='\0') {
        count++;
    }
//The end will be active when it recognizes that count ended, end will be marked at one space before count ends because
//count ends at the empty space, so end must move one back.
    end = count -1;
//The for loop will be the one responsible for reorganizing the string. It will invert the positions where the string
//begins and ends.
    for(start=0;start<count;start++){
        reverse[start] = string[end];
        end--;
    }
//The starting and ending positions are changed.
    reverse[start]='\0';
//The string is printed in reverse order.
    printf("String Backwards is %s\n", reverse);
    return 0;
}