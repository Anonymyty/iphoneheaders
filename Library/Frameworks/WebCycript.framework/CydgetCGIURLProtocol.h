/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Library/Frameworks/WebCycript.framework/WebCycript
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCycript/WebCycript-Structs.h>
#import <CFNetwork/NSURLProtocol.h>

@class NSFileHandle;

@interface CydgetCGIURLProtocol : NSURLProtocol {

	int pid_;
	CFHTTPMessageRef http_;
	NSFileHandle* handle_;

}
+(BOOL)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
-(void)onRead:(id)arg1 ;
-(void)stopLoading_;
-(void)stopLoading;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(void)startLoading;
@end
