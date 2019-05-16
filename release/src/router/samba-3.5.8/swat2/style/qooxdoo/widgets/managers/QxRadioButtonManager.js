/* Copyright (c): 2002-2005 (Germany): United Internet, 1&1, GMX, Schlund+Partner, Alturo */
function QxRadioButtonManager(vName,vMembers){QxTarget.call(this);this._items=[];this._managerId=this.classname+(++QxRadioButtonManager._managerCount);if(isValid(vName)){this.setName(vName);};if(isValid(vMembers)){QxRadioButtonManager.prototype.add.apply(this,vMembers);};};QxRadioButtonManager._managerCount=0;QxRadioButtonManager.extend(QxManager,"QxRadioButtonManager");QxRadioButtonManager.addProperty({name:"selected",type:Object});QxRadioButtonManager.addProperty({name:"name",type:String});proto.getItems=function(){return this._items;};proto.add=function(){var a=arguments;var l=a.length;var lastOne=a[l-1];if(lastOne instanceof QxWidget){var _b4;}else {var _b4=lastOne;l--;};var oRadioButton;for(var i=0;i<l;i++){oRadioButton=a[i];if(this._items.contains(oRadioButton)){return;};this._items.push(oRadioButton);oRadioButton.setGroup(this,_b4);if(oRadioButton.getChecked()){this.setSelected(oRadioButton,_b4);};oRadioButton.setEnabled(this.getEnabled(),_b4);oRadioButton.setName(this.getName(),_b4);};};proto.remove=function(oRadioButton,_b4){this._items.remove(oRadioButton);oRadioButton.setGroup(null,_b4);if(oRadioButton.getChecked()){this.setSelected(null);};};proto._modifySelected=function(_b1,_b2,_b3,_b4){if(_b2&&_b2.getChecked()){_b2.setChecked(false,_b4);};if(_b1&&!_b1.getChecked()){_b1.setChecked(true,_b4);};return true;};proto._modifyEnabled=function(_b1,_b2,_b3,_b4){for(var i=0;i<this._items.length;i++){this._items[i].setEnabled(_b1,_b4);};return true;};proto._modifyName=function(_b1,_b2,_b3,_b4){for(var i=0;i<this._items.length;i++){this._items[i].setName(_b1,_b4);};return true;};proto.selectNext=function(oRadioButton){var index=this._items.indexOf(oRadioButton);if(index==-1)return;var i=0;var l=this._items.length;index=(index+1)% l;while(i<l&&! this._items[index].getEnabled()){index=(index+1)% l;i++;};this._selectByIndex(index);};proto.selectPrevious=function(oRadioButton){var index=this._items.indexOf(oRadioButton);if(index==-1)return;var i=0;var l=this._items.length;index=(index-1+l)% l;while(i<l&&! this._items[index].getEnabled()){index=(index-1+l)% l;i++;};this._selectByIndex(index);};proto._selectByIndex=function(index){if(this._items[index].getEnabled()){this.setSelected(this._items[index]);this._items[index].setFocused(true);};};proto.dispose=function(){if(this._disposed){return;};if(this._items){for(var i;i<this._items.length;i++){this._items[i].dispose();delete this._items[i];};};delete this._items;delete this._managerId;return QxTarget.prototype.dispose.call(this);};