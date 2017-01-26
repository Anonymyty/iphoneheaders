/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/WebKitLegacy-Structs.h>
#import <WebCore/WAKView.h>
#import <WebKitLegacy/WebDocumentView.h>
#import <WebKitLegacy/WebDocumentElement.h>

@class NSString;

@interface WebPlainWhiteView : WAKView <WebDocumentView, WebDocumentElement>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(oneway void)release;
-(oneway void)_webcore_releaseOnWebThread;
-(void)dataSourceUpdated:(id)arg1 ;
-(void)viewWillMoveToHostWindow:(id)arg1 ;
-(void)viewDidMoveToHostWindow;
-(id)elementAtPoint:(CGPoint)arg1 allowShadowContent:(BOOL)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(void)layout;
-(void)setNeedsLayout:(BOOL)arg1 ;
-(id)elementAtPoint:(CGPoint)arg1 ;
@end
