#!/bin/env node

class Rectangle {
	constructor(height, width){
		this.height = height;
		this.width = width;
	}
	sides() {
		console.log(`length: ${this.height}`);
		console.log(`breadth: ${this.width}`);
	}
	calculate_area() {
		var area = this.width * this.height;
		console.log(`The area of the rectangle is ${area}`);
	}
	calculate_perimeter() {
		var p = 2 * (this.height + this.width);
		console.log(`The perimeter is: ${p}`);
	}
}

var rect = new Rectangle(3, 4);
rect.sides()
rect.calculate_area();
rect.calculate_perimeter();
