function times_table(a) {
	let i = 0;

	do {
		b = i * a;
		console.log(i ,"*", a, " = ", b);
		i++;
	} while(i <= a)
}

var num = 10;
times_table(num);
