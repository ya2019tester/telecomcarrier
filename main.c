#include <stdio.h>
#include <stdlib.h>

typedef struct Datapackage {

int position;

} Datapackage;

void Read(Datapackage *msg){
    
    printf("Position is %d",msg->position);
}


int Write(Datapackage *msg) {
    
    return msg->position+1;
}


int main()
{
   Datapackage msg;
   
   int val=Write(&msg);
   msg.position=val;
   Read(&msg);
   
   val=Write(&msg);
   msg.position=val;
   Read(&msg);
   
   return 0;
}