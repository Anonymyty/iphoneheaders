/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:49:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NRDevice, NSString, NSObject;

@interface NRActiveDeviceAssertion : NSObject {

	BOOL _isActive;
	NRDevice* _device;
	NSString* _identifier;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) BOOL isActive;                                   //@synthesize isActive=_isActive - In the implementation block
@property (nonatomic,retain) NRDevice * device;                               //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)dealloc;
-(id)description;
-(BOOL)isActive;
-(void)invalidate;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setIsActive:(BOOL)arg1 ;
-(void)_invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithDevice:(id)arg1 identifier:(id)arg2 ;
-(void)setDevice:(NRDevice *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NRDevice *)device;
@end
