/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebUI/WebUI-Structs.h>
#import <libobjc.A.dylib/WBSFormAutoFillFrame.h>

@class WebFrame, NSString;

@interface WBUFormAutoFillFrameWK1 : NSObject <WBSFormAutoFillFrame> {

	WebFrame* _webFrame;

}

@property (nonatomic,readonly) WebFrame * webFrame;                 //@synthesize webFrame=_webFrame - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)autoFillFrameWithWebFrame:(id)arg1 ;
-(WebFrame *)webFrame;
-(BOOL)containsAnyFormElements;
-(id)committedURL;
-(void)enumerateChildFramesUsingBlock:(/*^block*/id)arg1 ;
-(OpaqueJSContextRef)jsContextForMetadataControllerScriptWorld;
-(OpaqueFormAutoFillFrameRef)frameRef;
-(id)pageMainFrame;
-(OpaqueJSValueRef)jsWrapperInMetadataControllerScriptWorldForNode:(id)arg1 ;
-(id)initWithWebFrame:(id)arg1 ;
@end

