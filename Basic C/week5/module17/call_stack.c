void world(){
    printf("world\n");
}
void hello(){
    printf("Hello\n");
    world();
}
int main(){
    hello();
    printf("end");
}