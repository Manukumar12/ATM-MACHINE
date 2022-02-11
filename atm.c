/*ATM MACHINE*/
#include<stdio.h>

void bc (int *rup)
{

printf(" The account balance in Rs : %d\n",*rup);

}
void hbc(int *rup)
{
printf("खाते में शेष राशि : %d\n",*rup);
}
void dep(int*rup)
{
int dm;
printf("Enter the amount to be Deposited:\n");
scanf("%d",&dm);
*rup=dm+*rup;
printf("your current balance is:%d\n",*rup);

}
void hdep(int *rup)
{
int dm;
printf("जमा की जाने वाली राशि दर्ज करें\n");
scanf("%d",&dm);
*rup=dm+*rup;
printf("आपकी वर्तमान शेष राशि है:%d\n",*rup);
}
void cw(int *rup)
{
int cm;
printf("Insert the amount to be withdrawal : \n");
scanf("%d",&cm);
if(cm%100!=0)
{
printf("You r requested to insert the amount in mutiples of 100 \n");
}
else
{
if(cm>*rup)
{
printf("Insufficient balance\nYour current balance is :%d\n",*rup);
}
else
{
printf("you can mow collect the cash\n");
*rup-=cm;
printf("The current balance is %d \n",*rup);
}
}
}
void hcw(int *rup)
{
int cm;
printf("निकासी की जाने वाली राशि डालें :\n");
scanf("%d",&cm);
if(cm%100!=0)
{
printf("आपने 100 . के गुणकों में राशि डालने का अनुरोध किया है\n");

}
else
{
if(cm>*rup)
{
printf("अपर्याप्त शेषराशि\nआपका वर्तमान शेष है :%d\n",*rup);
}
else
{
printf("अब आप नकद ले सकते हैं\n");
*rup-=cm;
printf("वर्तमान राशि है %d \n",*rup);
}
}
}
void exit1()
{
printf("We are thankful to you for USING our ATM services!\n");

}
void hexit()
{
printf("हमारी एटीएम सेवाओं का उपयोग करने के लिए हम आपके आभारी हैं!\n");
}


void eng()
{ int rup=5000,pin,pin1=8765,p,choice;

printf("\n WELCOME TO PIN GENERATION SERVICE\n Do you want to change the pin or continue with previous one\n1.>Regenerate the pin\n2.>Continue with previous one.\n ");
scanf("%d",&choice);
if(choice==1)
{
printf("Enter your new 4-digit pin,that doesn't start with 0.\n");//it can be of any number of digit
scanf("%d",&pin);
if(pin<9999&&pin>1000)
printf("Congratulations your pin is generated\n______________________\n");
else
{
printf("An Error occured while genereting, by default you have to use your previous pin \n______________________\n");
pin=pin1;
}
}
else if(choice==2)
pin=pin1;
else
{
printf("Invalid choice\n By default you have to use your previous pin \n________________________\n");
pin=pin1;
}

printf(" Type your secret pin number to start your transaction\n");
scanf("%d",&p);
if(p!=pin)
{
printf("incorrect pin");
}
else
{
int t=1;
while(t--)
{

printf("****\nHello! Welcome to our ATM services\n");
printf("1. Balance Checking\n");
printf("2. Cash Withdrawl\n");
printf("3. Cash Deposition\n");
printf("4. EXIT\n");
printf("**\n");
int choice;
printf("Please proceed with your choice :\n");
scanf("%d",&choice);

switch(choice)
{
case 1:
bc(&rup);
break;


case 2:
cw(&rup);
break;

case 3:
dep(&rup);
break;

case 4:
exit1();
t--;
break;

default:
printf("INVALID CHOICE\n");

}
if(t==-1)
break;
else{

printf("\nWould you like to have another ATM transaction\n");
printf("1.YES------------------------2.NO\n");
int mn;
scanf("%d",&mn);
switch(mn)
{
case 1:
t++;
break;

case 2:
printf("THANK FOR USING OUR SERVICES");
break;
default:
break;
}
}
}


}


}
void hindi()
{ int rup=5000, pin,pin1=8765,p,choice;
printf("\nपिन जनरेशन सेवा में आपका स्वागत हे \nक्या आप पिन बदलना चाहते हैं या पिछले वाले के साथ जारी रखना चाहते हैं \n 1.>पिन को फिर से जनरेट करें \n2.>पिछले एक के साथ जारी रखें।\n ");
scanf("%d",&choice);
if(choice==1)
{
printf("अपना नया 4 अंकों का पिन डालें, जो 0 से शुरू नहीं होता है।\n");
scanf("%d",&pin);
if(pin<9999&&pin>1000)
printf("बधाई हो आपका पिन जनरेट हो गया\n_____________________\n" );
else
{
printf("जनरेट करते समय एक त्रुटि हुई, डिफ़ॉल्ट रूप से आपको अपने पिछले पिन का उपयोग करना होगा \n______________________\n");
}
}
else if(choice==2)
pin=pin1;
else
{
printf("अमान्य विकल्प\n डिफ़ॉल्ट रूप से आपको अपने पिछले पिन का उपयोग करना होगा\n_____________________\n");
pin=pin1;
}

printf("अपना गुप्त पिन नंबर टाइप करें\n");
scanf("%d",&p);
if(p!=pin)
{
printf("गलत पिन");
}
else
{
int t=1;
while(t--)
{


printf("****\nनमस्कार! हमारी एटीएम सेवाओं में आपका स्वागत है\n");
printf("1. बैलेंस चेकिंग\n");
printf("2. नकद निकासी\n");
printf("3. नकद जमा\n");
printf("4. बाहर जाएं\n");
printf("**\n");
int choice;
printf("कृपया अपने विकल्प के साथ आगे बढ़ें :\n");
scanf("%d",&choice);

switch(choice)
{
case 1:
hbc(&rup);
break;


case 2:
hcw(&rup);
break;

case 3:
hdep(&rup);
break;

case 4:
hexit();
t--;
break;

default:
printf("अमान्य विकल्प \n");

}
if(t==-1)
break;
else{

printf("\nक्या आप एक और एटीएम लेनदेन करना चाहेंगे\n");
printf("1.हाँ ------------------ 2.नहीं\n");
int mn;
scanf("%d",&mn);
switch(mn)
{
case 1:
t++;
break;

case 2:
printf("हमारी सेवाओं का उपयोग करने के लिए धन्यवाद");
break;
default:
break;
}
}
}


}


}

int main()
{
// int rup=5000;
printf("Choose your language--------------अपनी भाषा चुनिए");
printf("\n\n1.>English\n2.>हिन्दी\n");
int choice;
scanf("%d",&choice);
if(choice==1)
eng();
else if(choice==2)
hindi();
else
printf("Incorrect choice");

}
