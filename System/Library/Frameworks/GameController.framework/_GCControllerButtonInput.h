/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:52 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GCControllerButtonInput.h>

@class NSString;

@interface _GCControllerButtonInput : GCControllerButtonInput {

	/*^block*/id _valueChangedHandler;
	/*^block*/id _pressedChangedHandler;
	float _value;
	NSString* _descriptionName;

}
-(id)description;
-(float)value;
-(BOOL)_setValue:(float)arg1 ;
-(BOOL)_setValue:(float)arg1 queue:(id)arg2 ;
-(/*^block*/id)valueChangedHandler;
-(void)setValueChangedHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)pressedChangedHandler;
-(void)setPressedChangedHandler:(/*^block*/id)arg1 ;
-(id)initWithDescriptionName:(id)arg1 ;
@end
