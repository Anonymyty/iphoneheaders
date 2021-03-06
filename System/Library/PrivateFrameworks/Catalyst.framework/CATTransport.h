/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:22 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CATTransportDelegate;
@class CATStateMachine, CATOperationQueue, NSString;

@interface CATTransport : NSObject {

	CATStateMachine* mFSM;
	CATOperationQueue* mMessageQueue;
	CATOperationQueue* mDelegationQueue;
	CATTransport* mStrongSelf;
	NSString* _name;
	id<CATTransportDelegate> _delegate;

}

@property (nonatomic,copy) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (assign,nonatomic,__weak) id<CATTransportDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)suspendConnection;
-(void)resumeConnection;
-(void)setDelegate:(id<CATTransportDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id<CATTransportDelegate>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)invalidate;
-(void)suspend;
-(void)resume;
-(void)sendMessage:(id)arg1 ;
-(void)sendHelloMessageAndResumeQueue;
-(void)enqueueSendForMessage:(id)arg1 ;
-(void)resumeQueueAndConnection;
-(void)suspendQueueAndConnection;
-(void)didReceiveMessage:(id)arg1 ;
-(void)enqueueDelegateDidConnect;
-(void)didInterruptWithError:(id)arg1 ;
-(void)enqueueDelegateCouldNotConnectWithError:(id)arg1 ;
-(void)enqueueReceiveForMessage:(id)arg1 ;
-(void)enqueueDelegateDidInterruptWithError:(id)arg1 ;
-(void)cancelAndResumeQueuesAndEnqueueInvalidateConnection;
-(void)invalidSendForMessage:(id)arg1 ;
-(void)didInvalidate;
-(void)enqueueDelegateDidInvalidateAndFinalize;
-(void)delegateDidResume;
-(id)operationToSendMessage:(id)arg1 ;
-(void)resumeQueue;
-(void)suspendQueue;
-(void)enqueueDelegateDidReceiveMessage:(id)arg1 ;
-(void)invalidateConnection;
-(void)delegateDidInvalidate;
@end

