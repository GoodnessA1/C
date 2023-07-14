#!/bin/env node


class Rectangle {
	length: number;
	breadth: number;

	constructor (l: number, b: number) {
		this.length = l;
		this.breadth = b;
	}

	sides() {
		console.log(`Length: ${this.length} and Breadth: ${this.breadth}`);
	}

	area() {
		var a: number = this.length * this.breadth;
		console.log("Area: " + a);
	}

	perimeter() {
		var p: number = 2 * (this.length + this.breadth);
		console.log("Perimeter: " + p);
	}
}

var rect = new Rectangle(8, 6);
console.log(rect.sides());
console.log(rect.area());
console.log(rect.perimeter());
