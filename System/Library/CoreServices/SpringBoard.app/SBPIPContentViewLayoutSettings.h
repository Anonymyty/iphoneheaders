/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:23 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSMutableArray;

@interface SBPIPContentViewLayoutSettings : NSObject {

	long long _position;
	double _size;
	NSMutableArray* _observers;

}

@property (assign,nonatomic) long long position; 
@property (assign,nonatomic) double size; 
+(long long)currentContentViewPosition;
+(CGSize)currentContentViewSizeForAspectRatio:(CGSize)arg1 ;
+(CGSize)defaultContentViewSizeForAspectRatio:(CGSize)arg1 ;
+(void)setContentViewSize:(CGSize)arg1 ;
+(CGSize)minimumContentViewSizeForAspectRatio:(CGSize)arg1 ;
+(CGSize)maximumContentViewSizeForAspectRatio:(CGSize)arg1 ;
+(void)setContentViewPosition:(long long)arg1 ;
+(void)addObserver:(id)arg1 ;
+(void)removeObserver:(id)arg1 ;
+(id)_sharedInstance;
-(double)size;
-(id)init;
-(void)setSize:(double)arg1 ;
-(void)setPosition:(long long)arg1 ;
-(long long)position;
-(void)_notifyObservers;
-(void)_addObserver:(id)arg1 ;
-(void)_removeObserver:(id)arg1 ;
@end

