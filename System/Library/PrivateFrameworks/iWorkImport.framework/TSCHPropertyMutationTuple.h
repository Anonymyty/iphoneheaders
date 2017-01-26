/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSCHStyleOwning;
@class NSDictionary;

@interface TSCHPropertyMutationTuple : NSObject {

	id<TSCHStyleOwning> mStyleOwner;
	NSDictionary* mMutations;

}

@property (readonly) id<TSCHStyleOwning> styleOwner; 
@property (readonly) NSDictionary * mutations; 
-(id)styleOwnerRef;
-(id)indirectTuple;
-(id)initWithStyleOwner:(id)arg1 mutations:(id)arg2 ;
-(id<TSCHStyleOwning>)styleOwner;
-(id)initWithStyleOwner:(id)arg1 mutationMap:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(NSDictionary *)mutations;
@end
