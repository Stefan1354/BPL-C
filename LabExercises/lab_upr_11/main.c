#include <stdio.h>
#include <stdlib.h>

//1. Napishete programa, koqto definira struktura kutiq(box).Strukturata sudurza poleta:
//shirochina (width)
//dulzina (length)
//vishochina(height)
//obem(volume).
//Poleto obem se izcishlqva da se deklarira masiv ot tip struktura kutiq s 10 elementa, da se zapulnqt
//elementite na masiva sus stoinosti, koito se vavezdat ot potrebitelq.
//Da se printira informaciq za kutiite s nai-maluk i nai-golqm obem.


//typedef struct Box
//{
//    int height;
//    int width;
//    int length;
//    int volume;
//} box;
//
//int calc_volume(int height,  int width, int length)
//{
//    return height * width * length;
//}
//
//void print_box(struct Box *box)
//{
//    printf("\nHeight: %d \t", box->height);
//    printf("Widtht: %d \t", box->width);
//    printf("Length: %d \t", box->length);
//    printf("Volume: %d \t", box->volume);
//}
//
//int main()
//{
//    box boxes[5];
//
//    for (int i = 0; i < 5; i++)
//    {
//        int height, width, length;
//        printf("\nbox[%d].height = ", i+1);
//        scanf("%d", &height);
//        printf("box[%d].width = ", i+1);
//        scanf("%d", &width);
//        printf("box[%d].length = ", i+1);
//        scanf("%d", &length);
//
//        boxes[i].height = height;
//        boxes[i].width = width;
//        boxes[i].length= length;
//        boxes[i].volume = calc_volume(height, width, length);
//
//    }
//
//    box minBox, maxBox;
//    minBox = boxes[0];
//    maxBox = boxes[0];
//    for (int i = 0; i < 10; i++)
//    {
//        if (boxes[i].volume < minBox.volume)
//            minBox = boxes[i];
//        if (boxes[i].volume > maxBox.volume)
//            maxBox = boxes[i];
//    }
//    printf("The box with the biggest volume is: ");
//    print_box(&maxBox);
//    printf("\nThe box with the smallest volume is: ");
//    print_box(&minBox);
//    return 0;
//}


typedef struct Box
{
    int height;
    int width;
    int length;
    int volume;
}box;


int calc_volume(int width, int height, int length)
{
    return width*height*length;
}

void print_box(struct Box *box)
{
    printf("\nHeight %d\t", box->height);
    printf("\nWidth %d\t", box->width);
    printf("\nLength %d\t", box->length);
    printf("Volume %d\t", box->volume);
}

int main()
{
    box boxes[5];

    printf("Enter 5 elements: \n");

    for(int i=0; i<5; i++)
    {
        int height, width, length;
        printf("Enter %d height", i+1);
        scanf("%d", &height);
        printf("\nEnter %d width", i+1);
        scanf("%d", &width);
        printf("\nEnter %d length", i+1);
        scanf("%d", &length);

        boxes[i].height = height;
        boxes[i].width = width;
        boxes[i].length = length;
        boxes[i].volume = calc_volume(height, width, length);
    }

box MinBox, MaxBox;
MinBox = boxes[0];
MaxBox = boxes[0];
for(int i=0; i<5; i++)
{
    if(boxes[i].volume < MinBox.volume)
        MinBox = boxes[i];
    if(boxes[i].volume > MaxBox.volume)
        MaxBox = boxes[i];
}

printf("The box with biggest volume is ");
print_box(&MaxBox);
printf("The box with minimum volume is ");
print_box(&MinBox);
    return 0;
}

