/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:34 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <libobjc.A.dylib/MFMessageIterationFilter.h>

@class NSIndexSet, NSString;

@interface MFMailboxMessageIterationFilter : NSObject <MFMessageIterationFilter> {

	NSIndexSet* _mailboxes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)filterMessageWithStatement:(sqlite3_stmtRef)arg1 ;
-(id)initWithMailboxes:(id)arg1 ;
@end
