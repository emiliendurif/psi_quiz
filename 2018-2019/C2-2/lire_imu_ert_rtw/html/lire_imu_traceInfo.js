function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "lire_imu"};
	this.sidHashMap["lire_imu"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/BNO055 IMU Sensor"] = {sid: "lire_imu:1"};
	this.sidHashMap["lire_imu:1"] = {rtwname: "<Root>/BNO055 IMU Sensor"};
	this.rtwnameHashMap["<Root>/Scope"] = {sid: "lire_imu:2"};
	this.sidHashMap["lire_imu:2"] = {rtwname: "<Root>/Scope"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
