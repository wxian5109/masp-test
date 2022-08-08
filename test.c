#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check_authentication(char *password) {

int auth_flag = 0;
char *password_buffer;
char *dept;

password_buffer = (char *) malloc (16);
dept = (char *) malloc(10);


strcpy(password_buffer, password);

if(strcmp(password_buffer, "AsiaPacificInst") == 0){
	printf("Your Department:");
	gets(dept);
	printf("\nUser from Department:\n");
	printf(dept);
	if(strcmp(dept,"NSF")==0) {
		auth_flag = 1;
		}
	}		

	else if(strcmp(password_buffer, "AsiaPacificUni") == 0){
	printf("Your Department:");
	gets(dept);
	printf("\nUser from Department:\n");
	printf(dept);
	if(strcmp(dept,"TM")==0) {
	auth_flag = 1;	

		}
	}
else {
auth_flag = 0;

}

return auth_flag;
}

int main() {
char errmsg[512];
char outbuf[512];
char user[20];
char password[20];
printf("Username: ");
gets(user);

if (strcmp(user,"Adm1n") == 0){
	printf("Authorised User\n");
	sprintf(errmsg, "Authorised User %400s",user);
	sprintf(outbuf,errmsg);
	printf("Password: ");
	gets(password);

	if(check_authentication(password)) {
	
		printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
		printf(" Access Granted.\n");
		printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	} else {
		printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
		printf("\nAccess Denied.\n");
		printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
		}
	}
	else {
		printf("Unauthorised user!\n");
		exit(0);
		}
	}
