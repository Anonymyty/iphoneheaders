/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol AFSessionObject <NSObject>
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@required
-(NSString *)aceId;
-(void)setAceId:(id)arg1;
-(NSString *)refId;
-(void)setRefId:(id)arg1;
-(BOOL)af_supportsSendCompletions;
-(void)af_addSendCompletion:(/*^block*/id)arg1;
-(void)af_dispatchSendCompletionsWithResult:(long long)arg1 error:(id)arg2;
-(id)serializedAceDataError:(id*)arg1;
-(BOOL)af_bufferingAllowedDuringActiveSession;
-(void)af_logDiagnostics;

@end

