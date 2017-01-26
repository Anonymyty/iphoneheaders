/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CTMessageStatus : NSObject {

	unsigned _messageId;
	int _messageType;
	int _result;

}

@property (readonly) unsigned messageId;              //@synthesize messageId=_messageId - In the implementation block
@property (readonly) int messageType;                 //@synthesize messageType=_messageType - In the implementation block
@property (readonly) int result;                      //@synthesize result=_result - In the implementation block
-(id)initWithMessageId:(unsigned)arg1 messageType:(int)arg2 result:(int)arg3 ;
-(int)result;
-(int)messageType;
-(unsigned)messageId;
@end
