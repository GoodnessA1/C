#!/bin/env node
var Rectangle = /** @class */ (function () {
    function Rectangle(l, b) {
        this.length = l;
        this.breadth = b;
    }
    Rectangle.prototype.sides = function () {
        console.log("Length: ".concat(this.length, " and Breadth: ").concat(this.breadth));
    };
    Rectangle.prototype.area = function () {
        var a = this.length * this.breadth;
        console.log("Area: " + a);
    };
    Rectangle.prototype.perimeter = function () {
        var p = 2 * (this.length + this.breadth);
        console.log("Perimeter: " + p);
    };
    return Rectangle;
}());
var rect = new Rectangle(8, 6);
console.log(rect.sides());
console.log(rect.area());
console.log(rect.perimeter());
