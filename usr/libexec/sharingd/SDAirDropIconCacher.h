/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:28 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SDAirDropIconCacherDelegate;
#import <sharingd/sharingd-Structs.h>
@class NSString, NSNetService;

@interface SDAirDropIconCacher : NSObject {

	long long _bytesWritten;
	CFReadStreamRef _readStream;
	CFWriteStreamRef _writeStream;
	id _iconData;
	NSString* _iconHash;
	NSNetService* _netService;
	id<SDAirDropIconCacherDelegate> _delegate;

}

@property (copy) id iconData;                                             //@synthesize iconData=_iconData - In the implementation block
@property (copy) NSString * iconHash;                                     //@synthesize iconHash=_iconHash - In the implementation block
@property (retain) NSNetService * netService;                             //@synthesize netService=_netService - In the implementation block
@property (__weak) id<SDAirDropIconCacherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)notifyFetchWithError:(id)arg1 ;
-(void)notifyStoreWithError:(id)arg1 ;
-(id)airDropCacheFileURL;
-(void)cancelReadStream;
-(void)cancelWriteStream;
-(void)handleReadStreamEvent:(CFReadStreamRef)arg1 type:(unsigned long long)arg2 ;
-(void)handleWriteStreamEvent:(CFWriteStreamRef)arg1 type:(unsigned long long)arg2 ;
-(void)store;
-(id)iconData;
-(void)cancel;
-(void)setDelegate:(id<SDAirDropIconCacherDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SDAirDropIconCacherDelegate>)delegate;
-(void)fetch;
-(void)setIconData:(id)arg1 ;
-(NSString *)iconHash;
-(void)setIconHash:(NSString *)arg1 ;
-(NSNetService *)netService;
-(void)setNetService:(NSNetService *)arg1 ;
@end
