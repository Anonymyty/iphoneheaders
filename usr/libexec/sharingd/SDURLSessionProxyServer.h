/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:29 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegatePrivate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegatePrivate.h>

@protocol OS_dispatch_queue, SDURLSessionProxyServerDelegate;
@class NSURLSession, NSURLSessionConfiguration, NSMutableDictionary, NSMutableSet, NSMutableArray, NSObject, NSString;

@interface SDURLSessionProxyServer : NSObject <NSURLSessionDataDelegatePrivate, NSURLSessionTaskDelegatePrivate> {

	NSURLSession* _session;
	NSURLSessionConfiguration* _configuration;
	NSMutableDictionary* _tasks;
	NSMutableDictionary* _tasksToIdentifiers;
	NSMutableDictionary* _taskIdentifiersToSequenceNumbers;
	NSMutableDictionary* _taskIdentifiersToBodyStreams;
	NSMutableDictionary* _taskIdentifiersToInitialBodyInputStreams;
	NSMutableDictionary* _taskIdentifiersToWaitingReasons;
	NSMutableSet* _taskIdentifiersRetainingInfraWiFi;
	NSMutableArray* _messagesToReSend;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _skipInvalidateMessage;
	BOOL _supportsRedirects;
	BOOL _implementsWillSendRequest;
	BOOL _implementsSessionAuthChallenge;
	BOOL _implementsTaskAuthChallenge;
	BOOL _implementsWillPerformRedirection;
	BOOL _implementsDidReceiveResponse;
	NSString* _identifier;
	NSString* _uuidString;
	id<SDURLSessionProxyServerDelegate> _delegate;

}

@property (copy) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSString * uuidString;                                         //@synthesize uuidString=_uuidString - In the implementation block
@property (readonly) id<SDURLSessionProxyServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)setUuidString:(NSString *)arg1 ;
-(id)baseMessage;
-(id)descriptionForTaskWithIdentifier:(unsigned long long)arg1 ;
-(id)taskMessageForIdentifier:(unsigned long long)arg1 ;
-(id)getTaskInformation;
-(void)devicesConnected;
-(void)handleMessage:(id)arg1 ofType:(unsigned short)arg2 withReply:(/*^block*/id)arg3 ;
-(void)handleFailedMessageSend:(id)arg1 ofType:(unsigned short)arg2 ;
-(void)obliterate;
-(long long)messagePriorityForTaskWithIdentifier:(unsigned long long)arg1 ;
-(id)initWithConfiguration:(id)arg1 uuidString:(id)arg2 options:(unsigned long long)arg3 delegate:(id)arg4 ;
-(void)resendPendingMessage:(id)arg1 ;
-(void)handleDataTaskWithRequestMessage:(id)arg1 forTaskIdentifier:(unsigned long long)arg2 withReply:(/*^block*/id)arg3 ;
-(void)handleCancelTaskMessage:(id)arg1 forTaskIdentifier:(unsigned long long)arg2 ;
-(void)handleSuspendTaskMessage:(id)arg1 forTaskIdentifier:(unsigned long long)arg2 ;
-(void)handleResumeTaskMessage:(id)arg1 forTaskIdentifier:(unsigned long long)arg2 withReply:(/*^block*/id)arg3 ;
-(void)handleSetDescriptionMessage:(id)arg1 forTaskIdentifier:(unsigned long long)arg2 ;
-(void)handleSetPriorityMessage:(id)arg1 forTaskIdentifier:(unsigned long long)arg2 ;
-(void)handleInvalidateMessage:(id)arg1 ;
-(void)handleUploadBodyDataMessage:(id)arg1 forTaskIdentifier:(unsigned long long)arg2 withReply:(/*^block*/id)arg3 ;
-(void)releaseInfraWiFiForTaskIfNecessary:(unsigned long long)arg1 ;
-(BOOL)shouldRetainInfraWiFi;
-(void)retainInfraWiFiForTaskWithIdentifier:(unsigned long long)arg1 ;
-(void)_URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_URLSession:(id)arg1 task:(id)arg2 getAuthHeadersForResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3 ;
-(void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 ;
-(NSString *)uuidString;
-(id<SDURLSessionProxyServerDelegate>)delegate;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _isWaitingForConnectionWithReason:(long long)arg3 ;
@end

