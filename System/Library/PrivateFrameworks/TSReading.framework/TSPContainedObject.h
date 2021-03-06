/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:27:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSPObject;

@interface TSPContainedObject : NSObject {

	TSPObject* _owner;

}

@property (assign,nonatomic,__weak) TSPObject * owner;              //@synthesize owner=_owner - In the implementation block
-(id)documentRoot;
-(void)willModify;
-(void)willModifyForUpgrade;
-(TSPObject *)owner;
-(void)setOwner:(TSPObject *)arg1 ;
-(id)initWithOwner:(id)arg1 ;
@end

