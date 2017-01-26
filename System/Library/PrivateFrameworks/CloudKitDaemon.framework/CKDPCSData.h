/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface CKDPCSData : NSObject <NSSecureCoding> {

	OpaquePCSShareProtectionRef _pcs;
	NSString* _etag;
	NSData* _pcsData;

}

@property (nonatomic,readonly) id<NSSecureCoding> itemID; 
@property (assign,nonatomic) OpaquePCSShareProtectionRef pcs;              //@synthesize pcs=_pcs - In the implementation block
@property (nonatomic,copy) NSString * etag;                                //@synthesize etag=_etag - In the implementation block
@property (nonatomic,copy) NSData * pcsData;                               //@synthesize pcsData=_pcsData - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)etag;
-(void)setEtag:(NSString *)arg1 ;
-(id<NSSecureCoding>)itemID;
-(id)CKPropertiesDescription;
-(void)setPcs:(OpaquePCSShareProtectionRef)arg1 ;
-(OpaquePCSShareProtectionRef)pcs;
-(void)setPcsData:(NSData *)arg1 ;
-(NSData *)pcsData;
-(id)initWithPCSData:(id)arg1 ;
-(BOOL)decryptPCSDataWithManager:(id)arg1 error:(id*)arg2 ;
@end
