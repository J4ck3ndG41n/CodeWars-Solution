function testing(actual, expected) {
    Test.assertEquals(actual, expected);
}

describe("Basic tests",function() {
it("easyLine",function() {
    testing(easyLine(7), 8);
    testing(easyLine(13), 16);
    testing(easyLine(17), 22);
    testing(easyLine(19), 24);
})})
