/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:34 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class WKBrowsingContextHandle, _WKRemoteObjectRegistry, NSString, WKBackForwardList, NSURL, NSArray;

@interface WKBrowsingContextController : NSObject {

	WeakObjCPtr<id<WKBrowsingContextHistoryDelegate> > _historyDelegate;
	RefPtr<WebKit::WebPageProxy>* _page;
	unique_ptr<PageLoadStateObserver, std::__1::default_delete<PageLoadStateObserver> >* _pageLoadStateObserver;
	WeakObjCPtr<id<WKBrowsingContextLoadDelegate> > _loadDelegate;
	WeakObjCPtr<id<WKBrowsingContextPolicyDelegate> > _policyDelegate;
	RetainPtr<_WKRemoteObjectRegistry>* _remoteObjectRegistry;

}

@property (readonly) OpaqueWKPageRef _pageRef; 
@property (readonly) BOOL hasOnlySecureContent; 
@property (assign) unsigned long long paginationMode; 
@property (assign) BOOL paginationBehavesLikeColumns; 
@property (assign) double pageLength; 
@property (assign) double gapBetweenPages; 
@property (readonly) unsigned long long pageCount; 
@property (nonatomic,readonly) WKBrowsingContextHandle * handle; 
@property (nonatomic,readonly) _WKRemoteObjectRegistry * _remoteObjectRegistry; 
@property (nonatomic,readonly) int processIdentifier; 
@property (__weak) id<WKBrowsingContextLoadDelegate> loadDelegate; 
@property (__weak) id<WKBrowsingContextPolicyDelegate> policyDelegate; 
@property (__weak) id<WKBrowsingContextHistoryDelegate> historyDelegate; 
@property (copy) NSString * applicationNameForUserAgent; 
@property (copy) NSString * customUserAgent; 
@property (readonly) BOOL canGoForward; 
@property (readonly) BOOL canGoBack; 
@property (readonly) WKBackForwardList * backForwardList; 
@property (getter=isLoading,readonly) BOOL loading; 
@property (readonly) NSURL * activeURL; 
@property (readonly) NSURL * provisionalURL; 
@property (readonly) NSURL * committedURL; 
@property (readonly) NSURL * unreachableURL; 
@property (readonly) double estimatedProgress; 
@property (readonly) NSString * title; 
@property (readonly) NSArray * certificateChain; 
@property (assign) double textZoom; 
@property (assign) double pageZoom; 
+(id)_browsingContextControllerForPageRef:(OpaqueWKPageRef)arg1 ;
+(void)unregisterSchemeForCustomProtocol:(id)arg1 ;
+(id)customSchemes;
+(void)registerSchemeForCustomProtocol:(id)arg1 ;
-(unsigned long long)pageCount;
-(unsigned long long)paginationMode;
-(void)setPaginationMode:(unsigned long long)arg1 ;
-(double)pageLength;
-(void)setPageLength:(double)arg1 ;
-(double)gapBetweenPages;
-(void)setGapBetweenPages:(double)arg1 ;
-(int)processIdentifier;
-(OpaqueWKPageRef)_pageRef;
-(void)setPaginationBehavesLikeColumns:(BOOL)arg1 ;
-(BOOL)paginationBehavesLikeColumns;
-(_WKRemoteObjectRegistry *)_remoteObjectRegistry;
-(WKBrowsingContextHandle *)handle;
-(id<WKBrowsingContextHistoryDelegate>)historyDelegate;
-(void)loadAlternateHTMLString:(id)arg1 baseURL:(id)arg2 forUnreachableURL:(id)arg3 ;
-(void)reloadFromOrigin;
-(void)setApplicationNameForUserAgent:(NSString *)arg1 ;
-(void)setHistoryDelegate:(id<WKBrowsingContextHistoryDelegate>)arg1 ;
-(void)dealloc;
-(void)reload;
-(NSString *)title;
-(void)setPolicyDelegate:(id<WKBrowsingContextPolicyDelegate>)arg1 ;
-(void)setCustomUserAgent:(NSString *)arg1 ;
-(void)loadRequest:(id)arg1 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 ;
-(WKBackForwardList *)backForwardList;
-(BOOL)isLoading;
-(BOOL)canGoBack;
-(BOOL)canGoForward;
-(NSString *)customUserAgent;
-(void)stopLoading;
-(void)goBack;
-(void)goForward;
-(NSURL *)unreachableURL;
-(double)estimatedProgress;
-(void)loadRequest:(id)arg1 userData:(id)arg2 ;
-(void)loadFileURL:(id)arg1 restrictToFilesWithin:(id)arg2 userData:(id)arg3 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 userData:(id)arg3 ;
-(void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 userData:(id)arg5 ;
-(void)loadFileURL:(id)arg1 restrictToFilesWithin:(id)arg2 ;
-(void)goToBackForwardListItem:(id)arg1 ;
-(NSURL *)activeURL;
-(NSURL *)provisionalURL;
-(BOOL)hasOnlySecureContent;
-(NSArray *)certificateChain;
-(double)textZoom;
-(void)setTextZoom:(double)arg1 ;
-(double)pageZoom;
-(void)setPageZoom:(double)arg1 ;
-(id)_initWithPageRef:(OpaqueWKPageRef)arg1 ;
-(id<WKBrowsingContextLoadDelegate>)loadDelegate;
-(void)setLoadDelegate:(id<WKBrowsingContextLoadDelegate>)arg1 ;
-(id<WKBrowsingContextPolicyDelegate>)policyDelegate;
-(NSURL *)committedURL;
-(NSString *)applicationNameForUserAgent;
@end

