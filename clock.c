# include<stdio.h>
# include<malloc.h>
# include<unistd.h>
# include<conio.h>



void print_clock(int sec,int min,int hr)
{
    do
    {
        printf("%d::%d::%d\n",hr,min,sec);
    } while (sleep(1));
    system("cls");
}

int main()
{
    int hr=0;
    int min=0;
    int sec=0;
    for (int i = 0; i >=0; i++)
    {
        sec++;
        print_clock(sec,min,hr);
        if(sec%60==0)
        {
            sec=0;
            min++;
            print_clock(sec,min,hr);
            if(min%60==0)
            {
                min=0;
                hr++;
                print_clock(sec,min,hr);
            }
        }
        sleep(1);

    }
    


}