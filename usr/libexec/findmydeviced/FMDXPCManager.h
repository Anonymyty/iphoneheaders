/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:09 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/findmydeviced
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSString;

@interface FMDXPCManager : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _fmdXPCListener;
	NSXPCListener* _fmdUserAgentXPCListener;

}

@property (nonatomic,retain) NSXPCListener * fmdXPCListener;                       //@synthesize fmdXPCListener=_fmdXPCListener - In the implementation block
@property (nonatomic,retain) NSXPCListener * fmdUserAgentXPCListener;              //@synthesize fmdUserAgentXPCListener=_fmdUserAgentXPCListener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)initializeXPC;
-(void)setFmdXPCListener:(NSXPCListener *)arg1 ;
-(NSXPCListener *)fmdXPCListener;
-(NSXPCListener *)fmdUserAgentXPCListener;
-(void)setFmdUserAgentXPCListener:(NSXPCListener *)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initSingleton;
@end

