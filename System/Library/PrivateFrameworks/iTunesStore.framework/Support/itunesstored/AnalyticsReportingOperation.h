/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:22:42 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSMetricsEventController, NSString;

@interface AnalyticsReportingOperation : ISOperation {

	SSMetricsEventController* _controller;
	NSString* _directory;
	/*^block*/id _finishBlock;
	long long _insertTimestamp;

}

@property (copy) id finishBlock; 
-(BOOL)_runForReportingURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_shouldBackoffAfterError:(id)arg1 ;
-(void)_destroyOutputFile:(id)arg1 ;
-(id)_signatureWithData:(id)arg1 error:(id*)arg2 ;
-(BOOL)_shouldClearEventsDespiteError:(id)arg1 ;
-(id)init;
-(void)run;
-(id)_path;
-(id)uniqueKey;
-(void)setFinishBlock:(id)arg1 ;
-(id)initWithController:(id)arg1 ;
-(id)finishBlock;
@end

