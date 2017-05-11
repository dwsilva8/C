int main (){
	int i;
	float soma=0, valores;

 printf("Insira um valor: ");
    for(i=1;i<=5;i++)
    {
    
	scanf("%f", &valores);
	soma=valores+soma;
}
	printf("A somátoria é: %.2f",soma);
	
	return 0;
}
