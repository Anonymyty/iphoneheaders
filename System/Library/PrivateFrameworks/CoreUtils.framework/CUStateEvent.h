/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface CUStateEvent : NSObject {

	NSString* _name;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
+(id)initialTransition;
+(id)enterState;
+(id)exitState;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSString *)name;
-(NSDictionary *)userInfo;
-(id)initWithName:(id)arg1 userInfo:(id)arg2 ;
@end

