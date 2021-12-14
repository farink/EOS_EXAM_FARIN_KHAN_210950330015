#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

 int main(int argc, char const *argv[])

 {
     int pid_t;
     int pid;
     char buff;
     int fd_c1,fd_c2, fd_p;
     char P[20];

     pid_t=fork();

     if(pid_t==0)
     {
         printf("Child process 1 PID : %d\n",getpid());

         fd_c1=open("dictionary.txt", O_RDONLY | S_IRUSR);

            if(fd_c1==-1)
            {
                printf("Error opening file");
                close(fd_c1);
                return 0;
            }
            while(read(fd_c1, &buff, 1))
	{
		if(&buff==P)
        {
            printf("FOUND");
        }
        else
        printf("Key not found");
	}

                
     }

     if(pid_t>0)
     pid=fork();
        {
            printf("Parent prosess PID: %d\n", getpid());

            fd_p=open("dictionary.txt", O_RDONLY);
            if(fd_c1==-1)
            {
                printf("Error opening file");
                close(fd_p);
                return 0;
            }
            printf("Enter PATTERN to search \n");
            scanf("%s",P);
        }

             if(pid==0)
            {
                printf("child proces 2 PID: %d\n", getpid());

                fd_c1=open("dictionary.txt", O_RDONLY | S_IRUSR);

             
            //searching 
                   while(read(fd_c2, &buff, 1))

	{
		if(&buff==P)
        {
            printf("FOUND");
        }
        else 
        printf("Key not found")
	}
            }
        
close(fd_c1);
close(fd_c2);
close(fd_p);

 }