/* Name: Namuganza Maria Gorret */
/* Student Number: 25/U/BIO/027/GV*/

#include <stdio.h>

int main(void)
{
    float amountToSend;
    printf("Enter amount to send: %f\n", amountToSend);
    scanf("%f", &amountToSend);// reading the fee to be sent and storing in the varaible amountToSend
    float transactionFee;
    printf("Enter transaction fee(%): %.2f\n", transactionFee);
    scanf("%f", &transactionFee);// reading the transaction fee and storing it in the variable tansactionFee
    
    float feeAmount, totalDeducted;
    
    feeAmount = (transactionFee/100)*amountToSend;
    totalDeducted = amountToSend + feeAmount;
    
    printf("Transaction fee:%.2f\n", feeAmount);
    printf("Total deducted: %.2f\n", totalDeducted);

    return 0;
}
