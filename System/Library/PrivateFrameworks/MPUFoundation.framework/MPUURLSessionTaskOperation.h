/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUOperation.h>

@class NSURLSessionTask;

@interface MPUURLSessionTaskOperation : MPUOperation {

	NSURLSessionTask* _task;

}
+(id)operationWithURLSessionTask:(id)arg1 ;
-(void)cancel;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithURLSessionTask:(id)arg1 ;
-(void)execute;
@end
