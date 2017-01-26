/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:41 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKModifyRecordAccessOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	NSArray* _recordIDsToGrant;
	NSArray* _recordIDsToRevoke;

}

@property (nonatomic,retain) NSArray * recordIDsToGrant;               //@synthesize recordIDsToGrant=_recordIDsToGrant - In the implementation block
@property (nonatomic,retain) NSArray * recordIDsToRevoke;              //@synthesize recordIDsToRevoke=_recordIDsToRevoke - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)recordIDsToGrant;
-(NSArray *)recordIDsToRevoke;
-(void)setRecordIDsToGrant:(NSArray *)arg1 ;
-(void)setRecordIDsToRevoke:(NSArray *)arg1 ;
@end
