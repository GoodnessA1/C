#!/bin/env node

interface Person {
	name: string;
	age: number;
	isMale: boolean;
}

const person1: Person = {
	name: 'Goodness',
	age: 17,
	isMale: true
}

console.log(person1);
console.log(person1.name)
console.log(person1.age)
