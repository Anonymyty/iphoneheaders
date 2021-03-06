/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:22:40 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@protocol SKPaymentQueueClient;
@class SSPurchaseReceipt;

@interface ReceiptRefreshOperation : ISOperation {

	id<SKPaymentQueueClient> _client;
	SSPurchaseReceipt* _existingReceipt;
	unsigned long long _flags;
	/*^block*/id _resultBlock;

}

@property (copy) id resultBlock; 
-(id)_postBodyData;
-(BOOL)_isSandboxed;
-(id)initWithClient:(id)arg1 receiptFlags:(unsigned long long)arg2 ;
-(void)run;
-(void)setResultBlock:(id)arg1 ;
-(id)resultBlock;
@end

