/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CMGestureManager : NSObject {

	id _internal;

}

@property (copy) id gestureHandler; 
+(BOOL)isGestureServiceEnabled;
+(void)setGestureServiceEnabled:(BOOL)arg1 ;
+(BOOL)isGestureServiceAvailable;
-(void)dealloc;
-(id)init;
-(void)setGestureHandler:(id)arg1 ;
-(id)initWithPriority:(int)arg1 ;
-(id)gestureHandler;
@end

